/********************************************************************************
** Form generated from reading UI file 'netlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETLIST_H
#define UI_NETLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netList
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_16;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_10;
    QLabel *label_7;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *BTN_Start;
    QPushButton *BTN_Edit;
    QPushButton *BTN_Del;
    QListView *listView;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *lineEdit_Time;
    QPushButton *BTN_StartCal;
    QPushButton *BTN_StopCal;

    void setupUi(QWidget *netList)
    {
        if (netList->objectName().isEmpty())
            netList->setObjectName(QStringLiteral("netList"));
        netList->resize(779, 511);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(netList->sizePolicy().hasHeightForWidth());
        netList->setSizePolicy(sizePolicy);
        netList->setSizeIncrement(QSize(0, 0));
        gridLayout_3 = new QGridLayout(netList);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(netList);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(netList);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(netList);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(netList);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(netList);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        lineEdit_2 = new QLineEdit(netList);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(netList);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout->addWidget(pushButton);

        comboBox_3 = new QComboBox(netList);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(netList);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_5 = new QLineEdit(netList);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);

        horizontalLayout_4->addWidget(lineEdit_5);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(netList);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(netList);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        horizontalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(netList);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_4 = new QLineEdit(netList);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_4);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(netList);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        lineEdit_6 = new QLineEdit(netList);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_6);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(netList);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(netList);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(false);

        gridLayout_2->addWidget(lineEdit_7, 0, 1, 1, 1);

        lineEdit_8 = new QLineEdit(netList);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(false);

        gridLayout_2->addWidget(lineEdit_8, 1, 1, 1, 1);

        label_16 = new QLabel(netList);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_10 = new QLineEdit(netList);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setEnabled(false);

        gridLayout->addWidget(lineEdit_10, 1, 1, 1, 1);

        label_7 = new QLabel(netList);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_9 = new QLineEdit(netList);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setEnabled(false);

        gridLayout->addWidget(lineEdit_9, 0, 1, 1, 1);

        label_6 = new QLabel(netList);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        BTN_Start = new QPushButton(netList);
        BTN_Start->setObjectName(QStringLiteral("BTN_Start"));

        horizontalLayout_7->addWidget(BTN_Start);

        BTN_Edit = new QPushButton(netList);
        BTN_Edit->setObjectName(QStringLiteral("BTN_Edit"));

        horizontalLayout_7->addWidget(BTN_Edit);

        BTN_Del = new QPushButton(netList);
        BTN_Del->setObjectName(QStringLiteral("BTN_Del"));

        horizontalLayout_7->addWidget(BTN_Del);


        gridLayout_3->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        listView = new QListView(netList);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_3->addWidget(listView, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(netList);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_9->addWidget(label);

        lineEdit_Time = new QLineEdit(netList);
        lineEdit_Time->setObjectName(QStringLiteral("lineEdit_Time"));
        lineEdit_Time->setEnabled(false);

        horizontalLayout_9->addWidget(lineEdit_Time);

        BTN_StartCal = new QPushButton(netList);
        BTN_StartCal->setObjectName(QStringLiteral("BTN_StartCal"));

        horizontalLayout_9->addWidget(BTN_StartCal);

        BTN_StopCal = new QPushButton(netList);
        BTN_StopCal->setObjectName(QStringLiteral("BTN_StopCal"));

        horizontalLayout_9->addWidget(BTN_StopCal);


        gridLayout_3->addLayout(horizontalLayout_9, 5, 0, 1, 1);


        retranslateUi(netList);

        QMetaObject::connectSlotsByName(netList);
    } // setupUi

    void retranslateUi(QWidget *netList)
    {
        netList->setWindowTitle(QApplication::translate("netList", "Form", 0));
        label_2->setText(QApplication::translate("netList", "\345\205\250\351\203\250\357\274\232", 0));
        label_3->setText(QApplication::translate("netList", "\345\210\206\347\261\273\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("netList", "\345\210\206\347\261\2731", 0)
         << QApplication::translate("netList", "\345\210\206\347\261\2732", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("netList", "\347\275\221\347\253\231", 0)
         << QApplication::translate("netList", "\345\220\215\347\247\260", 0)
        );
        pushButton->setText(QApplication::translate("netList", "\346\220\234\347\264\242", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("netList", "\346\234\252\350\247\243\345\206\263\346\225\205\351\232\234\350\256\260\345\275\225", 0)
         << QApplication::translate("netList", "\346\211\200\346\234\211\346\225\205\351\232\234\350\256\260\345\275\225", 0)
        );
        label_9->setText(QApplication::translate("netList", "\345\272\217\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("netList", "\347\261\273\345\210\253", 0));
        label_5->setText(QApplication::translate("netList", "\347\275\221\347\273\234\345\220\215", 0));
        label_10->setText(QApplication::translate("netList", "\347\275\221\345\235\200", 0));
        label_8->setText(QApplication::translate("netList", "\347\212\266\346\200\201\357\274\232", 0));
        label_16->setText(QApplication::translate("netList", "\350\277\220\350\241\214\347\212\266\346\200\201\357\274\232", 0));
        label_7->setText(QApplication::translate("netList", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", 0));
        label_6->setText(QApplication::translate("netList", "\346\212\245\350\255\246\350\247\204\345\210\231\357\274\232", 0));
        BTN_Start->setText(QApplication::translate("netList", "\345\220\257\347\224\250", 0));
        BTN_Edit->setText(QApplication::translate("netList", "\347\274\226\350\276\221", 0));
        BTN_Del->setText(QApplication::translate("netList", "\345\210\240\351\231\244", 0));
        label->setText(QApplication::translate("netList", "\347\233\221\346\216\247\346\227\266\351\227\264\357\274\232", 0));
        BTN_StartCal->setText(QApplication::translate("netList", "\345\220\257\345\212\250\347\233\221\346\216\247", 0));
        BTN_StopCal->setText(QApplication::translate("netList", "\345\201\234\346\255\242\347\233\221\346\216\247", 0));
    } // retranslateUi

};

namespace Ui {
    class netList: public Ui_netList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLIST_H
