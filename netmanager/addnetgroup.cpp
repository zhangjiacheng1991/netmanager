#include "addnetgroup.h"
#include "ui_addnetgroup.h"

addNetgroup::addNetgroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addNetgroup)
{
    ui->setupUi(this);
}

addNetgroup::~addNetgroup()
{
    delete ui;
}
