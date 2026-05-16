#ifndef FACEATTENDANCE_H
#define FACEATTENDANCE_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
#include <QTcpSocket>
#include <QTimer>

using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class FaceAttendance; }
QT_END_NAMESPACE

class FaceAttendance : public QMainWindow
{
    Q_OBJECT

public:
    FaceAttendance(QWidget *parent = nullptr);
    ~FaceAttendance();
    //定时器事件
    void timerEvent(QTimerEvent *e);

private slots:
    void timer_connect();
    void stop_connect();
    void start_connect();

    void recv_data();

private:
    Ui::FaceAttendance *ui;

    //摄像头
    VideoCapture cap;

    //harr--级联分类器
    cv::CascadeClassifier cascade;

    //创建网络套接字
    QTcpSocket msocket;
    QTimer mtimer;

    //标志是否是同一个人人脸进入到识别区域
    int flag;

    //保存人脸数据
    cv::Mat matFace;
};
#endif // FACEATTENDANCE_H

