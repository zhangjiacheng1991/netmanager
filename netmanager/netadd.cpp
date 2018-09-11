#include "netadd.h"
#include "ui_netadd.h"

netAdd::netAdd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::netAdd)
{
    ui->setupUi(this);
}

netAdd::~netAdd()
{
    delete ui;
}
