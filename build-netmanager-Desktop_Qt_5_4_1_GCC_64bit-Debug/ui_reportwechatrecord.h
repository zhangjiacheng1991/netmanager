/********************************************************************************
** Form generated from reading UI file 'reportwechatrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWECHATRECORD_H
#define UI_REPORTWECHATRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reportWechatrecord
{
public:
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit_netAdress;
    QLineEdit *lineEdit_reportTimeEnd;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_search;
    QLabel *label_4;
    QLineEdit *lineEdit_reportTimeBegin;
    QComboBox *comboBox_netClass;
    QLabel *label_5;
    QLineEdit *lineEdit_wechat;
    QListView *listView;

    void setupUi(QWidget *reportWechatrecord)
    {
        if (reportWechatrecord->objectName().isEmpty())
            reportWechatrecord->setObjectName(QStringLiteral("reportWechatrecord"));
        reportWechatrecord->resize(802, 548);
        frame = new QFrame(reportWechatrecord);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 30, 681, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 44, 71, 17));
        lineEdit_netAdress = new QLineEdit(frame);
        lineEdit_netAdress->setObjectName(QStringLiteral("lineEdit_netAdress"));
        lineEdit_netAdress->setGeometry(QRect(120, 44, 251, 21));
        lineEdit_reportTimeEnd = new QLineEdit(frame);
        lineEdit_reportTimeEnd->setObjectName(QStringLiteral("lineEdit_reportTimeEnd"));
        lineEdit_reportTimeEnd->setGeometry(QRect(260, 6, 113, 21));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(381, 6, 81, 20));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 6, 81, 17));
        pushButton_search = new QPushButton(frame);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(560, 4, 99, 61));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 6, 21, 17));
        lineEdit_reportTimeBegin = new QLineEdit(frame);
        lineEdit_reportTimeBegin->setObjectName(QStringLiteral("lineEdit_reportTimeBegin"));
        lineEdit_reportTimeBegin->setGeometry(QRect(120, 6, 113, 21));
        comboBox_netClass = new QComboBox(frame);
        comboBox_netClass->setObjectName(QStringLiteral("comboBox_netClass"));
        comboBox_netClass->setGeometry(QRect(460, 4, 85, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 44, 71, 17));
        lineEdit_wechat = new QLineEdit(frame);
        lineEdit_wechat->setObjectName(QStringLiteral("lineEdit_wechat"));
        lineEdit_wechat->setGeometry(QRect(450, 42, 101, 21));
        listView = new QListView(reportWechatrecord);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(50, 110, 681, 381));

        retranslateUi(reportWechatrecord);

        QMetaObject::connectSlotsByName(reportWechatrecord);
    } // setupUi

    void retranslateUi(QWidget *reportWechatrecord)
    {
        reportWechatrecord->setWindowTitle(QApplication::translate("reportWechatrecord", "Form", 0));
        label_2->setText(QApplication::translate("reportWechatrecord", "\347\275\221\347\253\231\345\220\215     :", 0));
        label->setText(QApplication::translate("reportWechatrecord", "\347\275\221\347\253\231\345\210\206\347\261\273:", 0));
        label_3->setText(QApplication::translate("reportWechatrecord", "\346\237\245\350\257\242\346\227\245\346\234\237\357\274\232", 0));
        pushButton_search->setText(QApplication::translate("reportWechatrecord", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("reportWechatrecord", "\357\275\236", 0));
        comboBox_netClass->clear();
        comboBox_netClass->insertItems(0, QStringList()
         << QApplication::translate("reportWechatrecord", "\345\210\206\347\261\273", 0)
         << QApplication::translate("reportWechatrecord", "\346\211\200\346\234\211\346\225\205\351\232\234", 0)
        );
        label_5->setText(QApplication::translate("reportWechatrecord", "\344\274\201\344\270\232\345\276\256\344\277\241 :", 0));
    } // retranslateUi

};

namespace Ui {
    class reportWechatrecord: public Ui_reportWechatrecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWECHATRECORD_H
