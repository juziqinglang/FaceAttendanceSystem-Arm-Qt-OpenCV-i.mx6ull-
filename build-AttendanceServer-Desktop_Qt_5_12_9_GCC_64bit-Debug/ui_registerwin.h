/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QLabel *headPicLb;
    QLineEdit *picFileEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addHeadPicBt;
    QPushButton *turnOnCamBt;
    QPushButton *takePhotosBt;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *manRB;
    QRadioButton *womanRB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *phoneEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *registerBt;
    QPushButton *resetBt;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(1000, 650);
        headPicLb = new QLabel(RegisterWin);
        headPicLb->setObjectName(QString::fromUtf8("headPicLb"));
        headPicLb->setGeometry(QRect(540, 10, 400, 400));
        headPicLb->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 240, 107);"));
        picFileEdit = new QLineEdit(RegisterWin);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));
        picFileEdit->setGeometry(QRect(540, 430, 400, 50));
        widget = new QWidget(RegisterWin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(540, 510, 401, 91));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        addHeadPicBt = new QPushButton(widget);
        addHeadPicBt->setObjectName(QString::fromUtf8("addHeadPicBt"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addHeadPicBt->sizePolicy().hasHeightForWidth());
        addHeadPicBt->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(addHeadPicBt);

        turnOnCamBt = new QPushButton(widget);
        turnOnCamBt->setObjectName(QString::fromUtf8("turnOnCamBt"));
        sizePolicy.setHeightForWidth(turnOnCamBt->sizePolicy().hasHeightForWidth());
        turnOnCamBt->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(turnOnCamBt);

        takePhotosBt = new QPushButton(widget);
        takePhotosBt->setObjectName(QString::fromUtf8("takePhotosBt"));
        sizePolicy.setHeightForWidth(takePhotosBt->sizePolicy().hasHeightForWidth());
        takePhotosBt->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(takePhotosBt);

        widget1 = new QWidget(RegisterWin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 471, 471));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(widget1);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        manRB = new QRadioButton(widget1);
        manRB->setObjectName(QString::fromUtf8("manRB"));
        manRB->setFont(font);

        horizontalLayout_2->addWidget(manRB);

        womanRB = new QRadioButton(widget1);
        womanRB->setObjectName(QString::fromUtf8("womanRB"));
        womanRB->setFont(font);

        horizontalLayout_2->addWidget(womanRB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        birthdayEdit = new QDateEdit(widget1);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy2.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy2);
        birthdayEdit->setFont(font);
        birthdayEdit->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_3->addWidget(birthdayEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        addressEdit = new QLineEdit(widget1);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        sizePolicy2.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(addressEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        phoneEdit = new QLineEdit(widget1);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy2.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        widget2 = new QWidget(RegisterWin);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 490, 471, 121));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        registerBt = new QPushButton(widget2);
        registerBt->setObjectName(QString::fromUtf8("registerBt"));
        sizePolicy2.setHeightForWidth(registerBt->sizePolicy().hasHeightForWidth());
        registerBt->setSizePolicy(sizePolicy2);
        registerBt->setFont(font);

        horizontalLayout_6->addWidget(registerBt);

        resetBt = new QPushButton(widget2);
        resetBt->setObjectName(QString::fromUtf8("resetBt"));
        sizePolicy2.setHeightForWidth(resetBt->sizePolicy().hasHeightForWidth());
        resetBt->setSizePolicy(sizePolicy2);
        resetBt->setFont(font);

        horizontalLayout_6->addWidget(resetBt);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QApplication::translate("RegisterWin", "Form", nullptr));
        headPicLb->setText(QString());
        addHeadPicBt->setText(QApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        turnOnCamBt->setText(QApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        takePhotosBt->setText(QApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
        label->setText(QApplication::translate("RegisterWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("RegisterWin", "\346\200\247\345\210\253\357\274\232", nullptr));
        manRB->setText(QApplication::translate("RegisterWin", "\347\224\267", nullptr));
        womanRB->setText(QApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_3->setText(QApplication::translate("RegisterWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_4->setText(QApplication::translate("RegisterWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QApplication::translate("RegisterWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        registerBt->setText(QApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetBt->setText(QApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
