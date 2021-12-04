#include "inscriptionwindow.h"
#include "ui_inscriptionwindow.h"

inscriptionWindow::inscriptionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inscriptionWindow)
{
    ui->setupUi(this);
}

inscriptionWindow::~inscriptionWindow()
{
    delete ui;
}
