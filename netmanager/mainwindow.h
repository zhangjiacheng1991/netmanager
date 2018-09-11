#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "netmanager.h"
#include "setconfig.h"
#include "report.h"
#include "errrecord.h"
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

private:
    Ui::MainWindow *ui;
    netmanager* nManager;
    QWidget* newWidget;
    setConfig* sConfig;
    report*  rpt;
    errRecord* eRecd;



};

#endif // MAINWINDOW_H
