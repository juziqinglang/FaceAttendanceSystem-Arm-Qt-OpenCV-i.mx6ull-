#include "faceattendance.h"
#include "ui_faceattendance.h"
#include <QImage>
#include <QPainter>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>

FaceAttendance::FaceAttendance(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttendance)
{
    ui->setupUi(this);

    //打开摄像头
    cap.open(2); // 能够成功打开USB免驱摄像头/dev/video2，但是延迟有点久；不能够打开OV5640摄像头/dev/video1，一直报错VIDIOC_QUERYCTRL: Inappropriate ioctl for device
    if (!cap.isOpened())
    {
           qDebug() << "Cannot open camera";
           return;
    }

    startTimer(100); //100ms

    //导入级联分类器文件
    if(!cascade.load("/usr/local/share/haarcascade_frontalface_alt2.xml"))
    {
        qDebug() << "Failed to load cascade file!";
        return;
    }

    //QTcpSocket断开连接时会发送disconnected信号,连接成功会发送connected
    connect(&msocket, &QTcpSocket::disconnected, this, &FaceAttendance::start_connect);
    connect(&msocket, &QTcpSocket::connected, this, &FaceAttendance::stop_connect);

    //关联接收数据的槽函数
    connect(&msocket, &QTcpSocket::readyRead, this, &FaceAttendance::recv_data);

    //关联信号和槽函数：作用时定时连接服务器
    connect(&mtimer, &QTimer::timeout, this, &FaceAttendance::timer_connect);
    //启动定时器:每5秒钟连接一次
    mtimer.start(5000);

    flag = 0;

    ui->textLb->hide();
    ui->checkLb->hide();
}

FaceAttendance::~FaceAttendance()
{
    delete ui;
}

void FaceAttendance::timerEvent(QTimerEvent *e)//定时器的中断回调函数
{
    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage); //读取一帧数据
    }
    if(srcImage.data == nullptr) return;
    //将opencv里面的Mat格式数据(BGR)转换为Qt里面的QImage(RGB)
    cvtColor(srcImage, srcImage, COLOR_BGR2RGB);
    QImage image(srcImage.data, srcImage.cols, srcImage.rows, srcImage.step1(), QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    mmp.scaledToWidth(ui->videoLb->width());
    ui->videoLb->setPixmap(mmp);

    //转灰度图
    Mat grayImage;
    cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

    //检测人脸数据
    std::vector<Rect> faceRects;
    cascade.detectMultiScale(grayImage, faceRects);

    if(faceRects.size() > 0 && flag >= 0)
    {
        Rect rect = faceRects.at(0); //第一个人脸的矩形框
        //rectangle(srcImage, rect, Scalar(0, 0, 255)); //画出矩形框，颜色BGR
        //如果检测到人脸，则移动人脸框，实现跟随效果
        ui->headLb->move(rect.x, rect.y);

        if(flag > 2)
        {
            //考勤终端人脸数据的压缩和发送
            //把Mat数据转化为QByteArray -> 编码成jpg格式
            std::vector<uchar> buf;
            cv::imencode(".jpg",srcImage, buf);
            QByteArray byte((const char *)buf.data(), buf.size());
            //准备发送
            quint64 backsize = byte.size();
            QByteArray sendData;
            QDataStream stream(&sendData, QIODevice::WriteOnly);
            stream.setVersion(QDataStream::Qt_5_12);
            stream << backsize << byte;
            //发送
            msocket.write(sendData);
            flag = -2;
            qDebug() << "已经向服务端发送面部数据" << endl;

            matFace = srcImage(rect); //将矩形框架里面的数据保存起来
        }
        flag++;
    }

    if(faceRects.size() == 0) //否则让人脸框处在中心位置
    {
        ui->headLb->move(100, 50);
        ui->textLb->hide();
        ui->checkLb->hide();
        flag = 0;
    }
}

void FaceAttendance::timer_connect()
{
    //连接服务器
    msocket.connectToHost("192.168.1.104", 8080);
    qDebug() << "正在连接服务器......" << endl;
}

void FaceAttendance::stop_connect()
{
    mtimer.stop();//关闭定时器
    qDebug() << "成功连接服务器" << endl;
}

void FaceAttendance::start_connect()
{
    mtimer.start(5000); //启动定时器
    qDebug() << "断开连接" << endl;
}

void FaceAttendance::recv_data()
{
    QByteArray array = msocket.readAll();
    qDebug() << array << endl;

    //解析接收到的json数据
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array, &err);
    if(err.error != QJsonParseError::NoError)
    {
        qDebug() << "json数据错误" << endl;
        return;
    }

    QJsonObject obj = doc.object();
    QString employeeID = obj.value("employeeID").toString();
    QString name = obj.value("name").toString();
    QString department = obj.value("department").toString();
    QString time = obj.value("time").toString();

    ui->employeeIdLb->setText(employeeID);
    ui->nameLb->setText(name);
    ui->departmentLb->setText(department);
    ui->timeLb->setText(time);

    //通过样式来显示图片
    ui->headpicLb->setStyleSheet("border-radius:65px; background-color: #00313236; border-image: url(./face.jpg);");
    ui->textLb->show();
    ui->checkLb->show();
}




