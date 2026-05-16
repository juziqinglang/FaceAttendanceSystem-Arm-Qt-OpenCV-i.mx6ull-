#ifndef ATTENDANCEWIN_H
#define ATTENDANCEWIN_H

#include "qfaceobject.h"

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlTableModel>
#include <QSqlRecord>

QT_BEGIN_NAMESPACE
namespace Ui { class AttendanceWin; }
QT_END_NAMESPACE

class AttendanceWin : public QMainWindow
{
    Q_OBJECT

public:
    AttendanceWin(QWidget *parent = nullptr);
    ~AttendanceWin();

signals:
    void query(cv::Mat &faceImage);

protected slots:
    void accept_clients();
    void read_data();
    void recv_faceId(int64_t faceId);

private:
    Ui::AttendanceWin *ui;
    QTcpServer mserver;
    QTcpSocket *msocket;
    qint64 bsize;
    QFaceObject fObj;
    QSqlTableModel model;
};
#endif // ATTENDANCEWIN_H
