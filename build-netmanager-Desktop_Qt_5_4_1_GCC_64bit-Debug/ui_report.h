/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QListView *listView;
    QComboBox *comboBox;

    void setupUi(QWidget *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(754, 590);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(report->sizePolicy().hasHeightForWidth());
        report->setSizePolicy(sizePolicy);
        listView = new QListView(report);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 10, 751, 571));
        comboBox = new QComboBox(report);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(660, 10, 85, 27));

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QWidget *report)
    {
        report->setWindowTitle(QApplication::translate("report", "Form", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("report", "\351\202\256\344\273\266\345\217\221\351\200\201\350\256\260\345\275\225", 0)
         << QApplication::translate("report", "\347\237\255\344\277\241\345\217\221\351\200\201\350\256\260\345\275\225", 0)
         << QApplication::translate("report", "\347\276\244\346\266\210\346\201\257\345\217\221\351\200\201\350\256\260\345\275\225", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
