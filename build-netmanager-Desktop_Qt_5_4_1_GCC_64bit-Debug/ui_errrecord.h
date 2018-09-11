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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errRecord
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *errRecord)
    {
        if (errRecord->objectName().isEmpty())
            errRecord->setObjectName(QStringLiteral("errRecord"));
        errRecord->resize(784, 482);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errRecord->sizePolicy().hasHeightForWidth());
        errRecord->setSizePolicy(sizePolicy);
        widget = new QWidget(errRecord);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 50, 356, 271));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButton_2 = new QRadioButton(frame_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        QFont font;
        font.setPointSize(9);
        radioButton_2->setFont(font);

        gridLayout_2->addWidget(radioButton_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        textEdit_2 = new QTextEdit(frame_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_4->addWidget(textEdit_2);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 2);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 1);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        radioButton_3 = new QRadioButton(frame_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font);

        gridLayout_3->addWidget(radioButton_3, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        textEdit_3 = new QTextEdit(frame_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        horizontalLayout_6->addWidget(textEdit_3);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 2);


        gridLayout_4->addWidget(frame_3, 2, 0, 1, 1);

        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        radioButton->raise();
        label->raise();
        lineEdit->raise();
        label_2->raise();
        textEdit->raise();

        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(errRecord);

        QMetaObject::connectSlotsByName(errRecord);
    } // setupUi

    void retranslateUi(QWidget *errRecord)
    {
        errRecord->setWindowTitle(QApplication::translate("errRecord", "Form", 0));
        radioButton_2->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\347\237\255\344\277\241\357\274\232", 0));
        label_3->setText(QApplication::translate("errRecord", "\351\202\256\347\256\261\357\274\232", 0));
        label_4->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
        radioButton_3->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\344\274\201\344\270\232\345\276\256\344\277\241", 0));
        label_5->setText(QApplication::translate("errRecord", "\351\202\256\347\256\261\357\274\232", 0));
        label_6->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
        radioButton->setText(QApplication::translate("errRecord", "\345\217\221\351\200\201\351\202\256\344\273\266", 0));
        label->setText(QApplication::translate("errRecord", "\351\202\256\347\256\261\357\274\232", 0));
        label_2->setText(QApplication::translate("errRecord", "\345\206\205\345\256\271\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class errRecord: public Ui_errRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRRECORD_H
