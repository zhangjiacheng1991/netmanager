/********************************************************************************
** Form generated from reading UI file 'setwechatcount.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWECHATCOUNT_H
#define UI_SETWECHATCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setWechatCount
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QTextEdit *textEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_16;
    QLabel *label_18;
    QLineEdit *lineEdit_13;
    QLabel *label_17;
    QLabel *label_43;
    QLineEdit *lineEdit_26;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLineEdit *lineEdit_27;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *setWechatCount)
    {
        if (setWechatCount->objectName().isEmpty())
            setWechatCount->setObjectName(QStringLiteral("setWechatCount"));
        setWechatCount->resize(915, 618);
        widget = new QWidget(setWechatCount);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 70, 442, 267));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(440, 230));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(100, 40, 161, 21));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 10, 121, 21));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 10, 91, 17));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(230, 10, 51, 20));
        lineEdit_13 = new QLineEdit(frame_2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(280, 10, 121, 21));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 40, 91, 17));
        label_43 = new QLabel(frame_2);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(26, 70, 71, 17));
        lineEdit_26 = new QLineEdit(frame_2);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(100, 70, 71, 21));
        label_44 = new QLabel(frame_2);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(180, 70, 21, 17));
        label_45 = new QLabel(frame_2);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(370, 70, 31, 17));
        label_46 = new QLabel(frame_2);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(230, 70, 41, 17));
        lineEdit_27 = new QLineEdit(frame_2);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));
        lineEdit_27->setGeometry(QRect(290, 70, 71, 21));
        radioButton_2 = new QRadioButton(frame_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(160, 130, 117, 22));
        radioButton = new QRadioButton(frame_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 130, 117, 22));

        verticalLayout->addWidget(frame_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(setWechatCount);

        QMetaObject::connectSlotsByName(setWechatCount);
    } // setupUi

    void retranslateUi(QWidget *setWechatCount)
    {
        setWechatCount->setWindowTitle(QApplication::translate("setWechatCount", "Form", 0));
        label_16->setText(QApplication::translate("setWechatCount", "\344\274\201\344\270\232\345\276\256\344\277\241\345\217\267\357\274\232", 0));
        label_18->setText(QApplication::translate("setWechatCount", "\345\257\206\347\240\201\357\274\232", 0));
        lineEdit_13->setText(QString());
        label_17->setText(QApplication::translate("setWechatCount", "\350\207\252\345\256\232\344\271\211\346\266\210\346\201\257\357\274\232", 0));
        label_43->setText(QApplication::translate("setWechatCount", "\351\227\264\351\232\224\346\227\266\351\227\264\357\274\232", 0));
        label_44->setText(QApplication::translate("setWechatCount", "s", 0));
        label_45->setText(QApplication::translate("setWechatCount", "s", 0));
        label_46->setText(QApplication::translate("setWechatCount", "\350\266\205\346\227\266\357\274\232", 0));
        radioButton_2->setText(QApplication::translate("setWechatCount", "\346\211\213\345\212\250\345\220\257\345\212\250", 0));
        radioButton->setText(QApplication::translate("setWechatCount", "\350\207\252\345\212\250\345\220\257\345\212\250", 0));
    } // retranslateUi

};

namespace Ui {
    class setWechatCount: public Ui_setWechatCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWECHATCOUNT_H
