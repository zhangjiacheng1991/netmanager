#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("网络列表");
    nManager = new netmanager(ui->frame);
    nManager->nList->show();
    newWidget = nManager->nList;

    sConfig = new setConfig(ui->frame);
    sConfig->hide();
    rpt = new report(ui->frame);
    rpt->hide();
    eRecd = new errRecord(ui->frame);
    eRecd->hide();
    sMsgCount = new setMsgCount(ui->frame);
    sMsgCount->hide();
    sEmailCount = new setEmailcount(ui->frame);
    sEmailCount->hide();
    sWechatCount = new setWechatCount(ui->frame);
    sWechatCount->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//添加网络菜单槽函数
void MainWindow::on_actionAdd_triggered()
{
    ui->label->setText("添加网络");
    newWidget->hide();
    nManager->nAdd->show();
    newWidget = nManager->nAdd;
    ui->toolBox->setCurrentIndex(0);
}
//添加网络列表菜单槽函数
void MainWindow::on_actionList_triggered()
{
    ui->label->setText("网络列表");
    newWidget->hide();
    nManager->nList->show();
    newWidget = nManager->nList;
    ui->toolBox->setCurrentIndex(0);
}
//添加网站分类菜单槽函数
void MainWindow::on_actionGroup_triggered()
{
    ui->label->setText("添加网站分类");
    newWidget->hide();
    nManager->addNgroup->show();
    newWidget = nManager->addNgroup;
    ui->toolBox->setCurrentIndex(0);
}
//添加故障记录菜单槽函数
void MainWindow::on_action2Error_triggered()
{
    ui->label->setText("故障记录");
    newWidget->hide();
    nManager->errRecd->show();
    newWidget = nManager->errRecd;
    ui->toolBox->setCurrentIndex(0);
}
//添加参数设置菜单槽函数
void MainWindow::on_action_2_triggered()
{
    ui->label->setText("参数设置");
    newWidget->hide();
    sConfig->show();
    newWidget = sConfig;
    ui->toolBox->setCurrentIndex(1);
}
//添加报表1菜单槽函数
void MainWindow::on_actionMeil_2_triggered()
{
    ui->label->setText("报表");
    newWidget->hide();
    rpt->tabwidget->setCurrentIndex(0);
    newWidget = rpt;
    rpt->show();
    ui->toolBox->setCurrentIndex(2);


}
//添加报表2菜单槽函数
void MainWindow::on_actionMsg_2_triggered()
{
    ui->label->setText("报表");
    newWidget->hide();
    rpt->tabwidget->setCurrentIndex(1);
    newWidget = rpt;
    rpt->show();
     ui->toolBox->setCurrentIndex(2);
}
//添加报表3菜单槽函数
void MainWindow::on_actionGroup_2_triggered()
{
    ui->label->setText("报表");
    newWidget->hide();
    rpt->tabwidget->setCurrentIndex(2);
    newWidget = rpt;
    rpt->show();
     ui->toolBox->setCurrentIndex(2);
}

void MainWindow::on_actionSound_triggered()
{
    ui->label->setText("报警设置");
    newWidget->hide();
    eRecd->show();
    newWidget = eRecd;
    ui->toolBox->setCurrentIndex(1);

}
//报警设置左工具箱
void MainWindow::on_pushButton_7_clicked()
{
    MainWindow::on_actionSound_triggered();
}
//添加网络
void MainWindow::on_pushButton_clicked()
{
   MainWindow::on_actionAdd_triggered();
}
//添加网络分类
void MainWindow::on_pushButton_2_clicked()
{

    MainWindow::on_actionGroup_triggered();

}
//网络列表
void MainWindow::on_pushButton_3_clicked()
{
    MainWindow::on_actionList_triggered();
}
//故障记录
void MainWindow::on_pushButton_4_clicked()
{
    MainWindow::on_action2Error_triggered();
}
//短信参数设置菜单
void MainWindow::on_actionMsg_triggered()
{
    ui->label->setText("短信参数设置");
    newWidget->hide();
    sMsgCount->show();
    newWidget = sMsgCount;
    ui->toolBox->setCurrentIndex(1);
}
//短信参数设置
void MainWindow::on_pushButton_8_clicked()
{
    MainWindow::on_actionMsg_triggered();
}
//邮箱参数设置菜单
void MainWindow::on_actionMeil_triggered()
{
    ui->label->setText("邮箱参数设置");
    newWidget->hide();
    sEmailCount->show();
    newWidget = sEmailCount;
    ui->toolBox->setCurrentIndex(1);
}

void MainWindow::on_pushButton_10_clicked()
{
    MainWindow::on_actionMeil_triggered();
}
//企业邮箱参数设置
void MainWindow::on_pushButton_9_clicked()
{
    ui->label->setText("企业邮箱参数设置");
    newWidget->hide();
    sWechatCount->show();
    newWidget = sWechatCount;
    ui->toolBox->setCurrentIndex(1);
}
//企业邮箱参数设置菜单
void MainWindow::on_actionWechar_triggered()
{
    MainWindow::on_pushButton_9_clicked();
}
