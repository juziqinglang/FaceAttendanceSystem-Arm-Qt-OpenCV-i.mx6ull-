#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include <opencv2/opencv.hpp>

namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();
    void  timerEvent(QTimerEvent *e);

private slots:
    void on_resetBt_clicked();

    void on_addCamBt_clicked();

    void on_addHeadPicBt_clicked();

    void on_registerBt_clicked();

    void on_turnOnCamBt_clicked();

    void on_takePhotosBt_clicked();

private:
    Ui::RegisterWin *ui;
    int timerId;
    cv::VideoCapture cap;
    cv::Mat Mimage;
};

#endif // REGISTERWIN_H
