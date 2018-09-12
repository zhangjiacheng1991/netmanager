/********************************************************************************
** Form generated from reading UI file 'reportemailrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTEMAILRECORD_H
#define UI_REPORTEMAILRECORD_H

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

class Ui_reportEmailRecord
{
public:
    QListView *listView;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_search;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *reportEmailRecord)
    {
        if (reportEmailRecord->objectName().isEmpty())
            reportEmailRecord->setObjectName(QStringLiteral("reportEmailRecord"));
        reportEmailRecord->resize(736, 500);
        listView = new QListView(reportEmailRecord);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 100, 681, 381));
        frame = new QFrame(reportEmailRecord);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 20, 681, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 44, 71, 17));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 44, 251, 21));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 6, 113, 21));
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
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 6, 113, 21));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(460, 4, 85, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 44, 41, 17));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(420, 42, 131, 21));

        retranslateUi(reportEmailRecord);

        QMetaObject::connectSlotsByName(reportEmailRecord);
    } // setupUi

    void retranslateUi(QWidget *reportEmailRecord)
    {
        reportEmailRecord->setWindowTitle(QApplication::translate("reportEmailRecord", "Form", 0));
        label_2->setText(QApplication::translate("reportEmailRecord", "\347\275\221\347\253\231\345\220\215     :", 0));
        label->setText(QApplication::translate("reportEmailRecord", "\347\275\221\347\253\231\345\210\206\347\261\273:", 0));
        label_3->setText(QApplication::translate("reportEmailRecord", "\346\237\245\350\257\242\346\227\245\346\234\237\357\274\232", 0));
        pushButton_search->setText(QApplication::translate("reportEmailRecord", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("reportEmailRecord", "\357\275\236", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("reportEmailRecord", "\345\210\206\347\261\273", 0)
         << QApplication::translate("reportEmailRecord", "\346\211\200\346\234\211\346\225\205\351\232\234", 0)
        );
        label_5->setText(QApplication::translate("reportEmailRecord", "\351\202\256\347\256\261 :", 0));
    } // retranslateUi

};

namespace Ui {
    class reportEmailRecord: public Ui_reportEmailRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTEMAILRECORD_H
