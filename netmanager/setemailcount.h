#ifndef SETEMAILCOUNT_H
#define SETEMAILCOUNT_H

#include <QWidget>

namespace Ui {
class setEmailcount;
}

class setEmailcount : public QWidget
{
    Q_OBJECT

public:
    explicit setEmailcount(QWidget *parent = 0);
    ~setEmailcount();

private:
    Ui::setEmailcount *ui;
};

#endif // SETEMAILCOUNT_H
