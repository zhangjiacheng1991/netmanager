#ifndef DIALOG_WARNSOUND_H
#define DIALOG_WARNSOUND_H

#include <QDialog>

namespace Ui {
class Dialog_warnSound;
}

class Dialog_warnSound : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_warnSound(QWidget *parent = 0);
    ~Dialog_warnSound();

private:
    Ui::Dialog_warnSound *ui;
};

#endif // DIALOG_WARNSOUND_H