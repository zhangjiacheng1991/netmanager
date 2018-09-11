/********************************************************************************
** Form generated from reading UI file 'netmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETMANAGER_H
#define UI_NETMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netmanager
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *netAdd;
    QWidget *netGroup;
    QWidget *netList;
    QWidget *errCod;

    void setupUi(QWidget *netmanager)
    {
        if (netmanager->objectName().isEmpty())
            netmanager->setObjectName(QStringLiteral("netmanager"));
        netmanager->setEnabled(true);
        netmanager->resize(1133, 665);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(netmanager->sizePolicy().hasHeightForWidth());
        netmanager->setSizePolicy(sizePolicy);
        netmanager->setContextMenuPolicy(Qt::NoContextMenu);
        netmanager->setAutoFillBackground(true);
        gridLayout = new QGridLayout(netmanager);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(netmanager);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Raised);
        stackedWidget->setLineWidth(3);
        netAdd = new QWidget();
        netAdd->setObjectName(QStringLiteral("netAdd"));
        sizePolicy.setHeightForWidth(netAdd->sizePolicy().hasHeightForWidth());
        netAdd->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(netAdd);
        netGroup = new QWidget();
        netGroup->setObjectName(QStringLiteral("netGroup"));
        sizePolicy.setHeightForWidth(netGroup->sizePolicy().hasHeightForWidth());
        netGroup->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(netGroup);
        netList = new QWidget();
        netList->setObjectName(QStringLiteral("netList"));
        sizePolicy.setHeightForWidth(netList->sizePolicy().hasHeightForWidth());
        netList->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(netList);
        errCod = new QWidget();
        errCod->setObjectName(QStringLiteral("errCod"));
        sizePolicy.setHeightForWidth(errCod->sizePolicy().hasHeightForWidth());
        errCod->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(errCod);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(netmanager);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(netmanager);
    } // setupUi

    void retranslateUi(QWidget *netmanager)
    {
        netmanager->setWindowTitle(QApplication::translate("netmanager", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class netmanager: public Ui_netmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETMANAGER_H
