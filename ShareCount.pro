#-------------------------------------------------
#
# Project created by QtCreator 2020-11-06T09:26:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = goodBasket
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    connexion.cpp \
    creationutilisateur.cpp \
    donneesconnexion.cpp \
    donneesinscription.cpp \
    inscription.cpp \
        main.cpp \
    rechercheutilisateur.cpp \
    mainwindow.cpp \
    utilisateur.cpp \
    verificationdonnees.cpp

HEADERS += \
    connexion.h \
    creationutilisateur.h \
    donneesconnexion.h \
    donneesinscription.h \
    inscription.h \
    mainwindow.h \
    rechercheutilisateur.h \
    utilisateur.h \
    verificationdonnees.h

FORMS += \
    connexion.ui \
    inscription.ui \
    mainwindow.ui
