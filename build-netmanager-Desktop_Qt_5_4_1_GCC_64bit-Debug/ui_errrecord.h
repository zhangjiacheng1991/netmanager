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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errRecord
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_15;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QTextEdit *textEdit_8;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QFrame *frame_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_23;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QLineEdit *lineEdit;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *errRecord)
    {
        if (errRecord->objectName().isEmpty())
            errRecord->setObjectName(QStringLiteral("errRecord"));
        errRecord->setEnabled(true);
        errRecord->resize(784, 457);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errRecord->sizePolicy().hasHeightForWidth());
        errRecord->setSizePolicy(sizePolicy);
        frame = new QFrame(errRecord);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 70, 561, 151));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Sunken);
        horizontalLayout_13 = new QHBoxLayout(frame_4);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_20->addWidget(label_15);

        lineEdit_8 = new QLineEdit(frame_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(false);

        horizontalLayout_20->addWidget(lineEdit_8);


        horizontalLayout_13->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_21->addWidget(label_16);

        textEdit_8 = new QTextEdit(frame_4);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setEnabled(false);

        horizontalLayout_21->addWidget(textEdit_8);


        horizontalLayout_13->addLayout(horizontalLayout_21);


        gridLayout->addWidget(frame_4, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        horizontalLayout_8 = new QHBoxLayout(frame_2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        horizontalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        textEdit_2 = new QTextEdit(frame_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);

        horizontalLayout_4->addWidget(textEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_4);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QFont font;
        font.setPointSize(10);
        frame_3->setFont(font);
        frame_3->setToolTipDuration(0);
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(1);
        horizontalLayout_9 = new QHBoxLayout(frame_3);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(11);
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_3);


        horizontalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        textEdit_3 = new QTextEdit(frame_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);

        horizontalLayout_6->addWidget(textEdit_3);


        horizontalLayout_9->addLayout(horizontalLayout_6);


        gridLayout->addWidget(frame_3, 2, 0, 1, 1);

        frame_2->raise();
        frame_3->raise();
        frame_4->raise();
        frame_5 = new QFrame(errRecord);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(110, 260, 561, 131));
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_5);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 33, 510, 34));
        horizontalLayout_23 = new QHBoxLayout(widget);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout->addWidget(label_17);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout->addWidget(label_18);


        horizontalLayout_23->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_2->addWidget(label_19);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout_23->addLayout(horizontalLayout_2);

        widget1 = new QWidget(frame_5);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 80, 511, 21));
        horizontalLayout_26 = new QHBoxLayout(widget1);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_26->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_26->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_26->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_26->addWidget(checkBox_4);

        label_17->raise();
        lineEdit->raise();
        label_18->raise();
        label_19->raise();
        comboBox->raise();
        pushButton->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox_4->raise();
        checkBox_2->raise();
        widget2 = new QWidget(errRecord);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(110, 40, 138, 22));
        horizontalLayout_22 = new QHBoxLayout(widget2);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_22->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer);

        widget3 = new QWidget(errRecord);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(110, 230, 138, 22));
        horizontalLayout_24 = new QHBoxLayout(widget3);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_24->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_2);

        widget4 = new QWidget(errRecord);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(210, 420, 451, 29));
        horizontalLayout_25 = new QHBoxLayout(widget4);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(widget4);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_25->addWidget(buttonBox);


        retranslateUi(errRecord);

        QMetaObject::connectSlotsByName(errRecord);
    } // setupUi

    void retranslateUi(QWidget *errRecord)
    {
        errRecord->setWindowTitle(QApplication::translate("errRecord", "Form", 0));
        label_15->setText(QApplication::translate("errRecord", "\351\202\256    \347\256\261\357\274\232", 0));
        label_16->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
        label_3->setText(QApplication::translate("errRecord", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
        label_5->setText(QApplication::translate("errRecord", "\345\276\256\344\277\241\345\217\267   \357\274\232", 0));
        label_6->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
        label_17->setText(QApplication::translate("errRecord", "\351\273\230\350\256\244\351\227\264\351\232\224\346\227\266\351\227\264\357\274\232", 0));
        lineEdit->setText(QApplication::translate("errRecord", "600", 0));
        label_18->setText(QApplication::translate("errRecord", "s    ", 0));
        label_19->setText(QApplication::translate("errRecord", "\351\223\203\345\243\260\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("errRecord", "\351\223\203\345\243\2601", 0)
         << QApplication::translate("errRecord", "\351\223\203\345\243\2602", 0)
         << QApplication::translate("errRecord", "\350\207\252\345\256\232\344\271\211", 0)
        );
        pushButton->setText(QApplication::translate("errRecord", "\350\257\225\345\220\254", 0));
        checkBox->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\344\274\201\344\270\232\345\276\256\344\277\241", 0));
        checkBox_2->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\351\202\256\344\273\266        ", 0));
        checkBox_3->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\347\237\255\344\277\241        ", 0));
        checkBox_4->setText(QApplication::translate("errRecord", "\346\222\255\346\224\276\346\212\245\350\255\246\351\237\263\344\271\220", 0));
        label->setText(QApplication::translate("errRecord", "\346\212\245\350\255\246\351\200\232\347\237\245\350\256\276\347\275\256", 0));
        label_2->setText(QApplication::translate("errRecord", "\346\212\245\350\255\246\351\273\230\350\256\244\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class errRecord: public Ui_errRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRRECORD_H
