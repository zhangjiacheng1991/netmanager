/********************************************************************************
** Form generated from reading UI file 'errrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRRECORD_H
#define UI_ERRRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errRecord
{
public:
    QListWidget *listWidget;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit_netName;
    QLineEdit *lineEdit_errTimeEnd;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_search;
    QLabel *label_4;
    QLineEdit *lineEdit_errTimeBegin;
    QComboBox *comboBox_errClass;
    QComboBox *comboBox_netClass;
    QLabel *label_5;

    void setupUi(QWidget *errRecord)
    {
        if (errRecord->objectName().isEmpty())
            errRecord->setObjectName(QStringLiteral("errRecord"));
        errRecord->setEnabled(true);
        errRecord->resize(819, 549);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errRecord->sizePolicy().hasHeightForWidth());
        errRecord->setSizePolicy(sizePolicy);
        listWidget = new QListWidget(errRecord);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 120, 681, 401));
        frame = new QFrame(errRecord);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 40, 681, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 44, 71, 17));
        lineEdit_netName = new QLineEdit(frame);
        lineEdit_netName->setObjectName(QStringLiteral("lineEdit_netName"));
        lineEdit_netName->setGeometry(QRect(120, 44, 251, 21));
        lineEdit_errTimeEnd = new QLineEdit(frame);
        lineEdit_errTimeEnd->setObjectName(QStringLiteral("lineEdit_errTimeEnd"));
        lineEdit_errTimeEnd->setGeometry(QRect(260, 6, 113, 21));
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
        lineEdit_errTimeBegin = new QLineEdit(frame);
        lineEdit_errTimeBegin->setObjectName(QStringLiteral("lineEdit_errTimeBegin"));
        lineEdit_errTimeBegin->setGeometry(QRect(120, 6, 113, 21));
        comboBox_errClass = new QComboBox(frame);
        comboBox_errClass->setObjectName(QStringLiteral("comboBox_errClass"));
        comboBox_errClass->setGeometry(QRect(460, 41, 85, 21));
        comboBox_netClass = new QComboBox(frame);
        comboBox_netClass->setObjectName(QStringLiteral("comboBox_netClass"));
        comboBox_netClass->setGeometry(QRect(460, 4, 85, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 44, 71, 17));

        retranslateUi(errRecord);

        QMetaObject::connectSlotsByName(errRecord);
    } // setupUi

    void retranslateUi(QWidget *errRecord)
    {
        errRecord->setWindowTitle(QApplication::translate("errRecord", "Form", 0));
        label_2->setText(QApplication::translate("errRecord", "\347\275\221\347\253\231\345\220\215     :", 0));
        label->setText(QApplication::translate("errRecord", "\347\275\221\347\253\231\345\210\206\347\261\273:", 0));
        label_3->setText(QApplication::translate("errRecord", "\346\237\245\350\257\242\346\227\245\346\234\237\357\274\232", 0));
        pushButton_search->setText(QApplication::translate("errRecord", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("errRecord", "\357\275\236", 0));
        comboBox_errClass->clear();
        comboBox_errClass->insertItems(0, QStringList()
         << QApplication::translate("errRecord", "\346\211\200\346\234\211\346\225\205\351\232\234", 0)
         << QApplication::translate("errRecord", "\345\267\262\345\244\204\347\220\206\346\225\205\351\232\234", 0)
         << QApplication::translate("errRecord", "\346\234\252\345\244\204\347\220\206\346\225\205\351\232\234", 0)
        );
        comboBox_netClass->clear();
        comboBox_netClass->insertItems(0, QStringList()
         << QApplication::translate("errRecord", "\345\210\206\347\261\273", 0)
         << QApplication::translate("errRecord", "\346\211\200\346\234\211\346\225\205\351\232\234", 0)
        );
        label_5->setText(QApplication::translate("errRecord", "\346\225\205\351\232\234\347\261\273\345\236\213 :", 0));
    } // retranslateUi

};

namespace Ui {
    class errRecord: public Ui_errRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRRECORD_H
