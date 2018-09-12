#include "reportmsgrecord.h"
#include "ui_reportmsgrecord.h"

reportMsgrecord::reportMsgrecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reportMsgrecord)
{
    ui->setupUi(this);
}

reportMsgrecord::~reportMsgrecord()
{
    delete ui;
}
