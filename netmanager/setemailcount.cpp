#include "setemailcount.h"
#include "ui_setemailcount.h"

setEmailcount::setEmailcount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setEmailcount)
{
    ui->setupUi(this);
}

setEmailcount::~setEmailcount()
{
    delete ui;
}
