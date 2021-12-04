#include <iostream>
#include "inscription.h"
#include "ui_inscription.h"
using namespace std;


Inscription::Inscription(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inscription_Window)
{
    ui->setupUi(this);
    QObject::connect(ui->Inscription_2,SIGNAL(click()),this, SLOT(on_Inscription_2_clicked()));
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::on_Inscription_2_clicked()
{
    cout << "inscription";
}
