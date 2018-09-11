/********************************************************************************
** Form generated from reading UI file 'emailset.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILSET_H
#define UI_EMAILSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emailSet
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_sendName;
    QLineEdit *lineEdit_emailAdress;
    QLineEdit *lineEdit_smtpServer;
    QLineEdit *lineEdit_connect;
    QLineEdit *lineEdit_smtpPort;
    QLineEdit *lineEdit_sendNumber;
    QLineEdit *lineEdit_sendPswd;

    void setupUi(QWidget *emailSet)
    {
        if (emailSet->objectName().isEmpty())
            emailSet->setObjectName(QStringLiteral("emailSet"));
        emailSet->resize(745, 522);
        buttonBox = new QDialogButtonBox(emailSet);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(460, 470, 176, 27));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        widget = new QWidget(emailSet);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 101, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        widget1 = new QWidget(emailSet);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 50, 351, 341));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_sendName = new QLineEdit(widget1);
        lineEdit_sendName->setObjectName(QStringLiteral("lineEdit_sendName"));

        verticalLayout_2->addWidget(lineEdit_sendName);

        lineEdit_emailAdress = new QLineEdit(widget1);
        lineEdit_emailAdress->setObjectName(QStringLiteral("lineEdit_emailAdress"));

        verticalLayout_2->addWidget(lineEdit_emailAdress);

        lineEdit_smtpServer = new QLineEdit(widget1);
        lineEdit_smtpServer->setObjectName(QStringLiteral("lineEdit_smtpServer"));

        verticalLayout_2->addWidget(lineEdit_smtpServer);

        lineEdit_connect = new QLineEdit(widget1);
        lineEdit_connect->setObjectName(QStringLiteral("lineEdit_connect"));

        verticalLayout_2->addWidget(lineEdit_connect);

        lineEdit_smtpPort = new QLineEdit(widget1);
        lineEdit_smtpPort->setObjectName(QStringLiteral("lineEdit_smtpPort"));

        verticalLayout_2->addWidget(lineEdit_smtpPort);

        lineEdit_sendNumber = new QLineEdit(widget1);
        lineEdit_sendNumber->setObjectName(QStringLiteral("lineEdit_sendNumber"));

        verticalLayout_2->addWidget(lineEdit_sendNumber);

        lineEdit_sendPswd = new QLineEdit(widget1);
        lineEdit_sendPswd->setObjectName(QStringLiteral("lineEdit_sendPswd"));

        verticalLayout_2->addWidget(lineEdit_sendPswd);


        retranslateUi(emailSet);

        QMetaObject::connectSlotsByName(emailSet);
    } // setupUi

    void retranslateUi(QWidget *emailSet)
    {
        emailSet->setWindowTitle(QApplication::translate("emailSet", "Form", 0));
        label->setText(QApplication::translate("emailSet", "\345\217\221\344\273\266\344\272\272  \357\274\232", 0));
        label_2->setText(QApplication::translate("emailSet", "\351\202\256\347\256\261\345\234\260\345\235\200\357\274\232", 0));
        label_3->setText(QApplication::translate("emailSet", "SMTP\346\234\215\345\212\241\345\231\250\357\274\232", 0));
        label_4->setText(QApplication::translate("emailSet", "\350\277\236\346\216\245\346\226\271\345\274\217\357\274\232", 0));
        label_5->setText(QApplication::translate("emailSet", "SMTP\347\253\257\345\217\243\357\274\232", 0));
        label_6->setText(QApplication::translate("emailSet", "\345\217\221\344\273\266\347\256\261\345\270\220\345\217\267\357\274\232", 0));
        label_7->setText(QApplication::translate("emailSet", "\345\217\221\344\273\266\347\256\261\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class emailSet: public Ui_emailSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILSET_H
