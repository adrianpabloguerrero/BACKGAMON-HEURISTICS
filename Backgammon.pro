#-------------------------------------------------
#
# Project created by QtCreator 2015-10-08T23:30:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Backgammon
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    escena.cpp \
    ficha.cpp \
    juego.cpp \
    vertice.cpp \
    Dado.cpp \
    noroll.cpp \
    punto.cpp \
    jugada.cpp \
    algoritmos.cpp \
    dialog.cpp \
    dialog2.cpp

HEADERS  += mainwindow.h \
    escena.h \
    ficha.h \
    Grafo.h \
    juego.h \
    vertice.h \
    Dado.h \
    noroll.h \
    punto.h \
    jugada.h \
    algoritmos.h \
    dialog.h \
    dialog2.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialog2.ui

RESOURCES += \
    imagenes.qrc
