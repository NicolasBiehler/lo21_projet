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
    operateur.cpp \
    pile.cpp \
    datagestion.cpp \
    calculexception.cpp \
    factory.cpp \
    onglet.cpp \
    collection_onglet.cpp

HEADERS  += mainwindow.h \
    data.h \
    operateur.h \
    pile.h \
    datagestion.h \
    calculexception.h \
    factory.h \
    onglet.h \
    collection_onglet.h

FORMS    += mainwindow.ui
