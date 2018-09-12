#ifndef REPORTMSGRECORD_H
#define REPORTMSGRECORD_H

#include <QWidget>

namespace Ui {
class reportMsgrecord;
}

class reportMsgrecord : public QWidget
{
    Q_OBJECT

public:
    explicit reportMsgrecord(QWidget *parent = 0);
    ~reportMsgrecord();

private:
    Ui::reportMsgrecord *ui;
};

#endif // REPORTMSGRECORD_H
