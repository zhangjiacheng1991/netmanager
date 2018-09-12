#include "setmsgcount.h"
#include "ui_setmsgcount.h"

setMsgCount::setMsgCount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setMsgCount)
{
    ui->setupUi(this);
}

setMsgCount::~setMsgCount()
{
    delete ui;
}
