#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include "qfaceobject.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>


RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据并且显示在界面上
    if(cap.isOpened()) //确认摄像头是否开启
    {
        cap >> Mimage;
        if(Mimage.data == nullptr) return;
    }

    //Mat -> QImage
    cv::Mat rgbMimage;
    cv::cvtColor(Mimage, rgbMimage, cv::COLOR_BGR2RGB);
    QImage Qimage(rgbMimage.data, rgbMimage.cols, rgbMimage.rows, rgbMimage.step1(), QImage::Format_RGB888);

    //在qt界面上显示
    QPixmap mmp = QPixmap::fromImage(Qimage);
    mmp = mmp.scaledToWidth(ui->headPicLb->width());
    ui->headPicLb->setPixmap(mmp);

}

void RegisterWin::on_resetBt_clicked() //重置按钮
{
    //清空数据
    ui->nameEdit->clear();
    ui->birthdayEdit->clear();
    ui->addressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}

void RegisterWin::on_addHeadPicBt_clicked() //点击“添加头像”的槽函数
{
    //通过文件对话框选择图片路径
    QString filePath = QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filePath);

    //显示图片
    QPixmap mmp(filePath);
    mmp = mmp.scaledToWidth(ui->headPicLb->width());
    ui->headPicLb->setPixmap(mmp);
}

void RegisterWin::on_registerBt_clicked() //注册按钮的槽函数
{
    //1.通过照片，结合faceObject模块得到faceID
    QFaceObject faceObject;
    cv::Mat image = cv::imread(ui->picFileEdit->text().toUtf8().data());
    int faceID = faceObject.face_register(image);

    //把头像保存到一个固定路径下
    QString headFile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    cv::imwrite(headFile.toUtf8().data(), image);

    //2.将个人信息存储到数据库employee
    QSqlTableModel model;
    model.setTable("employee"); //设置表名
    QSqlRecord record = model.record();
    //设置数据
    record.setValue("name", ui->nameEdit->text());
    record.setValue("sex", ui->manRB->isChecked()?"男":"女");
    record.setValue("birthday", ui->birthdayEdit->text());
    record.setValue("address", ui->addressEdit->text());
    record.setValue("phone", ui->phoneEdit->text());
    record.setValue("faceID", faceID);
    //头像路径
    record.setValue("headFile", headFile);
    //把记录插入到数据库表格中
    bool ret = model.insertRecord(0, record);
    //3.提示注册成功
    if(ret)
    {
        QMessageBox::information(this, "注册提示", "注册成功");
        model.submitAll();//提交
    }
    else
    {
        QMessageBox::information(this, "注册提示", "注册失败");
    }

}

void RegisterWin::on_turnOnCamBt_clicked() //打开摄像头 按钮
{
    if(ui->turnOnCamBt->text() == "打开摄像头")
    {
        if(cap.open(0)) //dev/video0
        {
            ui->turnOnCamBt->setText("关闭摄像头");
            //启动定时器事件
            timerId = startTimer(100);
        }
    }
    else
    {
        //关闭定时器
        killTimer(timerId);
        ui->turnOnCamBt->setText("打开摄像头");
        cap.release();//关闭opencv调用里面的摄像头
    }
}


void RegisterWin::on_takePhotosBt_clicked() //拍照 按钮
{
    //把头像保存到一个固定路径下
    QString headFile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    ui->picFileEdit->setText(headFile); //同时显示图片路径
    cv::imwrite(headFile.toUtf8().data(), Mimage);
    //关闭定时器
    killTimer(timerId);
    ui->turnOnCamBt->setText("打开摄像头");
    cap.release();//关闭opencv调用里面的摄像头
}

void RegisterWin::on_addCamBt_clicked()
{

}
