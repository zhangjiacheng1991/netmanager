/********************************************************************************
** Form generated from reading UI file 'emailreport.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILREPORT_H
#define UI_EMAILREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emailReport
{
public:
    QGridLayout *gridLayout;
    QListView *listView;

    void setupUi(QWidget *emailReport)
    {
        if (emailReport->objectName().isEmpty())
            emailReport->setObjectName(QStringLiteral("emailReport"));
        emailReport->resize(995, 614);
        gridLayout = new QGridLayout(emailReport);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(emailReport);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        retranslateUi(emailReport);

        QMetaObject::connectSlotsByName(emailReport);
    } // setupUi

    void retranslateUi(QWidget *emailReport)
    {
        emailReport->setWindowTitle(QApplication::translate("emailReport", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class emailReport: public Ui_emailReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILREPORT_H
