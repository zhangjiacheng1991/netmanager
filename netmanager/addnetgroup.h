#ifndef ADDNETGROUP_H
#define ADDNETGROUP_H

#include <QWidget>

namespace Ui {
class addNetgroup;
}

class addNetgroup : public QWidget
{
    Q_OBJECT

public:
    explicit addNetgroup(QWidget *parent = 0);
    ~addNetgroup();

private:
    Ui::addNetgroup *ui;
};

#endif // ADDNETGROUP_H
