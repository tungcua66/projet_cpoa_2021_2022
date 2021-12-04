#ifndef INSCRIPTIONWINDOW_H
#define INSCRIPTIONWINDOW_H

#include <QDialog>

namespace Ui {
class inscriptionWindow;
}

class inscriptionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit inscriptionWindow(QWidget *parent = nullptr);
    ~inscriptionWindow();

private:
    Ui::inscriptionWindow *ui;
};

#endif // INSCRIPTIONWINDOW_H
