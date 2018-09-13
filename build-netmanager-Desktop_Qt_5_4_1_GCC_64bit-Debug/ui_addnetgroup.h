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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNetgroup
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit_describe;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *comboBox_class;
    QLabel *label_2;
    QLineEdit *lineEdit_newName;

    void setupUi(QWidget *addNetgroup)
    {
        if (addNetgroup->objectName().isEmpty())
            addNetgroup->setObjectName(QStringLiteral("addNetgroup"));
        addNetgroup->resize(885, 626);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addNetgroup->sizePolicy().hasHeightForWidth());
        addNetgroup->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(addNetgroup);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(250, 180, 351, 181));
        textEdit_describe = new QTextEdit(groupBox);
        textEdit_describe->setObjectName(QStringLiteral("textEdit_describe"));
        textEdit_describe->setGeometry(QRect(0, 20, 331, 151));
        buttonBox = new QDialogButtonBox(addNetgroup);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(400, 370, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addNetgroup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(460, 140, 75, 20));
        comboBox_class = new QComboBox(addNetgroup);
        comboBox_class->setObjectName(QStringLiteral("comboBox_class"));
        comboBox_class->setGeometry(QRect(520, 140, 60, 21));
        label_2 = new QLabel(addNetgroup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 140, 71, 20));
        lineEdit_newName = new QLineEdit(addNetgroup);
        lineEdit_newName->setObjectName(QStringLiteral("lineEdit_newName"));
        lineEdit_newName->setGeometry(QRect(310, 140, 146, 21));

        retranslateUi(addNetgroup);

        QMetaObject::connectSlotsByName(addNetgroup);
    } // setupUi

    void retranslateUi(QWidget *addNetgroup)
    {
        addNetgroup->setWindowTitle(QApplication::translate("addNetgroup", "Form", 0));
        groupBox->setTitle(QApplication::translate("addNetgroup", "\346\217\217\350\277\260", 0));
        label->setText(QApplication::translate("addNetgroup", "\346\211\200\345\261\236\347\273\204\357\274\232", 0));
        comboBox_class->clear();
        comboBox_class->insertItems(0, QStringList()
         << QApplication::translate("addNetgroup", "\345\250\261\344\271\220", 0)
         << QApplication::translate("addNetgroup", "\346\220\234\347\264\242", 0)
         << QApplication::translate("addNetgroup", "\350\247\206\351\242\221", 0)
        );
        label_2->setText(QApplication::translate("addNetgroup", "\346\226\260\347\261\273\345\220\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addNetgroup: public Ui_addNetgroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNETGROUP_H
