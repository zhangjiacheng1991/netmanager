#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "netmanager.h"
#include "setconfig.h"
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

private:
    Ui::MainWindow *ui;
    netmanager* nManager;
    QWidget* newWidget;
    setConfig* sConfig;


};

#endif // MAINWINDOW_H
