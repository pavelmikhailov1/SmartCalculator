#include "calculator.h"
#include "./ui_calculator.h"

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
    connect(ui->Button_sqrt, SIGNAL(clicked()), this, SLOT(on_function_clicked()));
}

Calculator::~Calculator()
{
    delete ui;
}

QString Calculator::get_error(int err)
{
    if (err == 1) {
        return "Не корректное выражение";
    } else {
        return "Ошибка калькуляции";
    }
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
    QString buff;
    buff = ui->Result_label->text();
    if ((ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') &&
            ui->Input_expression->text().isEmpty()) {
        QMessageBox::warning(this, "Оба поля ввода пустые", "Поля для выражения пустые! Введите выражение");
        return;
    } else if (ui->Result_label->text().length() > 1 && !ui->Input_expression->text().isEmpty()) {
        QMessageBox::warning(this, "Оба поля ввода не пустые", "Вы не можете вводить выражение в оба поля ввода! Оставте выражение в одном из полей");
        return;
    }

    if (ui->line_value_x->text().isEmpty() && (ui->Result_label->text().contains('x') ||
                                               ui->Input_expression->text().contains('x'))) {
        QMessageBox::warning(this, "Не корректный ввод", "Введите значение x");
    } else {
        QString expression_buff;
        if (ui->Input_expression->text().isEmpty()) {
            expression_buff = ui->Result_label->text();
        } else {
            expression_buff = ui->Input_expression->text();
        }

        QString x_value = ui->line_value_x->text();
        QByteArray buff2 = expression_buff.toUtf8();

        double x = x_value.toDouble();
        double result = 0.0;
        char* expression = buff2.data();
        int err = 0;

        err = calculator(expression, &result, x);
        if (err == 0) {
            QString res = QString::number(result, 'f', 7);
            ui->Result_label->setText(res);
        } else {
            ui->Result_label->setText(get_error(err));
        }
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
//    if (!ui->Result_label->text().contains('x')) {
        if (ui->Result_label->text().length() == 1 && buff[ui->Result_label->text().length()-1] == '0') {
             ui->Result_label->setText("x");
        } else {
             if (buff[buff.length()-1].isDigit()) {
                ui->Result_label->setText(ui->Result_label->text() + "*x");
             } else {
                ui->Result_label->setText(ui->Result_label->text() + "x");
             }
        }
//    }
}

void Calculator::on_Button_exit_clicked()
{
    close();
}

void Calculator::on_Button_mod_clicked()
{
    QString buff = ui->Result_label->text();
    if (buff[buff.length()-1].isDigit() || buff[buff.length()-1] == 'x' || buff[buff.length()-1] == ')') {
        ui->Result_label->setText(ui->Result_label->text() + "mod");
    } else {
        QMessageBox::warning(this, "Не корректный ввод", "Введите делимое для функции mod");
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

void Calculator::on_Button_clear_graph_clicked()
{
    ui->widget->clearGraphs();
    ui->widget->replot();
}

void Calculator::on_Button_create_grapf_clicked()
{
    if (!ui->Result_label->text().contains('x') && !ui->Input_expression->text().contains('x')) {     
        QMessageBox::warning(this, "Не корректный ввод", "Для отрисовки графика введите x в строку с выражением");  
    } else {     
        QString tmp = ui->Result_label->text();
        if (tmp.length() > 1 && !ui->Input_expression->text().isEmpty()) {
            QMessageBox::warning(this, "Оба поля ввода не пустые", "Для отрисовки графика оставьте выражение только в одном поле ввода");
        } else {

            int y_size = ui->Oy->value();
            double x_start = -ui->Ox->value();
            double x_finish = ui->Ox->value();
            double step = x_finish / 500;
            QVector<double>x(0), y(0); //массивы для x и y
            QString expression_buff;

            if (ui->Input_expression->text().isEmpty()) {
                expression_buff = ui->Result_label->text();
            } else {
                expression_buff = ui->Input_expression->text();
            }

            double res = 0.0;
            QByteArray buff = expression_buff.toUtf8();
            char* str = buff.data();

            for (double value_x = x_start; x_finish - value_x > 0.0; value_x += step) {
                calculator(str, &res, value_x);
                x.push_back(value_x);
                y.push_back(res);
            }

            ui->widget->clearGraphs();//Очищаем все графики

            ui->widget->addGraph();   //Добавляем один график в widget

            ui->widget->graph(0)->setData(x, y);   //Говорим, что отрисовать нужно график по нашим двум массивам x и y

            //Подписываем оси Ox и Oy
            ui->widget->xAxis->setLabel("x");
            ui->widget->yAxis->setLabel("y");

            //Установим область, которая будет показываться на графике
            ui->widget->xAxis->setRange(x_start, x_finish); //Для оси Ox
            ui->widget->yAxis->setRange(-y_size, y_size);//Для оси Oy

            ui->widget->replot();//И перерисуем график на нашем widget
        }
    }
}


void Calculator::on_Button_pow_clicked()
{
    ui->Result_label->setText(ui->Result_label->text() + "^");
}

void Calculator::on_Button_clear_clicked()
{
    ui->Input_expression->setText("");
}

void Calculator::on_Button_backspase_clicked()
{
    QString str = ui->Result_label->text();
    str.chop(1);
    ui->Result_label->setText(str);
}

