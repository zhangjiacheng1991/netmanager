/********************************************************************************
** Form generated from reading UI file 'dialog_warnsound.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WARNSOUND_H
#define UI_DIALOG_WARNSOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_warnSound
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_warnSound)
    {
        if (Dialog_warnSound->objectName().isEmpty())
            Dialog_warnSound->setObjectName(QStringLiteral("Dialog_warnSound"));
        Dialog_warnSound->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_warnSound);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_warnSound);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_warnSound, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_warnSound, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_warnSound);
    } // setupUi

    void retranslateUi(QDialog *Dialog_warnSound)
    {
        Dialog_warnSound->setWindowTitle(QApplication::translate("Dialog_warnSound", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_warnSound: public Ui_Dialog_warnSound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WARNSOUND_H
