#include "attendancewin.h"
#include "ui_attendancewin.h"

#include <QDateTime>
#include <QSqlQuery>
#include <QThread>

AttendanceWin::AttendanceWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendanceWin)
{
    ui->setupUi(this);
    //当有客户端企图连接时，QTcpserver会发送newConnection信号
    connect(&mserver, &QTcpServer::newConnection, this, &AttendanceWin::accept_clients);
    mserver.listen(QHostAddress::Any, 8080);//监听，服务器端开启
    bsize = 0;

    //给sql模型绑定表格
    model.setTable("employee");

    //创建一个线程
    QThread *thread = new QThread();
    //把QFaceObject对象移动到thread线程中执行
    fObj.moveToThread(thread);
    //启动线程
    thread->start();

    connect(this, &AttendanceWin::query, &fObj, &QFaceObject::face_query);
    connect(&fObj, &QFaceObject::sendFaceId, this, &AttendanceWin::recv_faceId);
}

AttendanceWin::~AttendanceWin()
{
    delete ui;
}

//接受客户端连接
void AttendanceWin::accept_clients()
{
    //获取客户端通信的套接字
   msocket = mserver.nextPendingConnection();

   //当客户端有数据到达时会发送readyRead信号
   connect(msocket, &QTcpSocket::readyRead, this, &AttendanceWin::read_data);
}

//读取客户端发送的数据
void AttendanceWin::read_data()
{
    QDataStream stream(msocket); //把套接字绑定到数据流
    stream.setVersion(QDataStream::Qt_5_12);

    if(bsize == 0)
    {
        if(msocket->bytesAvailable() < (qint64)sizeof(bsize)) return;
        //采集数据长度
        stream >> bsize;
    }

    if(msocket->bytesAvailable() < bsize)
    {
        return ;//说明数据还没有发送完成，返回继续等待
    }

    QByteArray data;
    stream >> data;
    bsize = 0;
    if(data.size() == 0) //没有读取到数据
    {
        return ;
    }

    //显示图片
    QPixmap mmp;
    mmp.loadFromData(data, "jpg");
    mmp = mmp.scaled(ui->pictureLb->size());
    ui->pictureLb->setPixmap(mmp);

    //识别人脸
    cv::Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(), data.data(), data.size());
    faceImage = cv::imdecode(decode, cv::IMREAD_COLOR); //将jpg格式的图片进行解码

    emit query(faceImage); //所以通过在主线程发送query信号来触发在子线程的face_query()函数
    //int faceId = fObj.face_query(faceImage); //人脸查询消耗资源较多
    //qDebug() << faceId << endl;
}

void AttendanceWin::recv_faceId(int64_t faceId)
{
    qDebug() << "识别到的人脸ID为:" << faceId << endl;

    //从数据库中查询faceId对应的个人信息
    if(faceId < 0)
    {
        QString msg = "{\"employeeID\":\"\", \"name\":\"\", \"department\":\"\", \"time\":\"\"}";
        msocket->write(msg.toUtf8());
        return ;
    }
    //给模型设置过滤器
    model.setFilter(QString("faceID=%1").arg(faceId));
    //查询
    model.select();
    //判断是否查询到数据
    if(model.rowCount() == 1)
    {
        //工号，姓名，部门，时间
        //{employeeID:%1, name:%2, department:软件，time:%3}
        QSqlRecord record = model.record(0);
        QString jsonMsg = QString("{\"employeeID\":\"%1\", \"name\":\"%2\", \"department\":\"software\", \"time\":\"%3\"}")
                .arg(record.value("employeeID").toString()).arg(record.value("name").toString())
                .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

        //把数据写入数据库-考勤表
        QString insertSql = QString("insert into attendance(employeeID) values('%1')").arg(record.value("employeeID").toString());
        QSqlQuery query;
        if(!query.exec(insertSql)) //执行插入语句失败
        {
            QString msg = "{\"employeeID\":\"\", \"name\":\"\", \"department\":\"\", \"time\":\"\"}";
            msocket->write(msg.toUtf8()); //考勤失败发送值为空的字符串
            return ;
        }
        //考勤成功才把打包好的数据发送给客户端
        msocket->write(jsonMsg.toUtf8());
    }
}

