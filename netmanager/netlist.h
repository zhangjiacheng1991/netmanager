#ifndef NETLIST_H
#define NETLIST_H

#include <QWidget>

namespace Ui {
class netList;
}

class netList : public QWidget
{
    Q_OBJECT

public:
    explicit netList(QWidget *parent = 0);
    ~netList();

private:
    Ui::netList *ui;
};

#endif // NETLIST_H
