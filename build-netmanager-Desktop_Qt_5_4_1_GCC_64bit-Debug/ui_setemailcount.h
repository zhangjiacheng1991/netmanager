/********************************************************************************
** Form generated from reading UI file 'setemailcount.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETEMAILCOUNT_H
#define UI_SETEMAILCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setEmailcount
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;

    void setupUi(QWidget *setEmailcount)
    {
        if (setEmailcount->objectName().isEmpty())
            setEmailcount->setObjectName(QStringLiteral("setEmailcount"));
        setEmailcount->resize(732, 523);
        label = new QLabel(setEmailcount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(196, 80, 91, 20));
        lineEdit = new QLineEdit(setEmailcount);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 80, 181, 21));
        lineEdit_2 = new QLineEdit(setEmailcount);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 110, 181, 21));
        label_2 = new QLabel(setEmailcount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(196, 110, 91, 20));
        checkBox = new QCheckBox(setEmailcount);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(180, 360, 97, 22));
        checkBox_2 = new QCheckBox(setEmailcount);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(290, 360, 97, 22));
        checkBox_3 = new QCheckBox(setEmailcount);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(410, 360, 97, 22));
        label_3 = new QLabel(setEmailcount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 140, 91, 20));
        textEdit = new QTextEdit(setEmailcount);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(274, 140, 181, 21));
        lineEdit_3 = new QLineEdit(setEmailcount);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 200, 181, 21));
        label_4 = new QLabel(setEmailcount);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 200, 91, 20));
        lineEdit_4 = new QLineEdit(setEmailcount);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 230, 181, 21));
        label_5 = new QLabel(setEmailcount);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 230, 91, 20));
        lineEdit_5 = new QLineEdit(setEmailcount);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(270, 260, 181, 21));
        label_6 = new QLabel(setEmailcount);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 260, 91, 20));
        lineEdit_6 = new QLineEdit(setEmailcount);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(270, 50, 181, 21));
        label_7 = new QLabel(setEmailcount);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 50, 91, 20));

        retranslateUi(setEmailcount);

        QMetaObject::connectSlotsByName(setEmailcount);
    } // setupUi

    void retranslateUi(QWidget *setEmailcount)
    {
        setEmailcount->setWindowTitle(QApplication::translate("setEmailcount", "Form", 0));
        label->setText(QApplication::translate("setEmailcount", "\345\217\221\351\200\201\351\202\256\347\256\261:", 0));
        label_2->setText(QApplication::translate("setEmailcount", "\351\202\256\347\256\261\345\257\206\347\240\201:", 0));
        checkBox->setText(QApplication::translate("setEmailcount", "\350\256\276\347\275\2561", 0));
        checkBox_2->setText(QApplication::translate("setEmailcount", "\350\256\276\347\275\2562", 0));
        checkBox_3->setText(QApplication::translate("setEmailcount", "\350\256\276\347\275\2563", 0));
        label_3->setText(QApplication::translate("setEmailcount", "\350\207\252\345\256\232\344\271\211\345\206\205\345\256\271:", 0));
        label_4->setText(QApplication::translate("setEmailcount", "SMTP\346\234\215\345\212\241\345\231\250:", 0));
        label_5->setText(QApplication::translate("setEmailcount", "SMTP\347\253\257\345\217\243:", 0));
        label_6->setText(QApplication::translate("setEmailcount", "\350\277\236\346\216\245\346\226\271\345\274\217:", 0));
        label_7->setText(QApplication::translate("setEmailcount", "\345\217\221\344\273\266\344\272\272:", 0));
    } // retranslateUi

};

namespace Ui {
    class setEmailcount: public Ui_setEmailcount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETEMAILCOUNT_H
