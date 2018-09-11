#ifndef NETMANAGER_H
#define NETMANAGER_H

#include <QWidget>
#include "netlist.h"
#include "netadd.h"
#include "addnetgroup.h"
#include "errrecord.h"
namespace Ui {
class netmanager;
}

class netmanager : public QWidget
{
    Q_OBJECT

public:
    explicit netmanager(QWidget *parent = 0);
    ~netmanager();

private:
    Ui::netmanager *ui;
public:
    netList* nList;
    netAdd* nAdd;
    addNetgroup* addNgroup;
    errRecord*  errRecd;
};

#endif // NETMANAGER_H
