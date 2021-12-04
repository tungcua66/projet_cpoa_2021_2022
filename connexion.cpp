#include <iostream>
#include "connexion.h"
#include "ui_connexion.h"
using namespace std;


Connexion::Connexion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
     QObject::connect(ui->Connexion_3,SIGNAL(click()),this, SLOT(on_Connexion_3_clicked()));
}

Connexion::~Connexion()
{
    delete ui;
}

void Connexion::on_Connexion_3_clicked()
{
    cout << "Connexion";
}
