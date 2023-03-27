#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QVector>
#include <QLayout>
#include <iostream>
//#include "qcustomplot.h"

extern "C" {
    #include "../calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

    QString get_error(int err);

private:
    Ui::Calculator *ui;

private slots:
    void add_numbers_and_operators();
    void on_Button_0_clicked();
    void on_Button_tochka_clicked();
    void on_Button_AC_clicked();
    void on_Button_equal_clicked();
    void on_Button_x_clicked();
    void on_function_clicked();
    void on_Button_exit_clicked();
    void on_Button_mod_clicked();
    void on_Button_Open_Backet_clicked();
    void on_Button_clear_graph_clicked();
    void on_Button_create_grapf_clicked();
    void on_Button_pow_clicked();
};
#endif // CALCULATOR_H
