#ifndef EMAILREPORT_H
#define EMAILREPORT_H

#include <QWidget>

namespace Ui {
class emailReport;
}

class emailReport : public QWidget
{
    Q_OBJECT

public:
    explicit emailReport(QWidget *parent = 0);
    ~emailReport();

private:
    Ui::emailReport *ui;
};

#endif // EMAILREPORT_H
