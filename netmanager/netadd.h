#ifndef NETADD_H
#define NETADD_H

#include <QWidget>

namespace Ui {
class netAdd;
}

class netAdd : public QWidget
{
    Q_OBJECT

public:
    explicit netAdd(QWidget *parent = 0);
    ~netAdd();

private:
    Ui::netAdd *ui;
};

#endif // NETADD_H
