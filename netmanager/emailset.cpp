#include "emailset.h"
#include "ui_emailset.h"

emailSet::emailSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emailSet)
{
    ui->setupUi(this);
}

emailSet::~emailSet()
{
    delete ui;
}
