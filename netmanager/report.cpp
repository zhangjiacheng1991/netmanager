#include "report.h"
#include "ui_report.h"

report::report(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);
    tabwidget = ui->tabWidget;
    eReport = new emailReport;
}

report::~report()
{
    delete ui;
}
void report::tabletEvent(QTabletEvent *){

}
