/********************************************************************************
** Form generated from reading UI file 'netadd.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETADD_H
#define UI_NETADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netAdd
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_Statud;
    QLabel *label_7;
    QLineEdit *lineEdit_Care;
    QLabel *label_8;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Port;

    void setupUi(QWidget *netAdd)
    {
        if (netAdd->objectName().isEmpty())
            netAdd->setObjectName(QStringLiteral("netAdd"));
        netAdd->resize(552, 361);
        layoutWidget = new QWidget(netAdd);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 331, 95));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(netAdd);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 110, 243, 154));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 2);

        lineEdit_Statud = new QLineEdit(layoutWidget1);
        lineEdit_Statud->setObjectName(QStringLiteral("lineEdit_Statud"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Statud->sizePolicy().hasHeightForWidth());
        lineEdit_Statud->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_Statud, 2, 2, 1, 2);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 2);

        lineEdit_Care = new QLineEdit(layoutWidget1);
        lineEdit_Care->setObjectName(QStringLiteral("lineEdit_Care"));

        gridLayout_2->addWidget(lineEdit_Care, 3, 2, 1, 2);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 3);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 4, 3, 1, 1);

        lineEdit_Port = new QLineEdit(layoutWidget1);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        gridLayout_2->addWidget(lineEdit_Port, 1, 3, 1, 1);


        retranslateUi(netAdd);

        QMetaObject::connectSlotsByName(netAdd);
    } // setupUi

    void retranslateUi(QWidget *netAdd)
    {
        netAdd->setWindowTitle(QApplication::translate("netAdd", "Form", 0));
        label_3->setText(QApplication::translate("netAdd", "\347\275\221\345\235\200\357\274\232", 0));
        label->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\210\206\347\261\273\357\274\232", 0));
        label_2->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("netAdd", "\347\233\221\346\216\247", 0));
        label_5->setText(QApplication::translate("netAdd", "\347\253\257\345\217\243\357\274\232", 0));
        label_6->setText(QApplication::translate("netAdd", "\347\212\266\346\200\201\347\240\201\357\274\232", 0));
        lineEdit_Statud->setText(QApplication::translate("netAdd", "200", 0));
        label_7->setText(QApplication::translate("netAdd", "\345\205\263\351\224\256\345\255\227\357\274\232", 0));
        lineEdit_Care->setText(QString());
        label_8->setText(QApplication::translate("netAdd", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("netAdd", "\351\202\256\347\256\261", 0)
         << QApplication::translate("netAdd", "\346\211\213\346\234\272 ", 0)
        );
        lineEdit_Port->setText(QApplication::translate("netAdd", "80", 0));
    } // retranslateUi

};

namespace Ui {
    class netAdd: public Ui_netAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETADD_H
