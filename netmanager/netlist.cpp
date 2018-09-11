#include "netlist.h"
#include "ui_netlist.h"

netList::netList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::netList)
{
    ui->setupUi(this);
}

netList::~netList()
{
    delete ui;
}
