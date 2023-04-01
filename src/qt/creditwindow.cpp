#include "creditwindow.h"
#include "ui_creditwindow.h"

creditwindow::creditwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditwindow)
{
    ui->setupUi(this);
}

creditwindow::~creditwindow()
{
    delete ui;
}
