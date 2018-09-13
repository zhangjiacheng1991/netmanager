#include "netlist.h"
#include "ui_netlist.h"
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
extern QSqlDatabase db;
netList::netList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::netList)
{
    ui->setupUi(this);
    QSqlQuery query;
    bool success = query.exec("select id,netName,netAdress,status,runStatus,class from netlist where id = 00000001;");
    if(!success){
        QMessageBox(QMessageBox::NoIcon,"error",query.lastError().text());
    }
    while(query.next()){
    ui->lineEdit_number->setText(query.value(0).toString());
    ui->lineEdit_netName->setText(query.value(1).toString());
    ui->lineEdit_netAdress->setText(query.value(2).toString());
    ui->lineEdit_status->setText(query.value(3).toString());
    ui->lineEdit_runStarus->setText(query.value(4).toString());
    ui->lineEdit_class->setText(query.value(5).toString());
    }
//    qDebug() <<"begin"<< ID << netName << netAdress << status << runStatus << Class;
}

netList::~netList()
{
    delete ui;
}

void netList::on_lineEdit_2_textChanged(const QString &str)
{
    ui->pushButton_sreach->setEnabled(true);
}

void netList::on_pushButton_sreach_clicked()
{
   QString searchclass;
   if(ui->comboBox_searchClass->currentText() == "网站")searchclass = "netAdress";
   else if(ui->comboBox_searchClass->currentText() == "名称")searchclass = "netName";
   QSqlQuery query;
   QString sql = QString("select id,netName,netAdress,status,runStatus,class from netlist where %1=\"%2\";").arg(searchclass).arg(ui->lineEdit_2->text());
   qDebug() << sql;
   bool success = query.exec(sql);
   if(!success){
       QMessageBox(QMessageBox::NoIcon,"error",query.lastError().text());
   }
   while(query.next()){
   ui->lineEdit_number->setText(query.value(0).toString());
   ui->lineEdit_netName->setText(query.value(1).toString());
   ui->lineEdit_netAdress->setText(query.value(2).toString());
   ui->lineEdit_status->setText(query.value(3).toString());
   ui->lineEdit_runStarus->setText(query.value(4).toString());
   ui->lineEdit_class->setText(query.value(5).toString());
   }


}

void netList::on_pushButton_refer_clicked()
{
 //   QString temp = ui->comboBox_error->currentText();
  //  qDebug() << temp;
}
