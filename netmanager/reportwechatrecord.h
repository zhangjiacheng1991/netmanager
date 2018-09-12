#ifndef REPORTWECHATRECORD_H
#define REPORTWECHATRECORD_H

#include <QWidget>

namespace Ui {
class reportWechatrecord;
}

class reportWechatrecord : public QWidget
{
    Q_OBJECT

public:
    explicit reportWechatrecord(QWidget *parent = 0);
    ~reportWechatrecord();

private:
    Ui::reportWechatrecord *ui;
};

#endif // REPORTWECHATRECORD_H
