#ifndef REPORTEMAILRECORD_H
#define REPORTEMAILRECORD_H

#include <QWidget>

namespace Ui {
class reportEmailRecord;
}

class reportEmailRecord : public QWidget
{
    Q_OBJECT

public:
    explicit reportEmailRecord(QWidget *parent = 0);
    ~reportEmailRecord();

private:
    Ui::reportEmailRecord *ui;
};

#endif // REPORTEMAILRECORD_H
