#include "netmanager.h"
#include "ui_netmanager.h"

netmanager::netmanager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::netmanager)
{
    ui->setupUi(this);
    nList = new netList(this);
    nList->hide();
    nAdd = new netAdd(this);
    nAdd->hide();
    addNgroup = new addNetgroup(this);
    addNgroup->hide();
    errRecd = new errRecord(this);
    errRecd->hide();
}

netmanager::~netmanager()
{
    delete ui;
}
