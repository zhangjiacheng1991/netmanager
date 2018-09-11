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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netAdd
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame_3;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Care;
    QLineEdit *lineEdit_Statud;
    QLineEdit *lineEdit_Port;
    QFrame *frame_5;

    void setupUi(QWidget *netAdd)
    {
        if (netAdd->objectName().isEmpty())
            netAdd->setObjectName(QStringLiteral("netAdd"));
        netAdd->resize(813, 493);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(netAdd->sizePolicy().hasHeightForWidth());
        netAdd->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(netAdd);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        frame_3 = new QFrame(netAdd);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(netAdd);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 30));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(frame_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_2 = new QLineEdit(frame_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(frame_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame_4, 1, 0, 1, 1);

        frame_2 = new QFrame(netAdd);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame_2, 2, 0, 1, 1);

        frame = new QFrame(netAdd);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        lineEdit_Care = new QLineEdit(frame);
        lineEdit_Care->setObjectName(QStringLiteral("lineEdit_Care"));

        verticalLayout_2->addWidget(lineEdit_Care);

        lineEdit_Statud = new QLineEdit(frame);
        lineEdit_Statud->setObjectName(QStringLiteral("lineEdit_Statud"));
        sizePolicy.setHeightForWidth(lineEdit_Statud->sizePolicy().hasHeightForWidth());
        lineEdit_Statud->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_Statud);

        lineEdit_Port = new QLineEdit(frame);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        verticalLayout_2->addWidget(lineEdit_Port);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_5->addWidget(frame, 3, 0, 1, 1);

        frame_5 = new QFrame(netAdd);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setMinimumSize(QSize(0, 30));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(frame_5, 4, 0, 1, 1);


        retranslateUi(netAdd);

        QMetaObject::connectSlotsByName(netAdd);
    } // setupUi

    void retranslateUi(QWidget *netAdd)
    {
        netAdd->setWindowTitle(QApplication::translate("netAdd", "Form", 0));
        label_3->setText(QApplication::translate("netAdd", "\347\275\221\345\235\200\357\274\232", 0));
        label->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\210\206\347\261\273\357\274\232", 0));
        label_2->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("netAdd", "\347\233\221\346\216\247\357\274\232", 0));
        label_8->setText(QApplication::translate("netAdd", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", 0));
        label_5->setText(QApplication::translate("netAdd", "\347\253\257     \345\217\243   \357\274\232", 0));
        label_7->setText(QApplication::translate("netAdd", "\345\205\263\351\224\256\345\255\227    \357\274\232", 0));
        label_6->setText(QApplication::translate("netAdd", "\347\212\266\346\200\201\347\240\201    \357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("netAdd", "\351\202\256\347\256\261", 0)
         << QApplication::translate("netAdd", "\346\211\213\346\234\272 ", 0)
        );
        lineEdit_Care->setText(QString());
        lineEdit_Statud->setText(QApplication::translate("netAdd", "200", 0));
        lineEdit_Port->setText(QApplication::translate("netAdd", "80", 0));
    } // retranslateUi

};

namespace Ui {
    class netAdd: public Ui_netAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETADD_H
