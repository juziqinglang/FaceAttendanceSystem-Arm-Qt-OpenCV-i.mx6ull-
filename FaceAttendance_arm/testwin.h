#ifndef TESTWIN_H
#define TESTWIN_H

#include <QWidget>

namespace Ui {
class TestWin;
}

class TestWin : public QWidget
{
    Q_OBJECT

public:
    explicit TestWin(QWidget *parent = nullptr);
    ~TestWin();

private:
    Ui::TestWin *ui;
};

#endif // TESTWIN_H
