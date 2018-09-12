/********************************************************************************
** Form generated from reading UI file 'setmsgcount.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETMSGCOUNT_H
#define UI_SETMSGCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setMsgCount
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;

    void setupUi(QWidget *setMsgCount)
    {
        if (setMsgCount->objectName().isEmpty())
            setMsgCount->setObjectName(QStringLiteral("setMsgCount"));
        setMsgCount->resize(508, 353);
        label = new QLabel(setMsgCount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 91, 17));
        label_2 = new QLabel(setMsgCount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 70, 81, 17));
        label_3 = new QLabel(setMsgCount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 100, 81, 17));
        checkBox = new QCheckBox(setMsgCount);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 180, 97, 22));
        checkBox_2 = new QCheckBox(setMsgCount);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(240, 180, 97, 22));
        checkBox_3 = new QCheckBox(setMsgCount);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(240, 210, 97, 22));
        checkBox_4 = new QCheckBox(setMsgCount);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(60, 210, 97, 22));

        retranslateUi(setMsgCount);

        QMetaObject::connectSlotsByName(setMsgCount);
    } // setupUi

    void retranslateUi(QWidget *setMsgCount)
    {
        setMsgCount->setWindowTitle(QApplication::translate("setMsgCount", "Form", 0));
        label->setText(QApplication::translate("setMsgCount", "\345\217\221\351\200\201\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("setMsgCount", "\351\227\264\351\232\224\351\242\221\347\216\207\357\274\232", 0));
        label_3->setText(QApplication::translate("setMsgCount", "\345\206\205\345\256\271\350\256\276\347\275\256\357\274\232", 0));
        checkBox->setText(QApplication::translate("setMsgCount", "\350\256\276\347\275\2561", 0));
        checkBox_2->setText(QApplication::translate("setMsgCount", "\350\256\276\347\275\2562", 0));
        checkBox_3->setText(QApplication::translate("setMsgCount", "\350\256\276\347\275\2564", 0));
        checkBox_4->setText(QApplication::translate("setMsgCount", "\350\256\276\347\275\2563", 0));
    } // retranslateUi

};

namespace Ui {
    class setMsgCount: public Ui_setMsgCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETMSGCOUNT_H
