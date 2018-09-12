#include "setwechatcount.h"
#include "ui_setwechatcount.h"

setWechatCount::setWechatCount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setWechatCount)
{
    ui->setupUi(this);
}

setWechatCount::~setWechatCount()
{
    delete ui;
}
