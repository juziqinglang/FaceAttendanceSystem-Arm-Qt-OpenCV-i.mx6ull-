/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *employeeRb;
    QRadioButton *attendanceRb;
    QPushButton *selectBT;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(1000, 650);
        tableView = new QTableView(SelectWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 90, 900, 500));
        widget = new QWidget(SelectWin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 901, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        employeeRb = new QRadioButton(widget);
        employeeRb->setObjectName(QString::fromUtf8("employeeRb"));

        horizontalLayout->addWidget(employeeRb);

        attendanceRb = new QRadioButton(widget);
        attendanceRb->setObjectName(QString::fromUtf8("attendanceRb"));

        horizontalLayout->addWidget(attendanceRb);

        selectBT = new QPushButton(widget);
        selectBT->setObjectName(QString::fromUtf8("selectBT"));

        horizontalLayout->addWidget(selectBT);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QApplication::translate("SelectWin", "Form", nullptr));
        employeeRb->setText(QApplication::translate("SelectWin", "\345\221\230\345\267\245", nullptr));
        attendanceRb->setText(QApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        selectBT->setText(QApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
