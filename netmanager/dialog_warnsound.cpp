#include "dialog_warnsound.h"
#include "ui_dialog_warnsound.h"

Dialog_warnSound::Dialog_warnSound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_warnSound)
{
    ui->setupUi(this);
}

Dialog_warnSound::~Dialog_warnSound()
{
    delete ui;
}
