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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netAdd
{
public:
    QFrame *frame_3;
    QFrame *frame_4;
    QComboBox *comboBox_netClass;
    QLineEdit *lineEdit_netName;
    QLineEdit *lineEdit_netAdress;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_5;
    QGroupBox *groupBox;
    QFrame *frame;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QComboBox *comboBox_warnWay;
    QLineEdit *lineEdit_keyworld;
    QLineEdit *lineEdit_port;
    QLineEdit *lineEdit_status;
    QDialogButtonBox *buttonBox;

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
        frame_3 = new QFrame(netAdd);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(9, 9, 795, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(netAdd);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(150, 60, 491, 115));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 30));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Sunken);
        comboBox_netClass = new QComboBox(frame_4);
        comboBox_netClass->setObjectName(QStringLiteral("comboBox_netClass"));
        comboBox_netClass->setGeometry(QRect(338, 6, 131, 27));
        lineEdit_netName = new QLineEdit(frame_4);
        lineEdit_netName->setObjectName(QStringLiteral("lineEdit_netName"));
        lineEdit_netName->setGeometry(QRect(101, 10, 146, 27));
        lineEdit_netAdress = new QLineEdit(frame_4);
        lineEdit_netAdress->setObjectName(QStringLiteral("lineEdit_netAdress"));
        lineEdit_netAdress->setGeometry(QRect(100, 60, 311, 27));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(23, 60, 45, 20));
        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 11, 75, 20));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 75, 20));
        frame_5 = new QFrame(netAdd);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(9, 454, 795, 30));
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setMinimumSize(QSize(0, 30));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(netAdd);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 200, 501, 141));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 20, 491, 91));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(237, 9, 74, 20));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(11, 37, 73, 20));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(11, 11, 75, 20));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(237, 35, 74, 20));
        comboBox_warnWay = new QComboBox(frame);
        comboBox_warnWay->setObjectName(QStringLiteral("comboBox_warnWay"));
        comboBox_warnWay->setGeometry(QRect(94, 11, 91, 21));
        lineEdit_keyworld = new QLineEdit(frame);
        lineEdit_keyworld->setObjectName(QStringLiteral("lineEdit_keyworld"));
        lineEdit_keyworld->setGeometry(QRect(320, 10, 81, 20));
        sizePolicy.setHeightForWidth(lineEdit_keyworld->sizePolicy().hasHeightForWidth());
        lineEdit_keyworld->setSizePolicy(sizePolicy);
        lineEdit_port = new QLineEdit(frame);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(94, 38, 91, 20));
        lineEdit_status = new QLineEdit(frame);
        lineEdit_status->setObjectName(QStringLiteral("lineEdit_status"));
        lineEdit_status->setGeometry(QRect(320, 36, 81, 20));
        buttonBox = new QDialogButtonBox(netAdd);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(470, 340, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(netAdd);

        QMetaObject::connectSlotsByName(netAdd);
    } // setupUi

    void retranslateUi(QWidget *netAdd)
    {
        netAdd->setWindowTitle(QApplication::translate("netAdd", "Form", 0));
        comboBox_netClass->clear();
        comboBox_netClass->insertItems(0, QStringList()
         << QApplication::translate("netAdd", "\351\202\256\347\256\261", 0)
         << QApplication::translate("netAdd", "\346\220\234\347\264\242", 0)
         << QApplication::translate("netAdd", "\350\207\252\345\256\232\344\271\211\346\267\273\345\212\240", 0)
        );
        label_3->setText(QApplication::translate("netAdd", "\347\275\221\345\235\200\357\274\232", 0));
        label->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\210\206\347\261\273\357\274\232", 0));
        label_2->setText(QApplication::translate("netAdd", "\347\275\221\347\253\231\345\220\215\347\247\260\357\274\232", 0));
        groupBox->setTitle(QApplication::translate("netAdd", "\347\233\221\346\216\247", 0));
        label_7->setText(QApplication::translate("netAdd", "\345\205\263\351\224\256\345\255\227    \357\274\232", 0));
        label_5->setText(QApplication::translate("netAdd", "\347\253\257     \345\217\243   \357\274\232", 0));
        label_8->setText(QApplication::translate("netAdd", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", 0));
        label_6->setText(QApplication::translate("netAdd", "\347\212\266\346\200\201\347\240\201    \357\274\232", 0));
        comboBox_warnWay->clear();
        comboBox_warnWay->insertItems(0, QStringList()
         << QApplication::translate("netAdd", "\351\202\256\347\256\261", 0)
         << QApplication::translate("netAdd", "\346\211\213\346\234\272 ", 0)
         << QApplication::translate("netAdd", "\344\274\201\344\270\232\345\276\256\344\277\241", 0)
        );
        lineEdit_keyworld->setText(QApplication::translate("netAdd", "200", 0));
        lineEdit_port->setText(QString());
        lineEdit_status->setText(QApplication::translate("netAdd", "80", 0));
    } // retranslateUi

};

namespace Ui {
    class netAdd: public Ui_netAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETADD_H
