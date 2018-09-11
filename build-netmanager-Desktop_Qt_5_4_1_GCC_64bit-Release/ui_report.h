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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QTabWidget *tabWidget;
    QWidget *eMail;
    QListView *listView;
    QWidget *message;
    QListView *listView_2;
    QWidget *groupmsg;
    QListView *listView_3;

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
        tabWidget = new QTabWidget(report);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 761, 591));
        eMail = new QWidget();
        eMail->setObjectName(QStringLiteral("eMail"));
        listView = new QListView(eMail);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 751, 561));
        tabWidget->addTab(eMail, QString());
        message = new QWidget();
        message->setObjectName(QStringLiteral("message"));
        listView_2 = new QListView(message);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(0, 0, 751, 561));
        tabWidget->addTab(message, QString());
        groupmsg = new QWidget();
        groupmsg->setObjectName(QStringLiteral("groupmsg"));
        listView_3 = new QListView(groupmsg);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(0, 0, 751, 561));
        tabWidget->addTab(groupmsg, QString());

        retranslateUi(report);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QWidget *report)
    {
        report->setWindowTitle(QApplication::translate("report", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(eMail), QApplication::translate("report", "\351\202\256\347\256\261\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        tabWidget->setTabText(tabWidget->indexOf(message), QApplication::translate("report", "\347\237\255\344\277\241\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        tabWidget->setTabText(tabWidget->indexOf(groupmsg), QApplication::translate("report", "\347\276\244\346\266\210\346\201\257\345\217\221\351\200\201\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
