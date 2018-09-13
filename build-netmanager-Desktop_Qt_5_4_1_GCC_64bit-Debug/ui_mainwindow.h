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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
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
    QAction *action;
    QAction *action_3;
    QAction *action_5;
    QAction *action_6;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QToolBox *toolBox;
    QWidget *widget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *page;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QMenu *menu1;
    QMenu *menu2;
    QMenu *menu3;
    QMenu *menu4;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1086, 588);
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
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
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
        widget->setMinimumSize(QSize(140, 0));
        widget->setSizeIncrement(QSize(150, 0));
        widget->setBaseSize(QSize(120, 0));
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 20, 121, 441));
        QFont font1;
        font1.setPointSize(10);
        toolBox->setFont(font1);
        toolBox->setFocusPolicy(Qt::NoFocus);
        toolBox->setAutoFillBackground(false);
        toolBox->setFrameShape(QFrame::NoFrame);
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 121, 348));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 81, 27));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 40, 81, 27));
        QFont font2;
        font2.setPointSize(9);
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 80, 81, 27));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 120, 81, 27));
        toolBox->addItem(widget_2, QString::fromUtf8("\347\275\221\347\253\231\347\256\241\347\220\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 121, 348));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 20, 111, 27));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 60, 111, 27));
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 140, 111, 27));
        pushButton_10 = new QPushButton(page_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 100, 111, 27));
        toolBox->addItem(page_2, QString::fromUtf8("\350\256\276\347\275\256"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 121, 348));
        pushButton_12 = new QPushButton(page);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 130, 81, 27));
        pushButton_13 = new QPushButton(page);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 30, 81, 27));
        pushButton_14 = new QPushButton(page);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 80, 81, 27));
        toolBox->addItem(page, QString::fromUtf8("\346\212\245\350\241\250"));

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::Panel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setLineWidth(2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 918, 466));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1086, 28));
        menu1 = new QMenu(menuBar);
        menu1->setObjectName(QStringLiteral("menu1"));
        menu2 = new QMenu(menuBar);
        menu2->setObjectName(QStringLiteral("menu2"));
        menu3 = new QMenu(menuBar);
        menu3->setObjectName(QStringLiteral("menu3"));
        menu4 = new QMenu(menuBar);
        menu4->setObjectName(QStringLiteral("menu4"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
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
        menu->addSeparator();
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu_2->addAction(action);
        menu_2->addAction(action_3);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\253\231", 0));
        actionGroup->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\253\231\345\210\206\347\261\273", 0));
        actionList->setText(QApplication::translate("MainWindow", "\347\275\221\347\253\231\345\210\227\350\241\250", 0));
        action2Error->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234\350\256\260\345\275\225", 0));
        actionSound->setText(QApplication::translate("MainWindow", "\346\212\245\350\255\246\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        actionMsg->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        actionWechar->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\276\256\344\277\241\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        actionMeil->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        actionMeil_2->setText(QApplication::translate("MainWindow", "\351\202\256\344\273\266\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        actionMsg_2->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241\345\217\221\351\200\201\350\256\260\345\275\225", 0));
        actionGroup_2->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\276\256\344\277\241\350\256\260\345\275\225", 0));
        action4->setText(QApplication::translate("MainWindow", "4", 0));
        action_2->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        action->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\347\233\221\346\216\247", 0));
        action_3->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\346\216\247", 0));
        action_5->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\225\260\346\215\256", 0));
        action_6->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\346\225\260\346\215\256", 0));
        label->setText(QApplication::translate("MainWindow", "\347\275\221\347\253\231\345\210\227\350\241\250", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\273\234", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\275\221\347\273\234\345\210\206\347\261\273", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\275\221\347\253\231\345\210\227\350\241\250", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234\350\256\260\345\275\225", 0));
        toolBox->setItemText(toolBox->indexOf(widget_2), QApplication::translate("MainWindow", "\347\275\221\347\253\231\347\256\241\347\220\206", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "\346\212\245\350\255\246\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\276\256\344\277\241\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "\351\202\256\344\273\266\345\217\221\351\200\201\346\212\245\350\241\250", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241\345\217\221\351\200\201\346\212\245\350\241\250", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\276\256\344\277\241\346\212\245\350\241\250", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\346\212\245\350\241\250", 0));
        menu1->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\253\231\347\256\241\347\220\206", 0));
        menu2->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        menu3->setTitle(QApplication::translate("MainWindow", "\346\212\245\350\241\250", 0));
        menu4->setTitle(QApplication::translate("MainWindow", "\351\207\215\347\275\256", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\250\213\345\272\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
