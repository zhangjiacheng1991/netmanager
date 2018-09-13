#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QSqlDatabase>
#include "netmanager.h"
#include "setconfig.h"
#include "report.h"
#include "errrecord.h"
#include "setmsgcount.h"
#include "setemailcount.h"
#include "setwechatcount.h"
#include "dialog_warnsound.h"
#include "reportemailrecord.h"
#include "reportmsgrecord.h"
#include "reportwechatrecord.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

    void on_actionList_triggered();

    void on_actionGroup_triggered();

    void on_action2Error_triggered();

    void on_action_2_triggered();

    void on_actionMeil_2_triggered();

    void on_actionMsg_2_triggered();

    void on_actionGroup_2_triggered();

    void on_actionSound_triggered();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_actionMsg_triggered();

    void on_pushButton_8_clicked();

    void on_actionMeil_triggered();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_actionWechar_triggered();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    netmanager* nManager;
    QWidget* newWidget;
    setConfig* sConfig;
    report*  rpt;
    errRecord* eRecd;
    setMsgCount* sMsgCount;
   setEmailcount* sEmailCount;
   setWechatCount* sWechatCount;
   Dialog_warnSound* sWarn;
   reportEmailRecord* rERecord;
   reportMsgrecord*   rMRecord;
   reportWechatrecord* rWRecord;




};

#endif // MAINWINDOW_H
