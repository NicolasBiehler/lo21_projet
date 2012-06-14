#-------------------------------------------------
#
# Project created by QtCreator 2012-05-31T16:53:11
#
#-------------------------------------------------

QT       += core gui
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetCalculatrice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    data.cpp \
    datagestion.cpp \
    calculexception.cpp \
    factory.cpp \
    pile.cpp \
    operateur.cpp \
    onglet.cpp \
    collection_onglet.cpp

HEADERS  += mainwindow.h \
    data.h \
    datagestion.h \
    calculexception.h \
    factory.h \
    pile.h \
    operateur.h \
    onglet.h \
    collection_onglet.h

FORMS    += mainwindow.ui
