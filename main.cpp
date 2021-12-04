#include "inscription.h"
#include "fenetre_connexion.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inscription inscription;
    Connexion connexion;
    MainWindow appli;

    appli.show();

    return a.exec();
}

