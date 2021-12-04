#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"inscription.h"
#include "connexion.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);  
    QObject::connect(ui->Connexion_Button,SIGNAL(click()),this, SLOT(on_Connexion_Button_clicked()));
    QObject::connect(ui->Connexion_Button,SIGNAL(clicked()),this, SLOT(close()));
    QObject::connect(ui->Inscription_Button,SIGNAL(click()),this, SLOT(on_Inscription_Button_clicked()));
    QObject::connect(ui->Inscription_Button,SIGNAL(clicked()),this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connexion_Button_clicked()
{
    Connexion *c= new Connexion;
    c->show();
}

void MainWindow::on_Inscription_Button_clicked()
{
    Inscription *i=new Inscription;
    i->show();
}
