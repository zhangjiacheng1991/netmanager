#ifndef REPORT_H
#define REPORT_H

#include <QWidget>
#include <QTabWidget>
#include "emailreport.h"
namespace Ui {
class report;
}

class report : public QWidget
{
    Q_OBJECT

public:
    explicit report(QWidget *parent = 0);
    ~report();
void virtual tabletEvent(QTabletEvent *);
private:
    Ui::report *ui;
public:
    QTabWidget* tabwidget;
    emailReport* eReport;
};

#endif // REPORT_H
