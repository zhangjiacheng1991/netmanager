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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errRecord
{
public:
    QListView *listView;

    void setupUi(QWidget *errRecord)
    {
        if (errRecord->objectName().isEmpty())
            errRecord->setObjectName(QStringLiteral("errRecord"));
        errRecord->resize(851, 571);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errRecord->sizePolicy().hasHeightForWidth());
        errRecord->setSizePolicy(sizePolicy);
        listView = new QListView(errRecord);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 851, 571));
        listView->setFrameShape(QFrame::Box);

        retranslateUi(errRecord);

        QMetaObject::connectSlotsByName(errRecord);
    } // setupUi

    void retranslateUi(QWidget *errRecord)
    {
        errRecord->setWindowTitle(QApplication::translate("errRecord", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class errRecord: public Ui_errRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRRECORD_H
