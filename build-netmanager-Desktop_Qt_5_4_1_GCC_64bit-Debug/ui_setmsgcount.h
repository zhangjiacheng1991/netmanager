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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setMsgCount
{
public:
    QFrame *frame;
    QComboBox *comboBox_operator;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_sendOvertime;
    QLabel *label_53;
    QTextEdit *textEdit_others;
    QLabel *label_48;
    QLabel *label_83;
    QLabel *label_50;
    QLabel *label;
    QLineEdit *lineEdit_sendinterval;
    QLabel *label_52;
    QLabel *label_49;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *setMsgCount)
    {
        if (setMsgCount->objectName().isEmpty())
            setMsgCount->setObjectName(QStringLiteral("setMsgCount"));
        setMsgCount->resize(709, 474);
        frame = new QFrame(setMsgCount);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(140, 70, 441, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        comboBox_operator = new QComboBox(frame);
        comboBox_operator->setObjectName(QStringLiteral("comboBox_operator"));
        comboBox_operator->setGeometry(QRect(90, 20, 85, 21));
        lineEdit_phone = new QLineEdit(frame);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));
        lineEdit_phone->setGeometry(QRect(90, 49, 141, 21));
        lineEdit_sendOvertime = new QLineEdit(frame);
        lineEdit_sendOvertime->setObjectName(QStringLiteral("lineEdit_sendOvertime"));
        lineEdit_sendOvertime->setGeometry(QRect(310, 219, 71, 21));
        label_53 = new QLabel(frame);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(210, 220, 16, 17));
        textEdit_others = new QTextEdit(frame);
        textEdit_others->setObjectName(QStringLiteral("textEdit_others"));
        textEdit_others->setGeometry(QRect(20, 100, 371, 91));
        label_48 = new QLabel(frame);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(20, 50, 61, 17));
        label_83 = new QLabel(frame);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(20, 80, 91, 17));
        label_50 = new QLabel(frame);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(20, 20, 61, 17));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 219, 101, 17));
        lineEdit_sendinterval = new QLineEdit(frame);
        lineEdit_sendinterval->setObjectName(QStringLiteral("lineEdit_sendinterval"));
        lineEdit_sendinterval->setGeometry(QRect(100, 217, 101, 21));
        label_52 = new QLabel(frame);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(390, 220, 16, 17));
        label_49 = new QLabel(frame);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(20, 220, 101, 17));
        layoutWidget = new QWidget(setMsgCount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 340, 441, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(setMsgCount);

        QMetaObject::connectSlotsByName(setMsgCount);
    } // setupUi

    void retranslateUi(QWidget *setMsgCount)
    {
        setMsgCount->setWindowTitle(QApplication::translate("setMsgCount", "Form", 0));
        comboBox_operator->clear();
        comboBox_operator->insertItems(0, QStringList()
         << QApplication::translate("setMsgCount", "\344\270\255\345\233\275\347\247\273\345\212\250", 0)
         << QApplication::translate("setMsgCount", "\344\270\255\345\233\275\350\201\224\351\200\232", 0)
         << QApplication::translate("setMsgCount", "\344\270\255\345\233\275\347\224\265\344\277\241", 0)
        );
        label_53->setText(QApplication::translate("setMsgCount", "s", 0));
        label_48->setText(QApplication::translate("setMsgCount", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_83->setText(QApplication::translate("setMsgCount", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257\357\274\232", 0));
        label_50->setText(QApplication::translate("setMsgCount", "\350\277\220\350\220\245\345\225\206\357\274\232", 0));
        label->setText(QApplication::translate("setMsgCount", "\345\217\221\351\200\201\350\266\205\346\227\266\357\274\232", 0));
        label_52->setText(QApplication::translate("setMsgCount", "s", 0));
        label_49->setText(QApplication::translate("setMsgCount", "\345\217\221\351\200\201\351\227\264\351\232\224\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class setMsgCount: public Ui_setMsgCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETMSGCOUNT_H
