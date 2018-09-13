#include "netadd.h"
#include "ui_netadd.h"
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
netAdd::netAdd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::netAdd)
{
    ui->setupUi(this);
}

netAdd::~netAdd()
{
    delete ui;
}

void netAdd::on_buttonBox_accepted()
{
    QString netName = ui->lineEdit_netName->text();
    if(netName.isEmpty()){
        QMessageBox(QMessageBox::Warning,"添加网站","网站名字不能为空！");
    }
    QString netAdress = ui->lineEdit_netAdress->text();
    if(netAdress.isEmpty()){
        QMessageBox(QMessageBox::Warning,"添加网站","网址不能为空！");
    }
    QString netClass;
    if(ui->comboBox_netClass->currentText() == "邮箱")netClass = "email";
    QSqlQuery query;
    QString temp = QString("insert into netlist (netName,netAdress,class) values (\"%1\",\"%2\",\"%3\");")
            .arg(netName).arg(netAdress).arg(netClass);
    qDebug() << temp;
  if(! query.exec(temp)){
      QMessageBox(QMessageBox::NoIcon,"警告",query.lastError().text());
  }
  qDebug() << "插入成功！";

}
