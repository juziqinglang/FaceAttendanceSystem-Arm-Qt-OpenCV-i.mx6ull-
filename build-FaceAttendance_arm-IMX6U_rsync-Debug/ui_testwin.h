/********************************************************************************
** Form generated from reading UI file 'testwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIN_H
#define UI_TESTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWin
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TestWin)
    {
        if (TestWin->objectName().isEmpty())
            TestWin->setObjectName(QString::fromUtf8("TestWin"));
        TestWin->resize(689, 476);
        pushButton = new QPushButton(TestWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 170, 106, 30));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 87 11pt \"Noto Sans CJK KR\";"));

        retranslateUi(TestWin);

        QMetaObject::connectSlotsByName(TestWin);
    } // setupUi

    void retranslateUi(QWidget *TestWin)
    {
        TestWin->setWindowTitle(QApplication::translate("TestWin", "Form", nullptr));
        pushButton->setText(QApplication::translate("TestWin", "abd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWin: public Ui_TestWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIN_H
