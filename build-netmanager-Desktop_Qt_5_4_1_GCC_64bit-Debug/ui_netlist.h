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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netList
{
public:
    QListView *listView;
    QLabel *label_11;
    QLineEdit *lineEdit_Time_2;
    QFrame *frame;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLabel *label_16;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QFrame *frame_3;
    QLabel *label_7;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QLineEdit *lineEdit_10;
    QLabel *label;
    QPushButton *BTN_StopCal;
    QLineEdit *lineEdit_Time;
    QPushButton *BTN_StartCal;
    QPushButton *BTN_Edit;
    QPushButton *BTN_Start;
    QPushButton *BTN_Del;
    QPushButton *BTN_StartCal_2;
    QPushButton *BTN_StartCal_3;
    QPushButton *BTN_StartCal_5;

    void setupUi(QWidget *netList)
    {
        if (netList->objectName().isEmpty())
            netList->setObjectName(QStringLiteral("netList"));
        netList->resize(795, 534);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(netList->sizePolicy().hasHeightForWidth());
        netList->setSizePolicy(sizePolicy);
        netList->setSizeIncrement(QSize(0, 0));
        listView = new QListView(netList);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(9, 192, 771, 261));
        label_11 = new QLabel(netList);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(185, 475, 75, 20));
        QFont font;
        font.setPointSize(10);
        label_11->setFont(font);
        lineEdit_Time_2 = new QLineEdit(netList);
        lineEdit_Time_2->setObjectName(QStringLiteral("lineEdit_Time_2"));
        lineEdit_Time_2->setEnabled(false);
        lineEdit_Time_2->setGeometry(QRect(257, 476, 91, 21));
        frame = new QFrame(netList);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 20, 771, 41));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        comboBox_3 = new QComboBox(frame);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(630, 7, 91, 21));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(332, 5, 201, 27));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(56, 9, 141, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 8, 45, 20));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(539, 7, 85, 21));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(475, 4, 59, 27));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(203, 8, 45, 20));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(254, 4, 67, 27));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 7, 41, 21));
        frame_2 = new QFrame(netList);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(6, 70, 771, 61));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(24, 6, 60, 20));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(90, 6, 146, 22));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(274, 10, 61, 20));
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(340, 8, 141, 21));
        lineEdit_8 = new QLineEdit(frame_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(90, 30, 146, 21));
        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(590, 6, 151, 22));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(534, 6, 45, 20));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(9, 30, 75, 20));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(340, 31, 141, 21));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(273, 30, 61, 20));
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(590, 30, 151, 22));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(534, 30, 45, 20));
        frame_3 = new QFrame(netList);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(7, 145, 491, 41));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(9, 10, 75, 20));
        lineEdit_9 = new QLineEdit(frame_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setEnabled(false);
        lineEdit_9->setGeometry(QRect(322, 7, 146, 22));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(241, 7, 75, 20));
        lineEdit_10 = new QLineEdit(frame_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setEnabled(false);
        lineEdit_10->setGeometry(QRect(90, 10, 146, 21));
        label = new QLabel(netList);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 474, 75, 20));
        label->setFont(font);
        BTN_StopCal = new QPushButton(netList);
        BTN_StopCal->setObjectName(QStringLiteral("BTN_StopCal"));
        BTN_StopCal->setGeometry(QRect(690, 470, 85, 30));
        lineEdit_Time = new QLineEdit(netList);
        lineEdit_Time->setObjectName(QStringLiteral("lineEdit_Time"));
        lineEdit_Time->setEnabled(false);
        lineEdit_Time->setGeometry(QRect(77, 474, 91, 21));
        BTN_StartCal = new QPushButton(netList);
        BTN_StartCal->setObjectName(QStringLiteral("BTN_StartCal"));
        BTN_StartCal->setGeometry(QRect(599, 470, 85, 30));
        BTN_Edit = new QPushButton(netList);
        BTN_Edit->setObjectName(QStringLiteral("BTN_Edit"));
        BTN_Edit->setGeometry(QRect(600, 155, 85, 21));
        BTN_Start = new QPushButton(netList);
        BTN_Start->setObjectName(QStringLiteral("BTN_Start"));
        BTN_Start->setGeometry(QRect(510, 155, 85, 20));
        BTN_Del = new QPushButton(netList);
        BTN_Del->setObjectName(QStringLiteral("BTN_Del"));
        BTN_Del->setGeometry(QRect(690, 155, 85, 21));
        BTN_StartCal_2 = new QPushButton(netList);
        BTN_StartCal_2->setObjectName(QStringLiteral("BTN_StartCal_2"));
        BTN_StartCal_2->setGeometry(QRect(380, 465, 101, 21));
        BTN_StartCal_3 = new QPushButton(netList);
        BTN_StartCal_3->setObjectName(QStringLiteral("BTN_StartCal_3"));
        BTN_StartCal_3->setGeometry(QRect(380, 490, 101, 21));
        BTN_StartCal_5 = new QPushButton(netList);
        BTN_StartCal_5->setObjectName(QStringLiteral("BTN_StartCal_5"));
        BTN_StartCal_5->setGeometry(QRect(510, 470, 81, 31));

        retranslateUi(netList);

        QMetaObject::connectSlotsByName(netList);
    } // setupUi

    void retranslateUi(QWidget *netList)
    {
        netList->setWindowTitle(QApplication::translate("netList", "Form", 0));
        label_11->setText(QApplication::translate("netList", "\347\233\221\346\216\247\346\227\266\351\227\264\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("netList", "\346\234\252\350\247\243\345\206\263\346\225\205\351\232\234\350\256\260\345\275\225", 0)
         << QApplication::translate("netList", "\346\211\200\346\234\211\346\225\205\351\232\234\350\256\260\345\275\225", 0)
        );
        label_2->setText(QApplication::translate("netList", "\345\205\250\351\203\250\357\274\232", 0));
        pushButton->setText(QApplication::translate("netList", "\346\220\234\347\264\242", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("netList", "\347\275\221\347\253\231", 0)
         << QApplication::translate("netList", "\345\220\215\347\247\260", 0)
        );
        label_3->setText(QApplication::translate("netList", "\345\210\206\347\261\273\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("netList", "\345\210\206\347\261\2731", 0)
         << QApplication::translate("netList", "\345\210\206\347\261\2732", 0)
        );
        pushButton_2->setText(QApplication::translate("netList", "\346\237\245\350\257\242", 0));
        label_5->setText(QApplication::translate("netList", "\347\275\221\347\273\234\345\220\215\357\274\232", 0));
        label_10->setText(QApplication::translate("netList", "\347\275\221\345\235\200    \357\274\232", 0));
        label_8->setText(QApplication::translate("netList", "\347\212\266\346\200\201\357\274\232", 0));
        label_16->setText(QApplication::translate("netList", "\350\277\220\350\241\214\347\212\266\346\200\201\357\274\232", 0));
        label_4->setText(QApplication::translate("netList", "\347\261\273\345\210\253    \357\274\232  ", 0));
        label_9->setText(QApplication::translate("netList", "\345\272\217\345\217\267\357\274\232", 0));
        label_7->setText(QApplication::translate("netList", "\346\212\245\350\255\246\346\226\271\345\274\217\357\274\232", 0));
        label_6->setText(QApplication::translate("netList", "\346\212\245\350\255\246\350\247\204\345\210\231\357\274\232", 0));
        label->setText(QApplication::translate("netList", "\347\233\221\346\216\247\347\212\266\346\200\201\357\274\232", 0));
        BTN_StopCal->setText(QApplication::translate("netList", "\345\201\234\346\255\242\347\233\221\346\216\247", 0));
        BTN_StartCal->setText(QApplication::translate("netList", "\345\220\257\345\212\250\347\233\221\346\216\247", 0));
        BTN_Edit->setText(QApplication::translate("netList", "\347\274\226\350\276\221", 0));
        BTN_Start->setText(QApplication::translate("netList", "\345\220\257\347\224\250", 0));
        BTN_Del->setText(QApplication::translate("netList", "\345\210\240\351\231\244", 0));
        BTN_StartCal_2->setText(QApplication::translate("netList", "\346\267\273\345\212\240\347\233\221\346\216\247\347\275\221\347\253\231", 0));
        BTN_StartCal_3->setText(QApplication::translate("netList", "\345\210\240\351\231\244\347\233\221\346\216\247\347\275\221\347\253\231", 0));
        BTN_StartCal_5->setText(QApplication::translate("netList", "\345\267\262\347\233\221\346\216\247\347\275\221\347\253\231", 0));
    } // retranslateUi

};

namespace Ui {
    class netList: public Ui_netList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETLIST_H
