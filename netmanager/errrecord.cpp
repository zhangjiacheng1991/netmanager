#include "errrecord.h"
#include "ui_errrecord.h"

errRecord::errRecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::errRecord)
{
    ui->setupUi(this);
}

errRecord::~errRecord()
{
    delete ui;
}
