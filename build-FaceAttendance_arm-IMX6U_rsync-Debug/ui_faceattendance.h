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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendance
{
public:
    QWidget *videoWidget;
    QLabel *videoLb;
    QLabel *headLb;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *checkLb;
    QLabel *textLb;
    QWidget *textWidget;
    QLabel *headTitleLb;
    QLabel *headpicLb;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *employeeIdLb;
    QFrame *frame_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *nameLb;
    QFrame *frame_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *departmentLb;
    QFrame *frame_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *timeLb;

    void setupUi(QWidget *FaceAttendance)
    {
        if (FaceAttendance->objectName().isEmpty())
            FaceAttendance->setObjectName(QString::fromUtf8("FaceAttendance"));
        FaceAttendance->resize(1024, 600);
        videoWidget = new QWidget(FaceAttendance);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setGeometry(QRect(0, 0, 600, 600));
        videoLb = new QLabel(videoWidget);
        videoLb->setObjectName(QString::fromUtf8("videoLb"));
        videoLb->setGeometry(QRect(0, 0, 600, 600));
        headLb = new QLabel(videoWidget);
        headLb->setObjectName(QString::fromUtf8("headLb"));
        headLb->setGeometry(QRect(130, 70, 300, 300));
        headLb->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/crc.png);"));
        layoutWidget = new QWidget(videoWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 480, 217, 64));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkLb = new QLabel(layoutWidget);
        checkLb->setObjectName(QString::fromUtf8("checkLb"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkLb->sizePolicy().hasHeightForWidth());
        checkLb->setSizePolicy(sizePolicy);
        checkLb->setMinimumSize(QSize(40, 40));
        checkLb->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/yes.png);"));

        horizontalLayout->addWidget(checkLb);

        textLb = new QLabel(layoutWidget);
        textLb->setObjectName(QString::fromUtf8("textLb"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        textLb->setFont(font);
        textLb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(textLb);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        textWidget = new QWidget(FaceAttendance);
        textWidget->setObjectName(QString::fromUtf8("textWidget"));
        textWidget->setGeometry(QRect(600, 0, 424, 600));
        textWidget->setStyleSheet(QString::fromUtf8("background-color: #a6313236; "));
        headTitleLb = new QLabel(textWidget);
        headTitleLb->setObjectName(QString::fromUtf8("headTitleLb"));
        headTitleLb->setGeometry(QRect(-1, 0, 431, 51));
        QFont font1;
        font1.setPointSize(20);
        headTitleLb->setFont(font1);
        headTitleLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        headTitleLb->setAlignment(Qt::AlignCenter);
        headpicLb = new QLabel(textWidget);
        headpicLb->setObjectName(QString::fromUtf8("headpicLb"));
        headpicLb->setGeometry(QRect(120, 80, 200, 200));
        headpicLb->setStyleSheet(QString::fromUtf8("border-radius: 100px;\n"
"\n"
""));
        layoutWidget1 = new QWidget(textWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 310, 341, 271));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 341, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: #efefef;"));

        horizontalLayout_2->addWidget(label_2);

        employeeIdLb = new QLabel(layoutWidget2);
        employeeIdLb->setObjectName(QString::fromUtf8("employeeIdLb"));
        employeeIdLb->setFont(font2);
        employeeIdLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));

        horizontalLayout_2->addWidget(employeeIdLb);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(layoutWidget1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget3 = new QWidget(frame_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 341, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: #efefef;"));

        horizontalLayout_3->addWidget(label_3);

        nameLb = new QLabel(layoutWidget3);
        nameLb->setObjectName(QString::fromUtf8("nameLb"));
        nameLb->setFont(font2);
        nameLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));

        horizontalLayout_3->addWidget(nameLb);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(layoutWidget1);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 341, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: #efefef;"));

        horizontalLayout_4->addWidget(label_4);

        departmentLb = new QLabel(layoutWidget_2);
        departmentLb->setObjectName(QString::fromUtf8("departmentLb"));
        departmentLb->setFont(font2);
        departmentLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));

        horizontalLayout_4->addWidget(departmentLb);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);

        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(layoutWidget1);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #ff313236;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 341, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: #efefef;"));

        horizontalLayout_5->addWidget(label_5);

        timeLb = new QLabel(layoutWidget_3);
        timeLb->setObjectName(QString::fromUtf8("timeLb"));
        timeLb->setFont(font2);
        timeLb->setStyleSheet(QString::fromUtf8("color: #ffffff;"));

        horizontalLayout_5->addWidget(timeLb);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout->addWidget(frame_4);


        retranslateUi(FaceAttendance);

        QMetaObject::connectSlotsByName(FaceAttendance);
    } // setupUi

    void retranslateUi(QWidget *FaceAttendance)
    {
        FaceAttendance->setWindowTitle(QApplication::translate("FaceAttendance", "FaceAttendance", nullptr));
        videoLb->setText(QString());
        headLb->setText(QString());
        checkLb->setText(QString());
        textLb->setText(QApplication::translate("FaceAttendance", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        headTitleLb->setText(QApplication::translate("FaceAttendance", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headpicLb->setText(QString());
        label_2->setText(QApplication::translate("FaceAttendance", "\345\267\245\345\217\267:", nullptr));
        employeeIdLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("FaceAttendance", "\345\220\215\345\255\227:", nullptr));
        nameLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("FaceAttendance", "\351\203\250\351\227\250:", nullptr));
        departmentLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("FaceAttendance", "\346\227\266\351\227\264:", nullptr));
        timeLb->setText(QApplication::translate("FaceAttendance", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttendance: public Ui_FaceAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDANCE_H
