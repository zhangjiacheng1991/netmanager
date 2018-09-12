#ifndef SETMSGCOUNT_H
#define SETMSGCOUNT_H

#include <QWidget>

namespace Ui {
class setMsgCount;
}

class setMsgCount : public QWidget
{
    Q_OBJECT

public:
    explicit setMsgCount(QWidget *parent = 0);
    ~setMsgCount();

private:
    Ui::setMsgCount *ui;
};

#endif // SETMSGCOUNT_H
