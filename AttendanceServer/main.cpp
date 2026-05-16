#include "attendancewin.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <selectwin.h>

#include "registerwin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qRegisterMetaType<cv::Mat>("cv::Mat&");
    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<int64_t>("int64_t");

//    RegisterWin ww; //注册界面
//    ww.show();

    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库的名称
    db.setDatabaseName("server.db");
    //打开数据库
    if(!db.open())
    {
        qDebug() << db.lastError().text() << endl;
    }

    //创建员工信息表格
    QString createSql = "create table if not exists employee(employeeID integer primary key autoincrement, name varchar(256), sex varchar(32),"
                        "birthday text, address text, phone text, faceID integer unique, headfile text)";

    QSqlQuery query;
    if(!query.exec(createSql))
    {
        qDebug() << db.lastError().text() << endl;
        return -1;
    }
    //创建员工考勤表格
    createSql = "create table if not exists attendance(attendanceID integer primary key autoincrement, employeeID integer,"
                        "attendanceTime TimeStamp NOT NULL DEFAULT(datetime('now', 'localtime')))";
    if(!query.exec(createSql))
    {
        qDebug() << db.lastError().text() << endl;
        return -1;
    }

    AttendanceWin w; //考勤界面
    w.show();

//    SelectWin sw; //查询界面
//    sw.show();

    return a.exec();
}
