/********************************************************************************
** Form generated from reading UI file 'setwechatcount.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWECHATCOUNT_H
#define UI_SETWECHATCOUNT_H

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

class Ui_setWechatCount
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *setWechatCount)
    {
        if (setWechatCount->objectName().isEmpty())
            setWechatCount->setObjectName(QStringLiteral("setWechatCount"));
        setWechatCount->resize(530, 387);
        label = new QLabel(setWechatCount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 91, 17));
        lineEdit = new QLineEdit(setWechatCount);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 50, 141, 21));
        label_2 = new QLabel(setWechatCount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 91, 17));
        lineEdit_2 = new QLineEdit(setWechatCount);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 80, 141, 21));
        label_3 = new QLabel(setWechatCount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(57, 110, 91, 17));
        textEdit = new QTextEdit(setWechatCount);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 110, 161, 16));
        checkBox = new QCheckBox(setWechatCount);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 190, 97, 22));
        checkBox_2 = new QCheckBox(setWechatCount);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(180, 190, 97, 22));
        checkBox_3 = new QCheckBox(setWechatCount);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(300, 190, 97, 22));

        retranslateUi(setWechatCount);

        QMetaObject::connectSlotsByName(setWechatCount);
    } // setupUi

    void retranslateUi(QWidget *setWechatCount)
    {
        setWechatCount->setWindowTitle(QApplication::translate("setWechatCount", "Form", 0));
        label->setText(QApplication::translate("setWechatCount", "\344\274\201\344\270\232\345\276\256\344\277\241\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("setWechatCount", "            \345\257\206\347\240\201\357\274\232", 0));
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("setWechatCount", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257\357\274\232", 0));
        checkBox->setText(QApplication::translate("setWechatCount", "\350\256\276\347\275\2561", 0));
        checkBox_2->setText(QApplication::translate("setWechatCount", "\350\256\276\347\275\2562", 0));
        checkBox_3->setText(QApplication::translate("setWechatCount", "\350\256\276\347\275\2563", 0));
    } // retranslateUi

};

namespace Ui {
    class setWechatCount: public Ui_setWechatCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWECHATCOUNT_H
