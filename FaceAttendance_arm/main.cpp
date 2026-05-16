#include "faceattendance.h"

#include <QFontDatabase>
#include <QFont>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 加载自定义字体
    int fontId = QFontDatabase::addApplicationFont("/usr/share/fonts/wqy-microhei.ttc");
    QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).first();
    QFont font(fontFamily);
    if (fontId != -1)
    {
        a.setFont(font);   // 全局使用该字体
        qDebug() << "Font loaded:" << fontFamily;
        qDebug() << "Success to load Chinese font!";
    } else {
        qDebug() << "Failed to load Chinese font!";
    }

    FaceAttendance w;
    w.show();
    return a.exec();
}
