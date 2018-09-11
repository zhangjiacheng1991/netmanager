#include "setconfig.h"
#include "ui_setconfig.h"

setConfig::setConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setConfig)
{
    ui->setupUi(this);
}

setConfig::~setConfig()
{
    delete ui;
}
