#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QMainWindow>

namespace Ui {
class Inscription_Window;
}

class Inscription : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = 0);
    ~Inscription();

private slots:
    void on_Inscription_2_clicked();
    
private:
    Ui::Inscription_Window *ui;
};

#endif // MAINWINDOW_H
