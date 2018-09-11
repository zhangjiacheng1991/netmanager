#ifndef EMAILSET_H
#define EMAILSET_H

#include <QWidget>

namespace Ui {
class emailSet;
}

class emailSet : public QWidget
{
    Q_OBJECT

public:
    explicit emailSet(QWidget *parent = 0);
    ~emailSet();

private:
    Ui::emailSet *ui;
};

#endif // EMAILSET_H
