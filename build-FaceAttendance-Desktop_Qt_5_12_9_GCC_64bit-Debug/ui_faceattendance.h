/********************************************************************************
** Form generated from reading UI file 'faceattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDANCE_H
#define UI_FACEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendance
{
public:
    QWidget *centralwidget;
    QWidget *videoWidget;
    QWidget *widgetLb;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *checkLb;
    QLabel *textLb;
    QLabel *headpicLb;
    QLabel *videoLb;
    QWidget *widget1;
    QLabel *titleLb;
    QLabel *headLb;
    QFrame *frame;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *employeeIdLb;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *nameLb;
    QFrame *frame_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *departmentLb;
    QFrame *frame_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *timeLb;

    void setupUi(QMainWindow *FaceAttendance)
    {
        if (FaceAttendance->objectName().isEmpty())
            FaceAttendance->setObjectName(QString::fromUtf8("FaceAttendance"));
        FaceAttendance->resize(800, 480);
        QFont font;
        font.setPointSize(12);
        FaceAttendance->setFont(font);
        FaceAttendance->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(FaceAttendance);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        videoWidget = new QWidget(centralwidget);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setGeometry(QRect(0, 0, 480, 480));
        videoWidget->setStyleSheet(QString::fromUtf8(""));
        widgetLb = new QWidget(videoWidget);
        widgetLb->setObjectName(QString::fromUtf8("widgetLb"));
        widgetLb->setGeometry(QRect(80, 370, 320, 80));
        widgetLb->setStyleSheet(QString::fromUtf8("background-color: #a6313236;\n"
"border-radius: 10px\n"
""));
        widget = new QWidget(widgetLb);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 13, 201, 61));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkLb = new QLabel(widget);
        checkLb->setObjectName(QString::fromUtf8("checkLb"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkLb->sizePolicy().hasHeightForWidth());
        checkLb->setSizePolicy(sizePolicy);
        checkLb->setMaximumSize(QSize(31, 21));
        checkLb->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/yes.png);\n"
"background-color: #00313236;\n"
""));

        horizontalLayout_2->addWidget(checkLb);

        textLb = new QLabel(widget);
        textLb->setObjectName(QString::fromUtf8("textLb"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLb->sizePolicy().hasHeightForWidth());
        textLb->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        textLb->setFont(font1);
        textLb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 24pt \"Ubuntu\";\n"
"background-color: #00313236;"));
        textLb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(textLb);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 5);
        headpicLb = new QLabel(videoWidget);
        headpicLb->setObjectName(QString::fromUtf8("headpicLb"));
        headpicLb->setGeometry(QRect(100, 50, 266, 266));
        headpicLb->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/crc.png);"));
        videoLb = new QLabel(videoWidget);
        videoLb->setObjectName(QString::fromUtf8("videoLb"));
        videoLb->setGeometry(QRect(0, 0, 480, 480));
        sizePolicy1.setHeightForWidth(videoLb->sizePolicy().hasHeightForWidth());
        videoLb->setSizePolicy(sizePolicy1);
        videoLb->setLayoutDirection(Qt::LeftToRight);
        videoLb->setStyleSheet(QString::fromUtf8("background-color: #003e4236;"));
        widgetLb->raise();
        videoLb->raise();
        headpicLb->raise();
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(480, 0, 320, 480));
        widget1->setStyleSheet(QString::fromUtf8("background-color: #cc313236;\n"
"border: #ff313236;\n"
"border-radius: 4px"));
        titleLb = new QLabel(widget1);
        titleLb->setObjectName(QString::fromUtf8("titleLb"));
        titleLb->setGeometry(QRect(0, 0, 320, 50));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        titleLb->setFont(font2);
        titleLb->setLayoutDirection(Qt::LeftToRight);
        titleLb->setStyleSheet(QString::fromUtf8("color: #fefefe;\n"
"background-color: #ff313236;"));
        titleLb->setAlignment(Qt::AlignCenter);
        headLb = new QLabel(widget1);
        headLb->setObjectName(QString::fromUtf8("headLb"));
        headLb->setGeometry(QRect(90, 70, 130, 130));
        headLb->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(widget1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(39, 219, 250, 50));
        frame->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget2 = new QWidget(frame);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 1, 251, 51));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("color: #ff808183;"));

        horizontalLayout_3->addWidget(label_2);

        employeeIdLb = new QLabel(widget2);
        employeeIdLb->setObjectName(QString::fromUtf8("employeeIdLb"));
        sizePolicy1.setHeightForWidth(employeeIdLb->sizePolicy().hasHeightForWidth());
        employeeIdLb->setSizePolicy(sizePolicy1);
        employeeIdLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        employeeIdLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(employeeIdLb);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);
        frame_2 = new QFrame(widget1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(39, 279, 251, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 1, 251, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("color: #ff808183;"));

        horizontalLayout_4->addWidget(label_4);

        nameLb = new QLabel(layoutWidget);
        nameLb->setObjectName(QString::fromUtf8("nameLb"));
        sizePolicy1.setHeightForWidth(nameLb->sizePolicy().hasHeightForWidth());
        nameLb->setSizePolicy(sizePolicy1);
        nameLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        nameLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(nameLb);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);
        frame_3 = new QFrame(widget1);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(40, 340, 251, 51));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 1, 251, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("color: #ff808183;"));

        horizontalLayout_5->addWidget(label_6);

        departmentLb = new QLabel(layoutWidget_2);
        departmentLb->setObjectName(QString::fromUtf8("departmentLb"));
        sizePolicy1.setHeightForWidth(departmentLb->sizePolicy().hasHeightForWidth());
        departmentLb->setSizePolicy(sizePolicy1);
        departmentLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        departmentLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(departmentLb);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 3);
        frame_4 = new QFrame(widget1);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(40, 400, 251, 51));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 1, 251, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setStyleSheet(QString::fromUtf8("color: #ff808183;"));

        horizontalLayout_6->addWidget(label_8);

        timeLb = new QLabel(layoutWidget_3);
        timeLb->setObjectName(QString::fromUtf8("timeLb"));
        sizePolicy1.setHeightForWidth(timeLb->sizePolicy().hasHeightForWidth());
        timeLb->setSizePolicy(sizePolicy1);
        timeLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        timeLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(timeLb);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 3);
        FaceAttendance->setCentralWidget(centralwidget);

        retranslateUi(FaceAttendance);

        QMetaObject::connectSlotsByName(FaceAttendance);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendance)
    {
        FaceAttendance->setWindowTitle(QApplication::translate("FaceAttendance", "FaceAttendance", nullptr));
        checkLb->setText(QString());
        textLb->setText(QApplication::translate("FaceAttendance", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        headpicLb->setText(QString());
        videoLb->setText(QString());
        titleLb->setText(QApplication::translate("FaceAttendance", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headLb->setText(QString());
        label_2->setText(QApplication::translate("FaceAttendance", "\345\267\245\345\217\267\357\274\232", nullptr));
        employeeIdLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("FaceAttendance", "\345\247\223\345\220\215\357\274\232", nullptr));
        nameLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("FaceAttendance", "\351\203\250\351\227\250\357\274\232", nullptr));
        departmentLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("FaceAttendance", "\346\227\266\351\227\264\357\274\232", nullptr));
        timeLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttendance: public Ui_FaceAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDANCE_H
