/********************************************************************************
** Form generated from reading UI file 'addnetgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNETGROUP_H
#define UI_ADDNETGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNetgroup
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QListView *listView;

    void setupUi(QWidget *addNetgroup)
    {
        if (addNetgroup->objectName().isEmpty())
            addNetgroup->setObjectName(QStringLiteral("addNetgroup"));
        addNetgroup->resize(1034, 663);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addNetgroup->sizePolicy().hasHeightForWidth());
        addNetgroup->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(addNetgroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(addNetgroup);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(addNetgroup);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(addNetgroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(addNetgroup);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(addNetgroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        listView = new QListView(addNetgroup);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);


        retranslateUi(addNetgroup);

        QMetaObject::connectSlotsByName(addNetgroup);
    } // setupUi

    void retranslateUi(QWidget *addNetgroup)
    {
        addNetgroup->setWindowTitle(QApplication::translate("addNetgroup", "Form", 0));
        label->setText(QApplication::translate("addNetgroup", "\346\211\200\345\261\236\347\261\273\345\236\213\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addNetgroup", "\345\250\261\344\271\220", 0)
         << QApplication::translate("addNetgroup", "\350\247\206\351\242\221", 0)
        );
        label_2->setText(QApplication::translate("addNetgroup", "\345\210\206\347\261\273\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("addNetgroup", "\346\217\217\350\277\260\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addNetgroup: public Ui_addNetgroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNETGROUP_H
