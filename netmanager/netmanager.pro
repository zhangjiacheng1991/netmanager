#-------------------------------------------------
#
# Project created by QtCreator 2018-09-10T15:53:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = netmanager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    netlist.cpp \
    netadd.cpp \
    setconfig.cpp \
    report.cpp \
    netmanager.cpp \
    addnetgroup.cpp \
    errrecord.cpp \
    emailreport.cpp

HEADERS  += mainwindow.h \
    netlist.h \
    netadd.h \
    setconfig.h \
    report.h \
    netmanager.h \
    addnetgroup.h \
    errrecord.h \
    emailreport.h

FORMS    += mainwindow.ui \
    netlist.ui \
    netadd.ui \
    setconfig.ui \
    report.ui \
    netmanager.ui \
    addnetgroup.ui \
    errrecord.ui \
    emailreport.ui
