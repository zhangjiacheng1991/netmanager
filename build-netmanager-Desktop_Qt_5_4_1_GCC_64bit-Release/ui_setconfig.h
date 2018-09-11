/********************************************************************************
** Form generated from reading UI file 'setconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETCONFIG_H
#define UI_SETCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setConfig
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;

    void setupUi(QWidget *setConfig)
    {
        if (setConfig->objectName().isEmpty())
            setConfig->setObjectName(QStringLiteral("setConfig"));
        setConfig->resize(652, 473);
        widget = new QWidget(setConfig);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 80, 357, 229));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkBox_2, 0, 1, 1, 2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkBox_4, 1, 1, 1, 2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 2, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(setConfig);

        QMetaObject::connectSlotsByName(setConfig);
    } // setupUi

    void retranslateUi(QWidget *setConfig)
    {
        setConfig->setWindowTitle(QApplication::translate("setConfig", "Form", 0));
        label->setText(QApplication::translate("setConfig", "\346\212\245\350\255\246\347\224\237\351\237\263\357\274\232", 0));
        label_2->setText(QApplication::translate("setConfig", "\347\237\255\344\277\241\345\217\202\346\225\260\357\274\232", 0));
        label_3->setText(QApplication::translate("setConfig", "\344\274\201\344\270\232\345\276\256\344\277\241\357\274\232", 0));
        label_4->setText(QApplication::translate("setConfig", "\351\202\256\347\256\261\357\274\232", 0));
        label_5->setText(QApplication::translate("setConfig", "\346\212\245\350\255\246\350\256\276\347\275\256", 0));
        checkBox->setText(QApplication::translate("setConfig", "\345\217\221\351\200\201\351\202\256\344\273\266", 0));
        checkBox_2->setText(QApplication::translate("setConfig", "\345\217\221\351\200\201\347\237\255\344\277\241", 0));
        checkBox_3->setText(QApplication::translate("setConfig", "\345\217\221\351\200\201\344\274\201\344\270\232\345\276\256\344\277\241", 0));
        checkBox_4->setText(QApplication::translate("setConfig", "\346\222\255\346\224\276\345\243\260\351\237\263", 0));
        label_7->setText(QApplication::translate("setConfig", "\351\273\230\350\256\244\351\227\264\351\232\224\346\227\266\351\227\264\357\274\232", 0));
        lineEdit_5->setText(QApplication::translate("setConfig", "600", 0));
        label_8->setText(QApplication::translate("setConfig", "s", 0));
    } // retranslateUi

};

namespace Ui {
    class setConfig: public Ui_setConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETCONFIG_H
