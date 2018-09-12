#include "reportwechatrecord.h"
#include "ui_reportwechatrecord.h"

reportWechatrecord::reportWechatrecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reportWechatrecord)
{
    ui->setupUi(this);
}

reportWechatrecord::~reportWechatrecord()
{
    delete ui;
}
