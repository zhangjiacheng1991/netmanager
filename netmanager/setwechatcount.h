#ifndef SETWECHATCOUNT_H
#define SETWECHATCOUNT_H

#include <QWidget>

namespace Ui {
class setWechatCount;
}

class setWechatCount : public QWidget
{
    Q_OBJECT

public:
    explicit setWechatCount(QWidget *parent = 0);
    ~setWechatCount();

private:
    Ui::setWechatCount *ui;
};

#endif // SETWECHATCOUNT_H
