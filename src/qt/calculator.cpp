#include "calculator.h"
#include "./ui_calculator.h"
#include <iostream>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));

    connect(ui->Button_Clozed_Backet, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
//    connect(ui->Button_Open_Backet, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_plus, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_minus, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_mul, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_div, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));

    connect(ui->Button_sin, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_cos, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_tan, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_asin, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_acos, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_atan, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_ln, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_log, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
//    connect(ui->Button_mod, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
    connect(ui->Button_sqrt, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_function_clicked()
{

    QToolButton* button = (QToolButton*)sender();
    QString buff;

    buff = ui->Result_label->text();
    if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
         ui->Result_label->setText(button->text() + "(");
    } else {
        if (buff[buff.length()-1].isDigit() || buff[buff.length()-1] == ')' || buff[buff.length()-1] == 'x') {
            ui->Result_label->setText(buff + "*" + button->text() + "(");
        } else {
            ui->Result_label->setText(buff + button->text() + "(");
        }
    }
}

void Calculator::add_numbers_and_operators()
{
    QToolButton* button = (QToolButton*)sender();
    QString buff;
    buff = ui->Result_label->text();
    if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
         ui->Result_label->setText(button->text());
    } else {
         ui->Result_label->setText(ui->Result_label->text() + button->text());
    }
}

void Calculator::on_Button_equal_clicked()
{
    QString expression_buff = ui->Result_label->text();
    if (ui->line_value_x->text().isEmpty() && ui->Result_label->text().contains('x')) {
        QMessageBox::warning(this, "Не корректный ввод", "Введите значение x");

    } else {

        QString x_value = ui->line_value_x->text();
    //    QByteArray buff1 = x_value.toUtf8();
        QByteArray buff2 = expression_buff.toUtf8();
        double xx = x_value.toDouble();
        double result = 0.0;
    //    char* x = toDouble(buff1.data());
        char* expression = buff2.data();
        calculator(expression, &result, xx);
        QString res = QString::number(result);
        ui->Result_label->setText(res);
        std::cout << result << "\n";
    }
}



void Calculator::on_Button_0_clicked()
{
    QString buff;
    buff = ui->Result_label->text();
    if (buff[ui->Result_label->text().length()-1] != '0' || buff.length() != 1)
        ui->Result_label->setText(ui->Result_label->text() + "0");
}

void Calculator::on_Button_tochka_clicked()
{
//    if (!ui->Result_label->text().contains('.'))
        ui->Result_label->setText(ui->Result_label->text() + ".");
}

void Calculator::on_Button_AC_clicked()
{
    ui->Result_label->setText("0");
    ui->line_value_x->setText("");
}

void Calculator::on_Button_x_clicked()
{
    QString buff;
    buff = ui->Result_label->text();
    if (!ui->Result_label->text().contains('x')) {
        if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
             ui->Result_label->setText("x");
        } else {
             if (buff[buff.length()-1].isDigit()) {
                ui->Result_label->setText(ui->Result_label->text() + "*x");
             } else {
                ui->Result_label->setText(ui->Result_label->text() + "x");
             }
        }
    }
}


void Calculator::on_Button_exit_clicked()
{
    close();
}


//void Calculator::on_Button_sin_clicked()
//{
//    QString buff = ui->Result_label->text();
//    if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
//         ui->Result_label->setText("sin(");
//    } else {
//        if (buff[buff.length()-1].isDigit()) {
//            ui->Result_label->setText(buff + "*sin(");
//        } else {
//            ui->Result_label->setText(buff + "sin(");
//        }
//    }
//}


void Calculator::on_Button_mod_clicked()
{
    QString buff = ui->Result_label->text();
    if (buff[buff.length()-1].isDigit()) {
        ui->Result_label->setText(ui->Result_label->text() + "mod");
    } else {
        QMessageBox::warning(this, "Не корректный ввод", "Введите делимое для функции mod.");
    }
}


void Calculator::on_Button_Open_Backet_clicked()
{
    QString buff = ui->Result_label->text();
    if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
        ui->Result_label->setText("(");
    } else {
        if (buff[buff.length()-1].isDigit() || buff[buff.length()-1] == 'x') {
            ui->Result_label->setText(ui->Result_label->text() + "*(");
        } else {
            ui->Result_label->setText(ui->Result_label->text() + "(");
        }
    }
}

