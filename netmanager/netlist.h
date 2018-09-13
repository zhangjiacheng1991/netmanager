#ifndef NETLIST_H
#define NETLIST_H

#include <QWidget>

namespace Ui {
class netList;
}

class netList : public QWidget
{
    Q_OBJECT

public:
    explicit netList(QWidget *parent = 0);
    ~netList();

private slots:
    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_sreach_clicked();

    void on_pushButton_refer_clicked();

private:
    Ui::netList *ui;
};

#endif // NETLIST_H
