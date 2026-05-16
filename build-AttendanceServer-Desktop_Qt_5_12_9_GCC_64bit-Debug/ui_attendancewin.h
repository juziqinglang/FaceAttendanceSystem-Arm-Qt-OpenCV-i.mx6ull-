/********************************************************************************
** Form generated from reading UI file 'attendancewin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEWIN_H
#define UI_ATTENDANCEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <registerwin.h>
#include <selectwin.h>

QT_BEGIN_NAMESPACE

class Ui_AttendanceWin
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *showWidget;
    QLabel *pictureLb;
    RegisterWin *registerWidget;
    SelectWin *selectWidget;

    void setupUi(QMainWindow *AttendanceWin)
    {
        if (AttendanceWin->objectName().isEmpty())
            AttendanceWin->setObjectName(QString::fromUtf8("AttendanceWin"));
        AttendanceWin->resize(1000, 650);
        centralwidget = new QWidget(AttendanceWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1000, 650));
        showWidget = new QWidget();
        showWidget->setObjectName(QString::fromUtf8("showWidget"));
        pictureLb = new QLabel(showWidget);
        pictureLb->setObjectName(QString::fromUtf8("pictureLb"));
        pictureLb->setGeometry(QRect(190, 30, 550, 550));
        pictureLb->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        tabWidget->addTab(showWidget, QString());
        registerWidget = new RegisterWin();
        registerWidget->setObjectName(QString::fromUtf8("registerWidget"));
        tabWidget->addTab(registerWidget, QString());
        selectWidget = new SelectWin();
        selectWidget->setObjectName(QString::fromUtf8("selectWidget"));
        tabWidget->addTab(selectWidget, QString());
        AttendanceWin->setCentralWidget(centralwidget);

        retranslateUi(AttendanceWin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AttendanceWin);
    } // setupUi

    void retranslateUi(QMainWindow *AttendanceWin)
    {
        AttendanceWin->setWindowTitle(QApplication::translate("AttendanceWin", "AttendanceWin", nullptr));
        pictureLb->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(showWidget), QApplication::translate("AttendanceWin", "\350\200\203\345\213\244\345\233\276\345\203\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(registerWidget), QApplication::translate("AttendanceWin", "\346\263\250\345\206\214\347\252\227\345\217\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(selectWidget), QApplication::translate("AttendanceWin", "\346\237\245\350\257\242\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceWin: public Ui_AttendanceWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEWIN_H
