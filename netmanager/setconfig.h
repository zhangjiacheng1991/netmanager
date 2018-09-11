#ifndef SETCONFIG_H
#define SETCONFIG_H

#include <QWidget>

namespace Ui {
class setConfig;
}

class setConfig : public QWidget
{
    Q_OBJECT

public:
    explicit setConfig(QWidget *parent = 0);
    ~setConfig();

private:
    Ui::setConfig *ui;
};

#endif // SETCONFIG_H
