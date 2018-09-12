#ifndef ERRRECORD_H
#define ERRRECORD_H

#include <QWidget>
#include <QTabWidget>
namespace Ui {
class errRecord;
}

class errRecord : public QWidget
{
    Q_OBJECT

public:
    explicit errRecord(QWidget *parent = 0);
    ~errRecord();

private:
    Ui::errRecord *ui;
public:

};

#endif // ERRRECORD_H
