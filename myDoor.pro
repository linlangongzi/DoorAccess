#-------------------------------------------------
#
# Project created by QtCreator 2013-05-08T16:33:57
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += widgets
TARGET = myDoor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    win_qextserialport.cpp \
    qextserialbase.cpp \
    adlogin.cpp \
    administrator.cpp \
    newcard.cpp \
    changecard.cpp

HEADERS  += mainwindow.h \
    win_qextserialport.h \
    qextserialbase.h \
    adlogin.h \
    dbconnection.h \
    administrator.h \
    newcard.h \
    changecard.h

FORMS    += mainwindow.ui \
    adlogin.ui \
    administrator.ui \
    newcard.ui \
    changecard.ui

RESOURCES += \
    image.qrc
