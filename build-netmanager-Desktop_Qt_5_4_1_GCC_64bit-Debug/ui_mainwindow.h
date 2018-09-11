/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionGroup;
    QAction *actionList;
    QAction *action2Error;
    QAction *actionSound;
    QAction *actionMsg;
    QAction *actionWechar;
    QAction *actionMeil;
    QAction *actionMeil_2;
    QAction *actionMsg_2;
    QAction *actionGroup_2;
    QAction *action4;
    QAction *action_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *BTN_netmanager;
    QPushButton *BTN_set;
    QPushButton *BTN_list;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *menu1;
    QMenu *menu2;
    QMenu *menu3;
    QMenu *menu4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(974, 596);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionGroup = new QAction(MainWindow);
        actionGroup->setObjectName(QStringLiteral("actionGroup"));
        actionList = new QAction(MainWindow);
        actionList->setObjectName(QStringLiteral("actionList"));
        action2Error = new QAction(MainWindow);
        action2Error->setObjectName(QStringLiteral("action2Error"));
        actionSound = new QAction(MainWindow);
        actionSound->setObjectName(QStringLiteral("actionSound"));
        actionMsg = new QAction(MainWindow);
        actionMsg->setObjectName(QStringLiteral("actionMsg"));
        actionWechar = new QAction(MainWindow);
        actionWechar->setObjectName(QStringLiteral("actionWechar"));
        actionMeil = new QAction(MainWindow);
        actionMeil->setObjectName(QStringLiteral("actionMeil"));
        actionMeil_2 = new QAction(MainWindow);
        actionMeil_2->setObjectName(QStringLiteral("actionMeil_2"));
        actionMsg_2 = new QAction(MainWindow);
        actionMsg_2->setObjectName(QStringLiteral("actionMsg_2"));
        actionGroup_2 = new QAction(MainWindow);
        actionGroup_2->setObjectName(QStringLiteral("actionGroup_2"));
        action4 = new QAction(MainWindow);
        action4->setObjectName(QStringLiteral("action4"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(478, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("AR PL UKai CN"));
        font.setPointSize(19);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(360, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(120, 0));
        widget->setSizeIncrement(QSize(120, 0));
        widget->setBaseSize(QSize(120, 0));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(9, 9, 87, 104));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BTN_netmanager = new QPushButton(widget1);
        BTN_netmanager->setObjectName(QStringLiteral("BTN_netmanager"));

        verticalLayout->addWidget(BTN_netmanager);

        BTN_set = new QPushButton(widget1);
        BTN_set->setObjectName(QStringLiteral("BTN_set"));

        verticalLayout->addWidget(BTN_set);

        BTN_list = new QPushButton(widget1);
        BTN_list->setObjectName(QStringLiteral("BTN_list"));

        verticalLayout->addWidget(BTN_list);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(50, 0));
        frame->setSizeIncrement(QSize(50, 0));
        frame->setBaseSize(QSize(50, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);

        gridLayout->addWidget(frame, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 28));
        menu1 = new QMenu(menuBar);
        menu1->setObjectName(QStringLiteral("menu1"));
        menu2 = new QMenu(menuBar);
        menu2->setObjectName(QStringLiteral("menu2"));
        menu3 = new QMenu(menuBar);
        menu3->setObjectName(QStringLiteral("menu3"));
        menu4 = new QMenu(menuBar);
        menu4->setObjectName(QStringLiteral("menu4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu1->menuAction());
        menuBar->addAction(menu2->menuAction());
        menuBar->addAction(menu3->menuAction());
        menuBar->addAction(menu4->menuAction());
        menu1->addAction(actionAdd);
        menu1->addAction(actionGroup);
        menu1->addSeparator();
        menu1->addAction(actionList);
        menu1->addSeparator();
        menu1->addAction(action2Error);
        menu2->addAction(action_2);
        menu2->addSeparator();
        menu2->addAction(actionSound);
        menu2->addAction(actionMsg);
        menu2->addAction(actionWechar);
        menu2->addAction(actionMeil);
        menu3->addAction(actionMeil_2);
        menu3->addAction(actionMsg_2);
        menu3->addAction(actionGroup_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\253\231", 0));
        actionGroup->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\253\231\345\210\206\347\261\273", 0));
        actionList->setText(QApplication::translate("MainWindow", "\347\275\221\347\253\231\345\210\227\350\241\250", 0));
        action2Error->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234\350\256\260\345\275\225", 0));
        actionSound->setText(QApplication::translate("MainWindow", "\346\212\245\350\255\246\345\243\260\351\237\263", 0));
        actionMsg->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241", 0));
        actionWechar->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\276\256\344\277\241", 0));
        actionMeil->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261", 0));
        actionMeil_2->setText(QApplication::translate("MainWindow", "\351\202\256\344\273\266\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        actionMsg_2->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        actionGroup_2->setText(QApplication::translate("MainWindow", "\347\276\244\346\266\210\346\201\257\350\256\260\345\275\225", 0));
        action4->setText(QApplication::translate("MainWindow", "4", 0));
        action_2->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\345\210\227\350\241\250", 0));
        BTN_netmanager->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\347\256\241\347\220\206", 0));
        BTN_set->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        BTN_list->setText(QApplication::translate("MainWindow", "\346\212\245\350\241\250", 0));
        menu1->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\347\256\241\347\220\206", 0));
        menu2->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        menu3->setTitle(QApplication::translate("MainWindow", "\346\212\245\350\241\250", 0));
        menu4->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
