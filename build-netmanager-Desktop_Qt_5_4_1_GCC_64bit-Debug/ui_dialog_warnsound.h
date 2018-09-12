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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_warnSound
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_10;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_26;
    QLabel *label_18;
    QLineEdit *lineEdit_27;
    QLabel *label_43;
    QLineEdit *lineEdit_28;
    QComboBox *comboBox_5;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_48;
    QLabel *label_49;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_4;
    QLabel *label_50;
    QLineEdit *lineEdit_29;

    void setupUi(QWidget *Dialog_warnSound)
    {
        if (Dialog_warnSound->objectName().isEmpty())
            Dialog_warnSound->setObjectName(QStringLiteral("Dialog_warnSound"));
        Dialog_warnSound->resize(757, 480);
        buttonBox = new QDialogButtonBox(Dialog_warnSound);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(240, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox_10 = new QGroupBox(Dialog_warnSound);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(150, 110, 461, 141));
        label_16 = new QLabel(groupBox_10);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 30, 81, 17));
        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(240, 30, 81, 17));
        lineEdit_13 = new QLineEdit(groupBox_10);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(100, 26, 91, 21));
        lineEdit_26 = new QLineEdit(groupBox_10);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(330, 30, 91, 21));
        label_18 = new QLabel(groupBox_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(7, 67, 101, 20));
        lineEdit_27 = new QLineEdit(groupBox_10);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));
        lineEdit_27->setGeometry(QRect(100, 66, 91, 21));
        label_43 = new QLabel(groupBox_10);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(210, 68, 111, 17));
        lineEdit_28 = new QLineEdit(groupBox_10);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));
        lineEdit_28->setGeometry(QRect(330, 66, 91, 21));
        comboBox_5 = new QComboBox(groupBox_10);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(10, 100, 181, 27));
        label_44 = new QLabel(groupBox_10);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(430, 70, 31, 17));
        label_45 = new QLabel(groupBox_10);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(196, 26, 31, 17));
        label_46 = new QLabel(groupBox_10);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(196, 67, 16, 17));
        label_48 = new QLabel(groupBox_10);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(430, 30, 31, 17));
        label_49 = new QLabel(groupBox_10);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(430, 70, 31, 17));
        groupBox_11 = new QGroupBox(Dialog_warnSound);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(150, 270, 431, 80));
        groupBox_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_11->setFlat(false);
        groupBox_11->setCheckable(false);
        pushButton_4 = new QPushButton(groupBox_11);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 30, 31, 21));
        label_50 = new QLabel(groupBox_11);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(17, 33, 91, 17));
        lineEdit_29 = new QLineEdit(groupBox_11);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));
        lineEdit_29->setGeometry(QRect(110, 30, 231, 21));

        retranslateUi(Dialog_warnSound);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_warnSound, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_warnSound, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_warnSound);
    } // setupUi

    void retranslateUi(QWidget *Dialog_warnSound)
    {
        Dialog_warnSound->setWindowTitle(QApplication::translate("Dialog_warnSound", "QWidget", 0));
        groupBox_10->setTitle(QApplication::translate("Dialog_warnSound", "\345\237\272\346\234\254\351\205\215\347\275\256\351\241\271", 0));
        label_16->setText(QApplication::translate("Dialog_warnSound", "\346\211\253\346\217\217\346\227\266\351\227\264\357\274\232", 0));
        label_17->setText(QApplication::translate("Dialog_warnSound", "\346\211\253\346\217\217\351\227\264\351\232\224\357\274\232", 0));
        label_18->setText(QApplication::translate("Dialog_warnSound", "\346\234\215\345\212\241\345\231\250\350\266\205\346\227\266\357\274\232", 0));
        label_43->setText(QApplication::translate("Dialog_warnSound", "\351\202\256\344\273\266\345\217\221\351\200\201\350\266\205\346\227\266\357\274\232", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Dialog_warnSound", "\345\215\225\346\254\241\346\211\253\346\217\217\351\252\214\350\257\201", 0)
         << QApplication::translate("Dialog_warnSound", "\345\244\232\346\254\241\346\211\253\346\217\217\351\252\214\350\257\201", 0)
        );
        label_44->setText(QApplication::translate("Dialog_warnSound", "s", 0));
        label_45->setText(QApplication::translate("Dialog_warnSound", "s", 0));
        label_46->setText(QApplication::translate("Dialog_warnSound", "s", 0));
        label_48->setText(QApplication::translate("Dialog_warnSound", "s", 0));
        label_49->setText(QApplication::translate("Dialog_warnSound", "s", 0));
        groupBox_11->setTitle(QApplication::translate("Dialog_warnSound", "\346\225\260\346\215\256\345\272\223\350\256\276\347\275\256", 0));
        pushButton_4->setText(QApplication::translate("Dialog_warnSound", "...", 0));
        label_50->setText(QApplication::translate("Dialog_warnSound", "\346\225\260\346\215\256\345\272\223\344\275\215\347\275\256\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_warnSound: public Ui_Dialog_warnSound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WARNSOUND_H
