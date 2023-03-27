#include "calculator.h"
#include "./ui_calculator.h"
// #include "qcustomplot.h"

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
    if (ui->line_value_x->text().isEmpty() && ui->Result_label->text().contains('x')) {
        QMessageBox::warning(this, "Не корректный ввод", "Введите значение x");
    } else {
        QString expression_buff = ui->Result_label->text();
        QString x_value = ui->line_value_x->text();
        QByteArray buff2 = expression_buff.toUtf8();

        double x = x_value.toDouble();
        double result = 0.0;
        char* expression = buff2.data();

        calculator(expression, &result, x);
        QString res = QString::number(result, 'f', 7);
        ui->Result_label->setText(res);
        // QByteArray buff3 = res.toUtf8();
        // std::cout << buff3.data() << "\n";
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
        ui->Result_label->setText(ui->Result_label->text() + ",");
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


void Calculator::on_Button_clear_graph_clicked()
{
    ui->Button_create_grapf->setDefault(true);
}


void Calculator::on_Button_create_grapf_clicked()
{
    double x_start = -ui->Ox->value();
    double x_finish = ui->Ox->value();
    double step = x_finish / 500;
    QVector<double>x(0), y(0); //массивы для x и y

    double res = 0.0;
    QString expression_buff = ui->Result_label->text();
    QByteArray buff = expression_buff.toUtf8();
    char* str = buff.data();


    for (double value_x = x_start; x_finish - value_x > 0.0; value_x += step) {
        if (calculator(str, &res, value_x) == OK) {
            x.push_back(value_x);
            y.push_back(res);
        } else {
            //ВЫДАТЬ СООБЩЕНИЕ ОБ ОШИБКЕ
        }
        //ПРОВЕРИТЬ УТЕЧКИ БУФЕРОВ
    }

    ui->widget->clearGraphs();//Если нужно, но очищаем все графики

    ui->widget->addGraph();   //Добавляем один график в widget

    ui->widget->graph(0)->setData(x, y);   //Говорим, что отрисовать нужно график по нашим двум массивам x и y

    //Подписываем оси Ox и Oy
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");

    //Установим область, которая будет показываться на графике
    ui->widget->xAxis->setRange(x_start, x_finish); //Для оси Ox

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах
    double minY = y[0], maxY = y[0];
    for (int i = 1; i < x.count(); i++) {
      if (y[i] < minY) minY = y[i];
      if (y[i] > maxY) maxY = y[i];
    }

    ui->widget->yAxis->setRange(minY, maxY);//Для оси Oy
    ui->widget->replot();//И перерисуем график на нашем widget
}


void Calculator::on_Button_pow_clicked()
{
    ui->Result_label->setText(ui->Result_label->text() + "^");
}

