#include "emailreport.h"
#include "ui_emailreport.h"

emailReport::emailReport(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emailReport)
{
    ui->setupUi(this);
}

emailReport::~emailReport()
{
    delete ui;
}
