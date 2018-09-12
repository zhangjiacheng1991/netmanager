#include "reportemailrecord.h"
#include "ui_reportemailrecord.h"

reportEmailRecord::reportEmailRecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reportEmailRecord)
{
    ui->setupUi(this);
}

reportEmailRecord::~reportEmailRecord()
{
    delete ui;
}
