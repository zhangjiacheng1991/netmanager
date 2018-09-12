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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setEmailcount
{
public:
    QFrame *frame;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_7;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QCheckBox *checkBox_9;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *setEmailcount)
    {
        if (setEmailcount->objectName().isEmpty())
            setEmailcount->setObjectName(QStringLiteral("setEmailcount"));
        setEmailcount->resize(732, 523);
        frame = new QFrame(setEmailcount);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(140, 110, 481, 121));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(91, 80, 241, 21));
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(340, 20, 121, 21));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(246, 50, 91, 20));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(16, 50, 91, 20));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 20, 141, 21));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 50, 141, 21));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 20, 91, 20));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(18, 80, 91, 20));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 20, 91, 20));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(340, 50, 131, 21));
        groupBox = new QGroupBox(setEmailcount);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 240, 441, 111));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 80, 91, 20));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 80, 81, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(18, 40, 91, 20));
        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(250, 80, 97, 22));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(100, 40, 121, 27));
        buttonBox = new QDialogButtonBox(setEmailcount);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(420, 380, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(setEmailcount);

        QMetaObject::connectSlotsByName(setEmailcount);
    } // setupUi

    void retranslateUi(QWidget *setEmailcount)
    {
        setEmailcount->setWindowTitle(QApplication::translate("setEmailcount", "Form", 0));
        label_3->setText(QApplication::translate("setEmailcount", "\350\207\252\345\256\232\344\271\211\345\206\205\345\256\271:", 0));
        label_2->setText(QApplication::translate("setEmailcount", "\351\202\256\347\256\261\345\257\206\347\240\201:", 0));
        label->setText(QApplication::translate("setEmailcount", "\345\217\221\351\200\201\351\202\256\347\256\261:", 0));
        label_8->setText(QApplication::translate("setEmailcount", "\350\277\236\346\216\245\346\226\271\345\274\217:", 0));
        label_7->setText(QApplication::translate("setEmailcount", "\345\217\221\344\273\266\344\272\272:", 0));
        groupBox->setTitle(QApplication::translate("setEmailcount", "SMTP\350\256\276\347\275\256", 0));
        label_5->setText(QApplication::translate("setEmailcount", "\347\253\257    \345\217\243:", 0));
        label_4->setText(QApplication::translate("setEmailcount", "\346\234\215\345\212\241\345\231\250:", 0));
        checkBox_9->setText(QApplication::translate("setEmailcount", "SSL", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("setEmailcount", "\346\234\215\345\212\241\345\231\2501", 0)
         << QApplication::translate("setEmailcount", "\346\234\215\345\212\241\345\231\2502", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class setEmailcount: public Ui_setEmailcount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETEMAILCOUNT_H
