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
    connect(ui->Button_Open_Backet, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_plus, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_minus, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_mul, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
    connect(ui->Button_div, SIGNAL(clicked()), this, SLOT(add_numbers_and_operators()));
}

Calculator::~Calculator()
{
    delete ui;
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

int Calculator::on_Button_equal_clicked()
{
    if (ui->line_value_x->text().isEmpty()) {
        if (ui->Result_label->text().contains('x')) {
            QMessageBox::warning(this, "Заголовок", "Введите значение x");
            return 1;
        }
    }

    QString x_value = ui->line_value_x->text();
    QString expression_buff = ui->Result_label->text();
//    QByteArray buff1 = x_value.toUtf8();
    QByteArray buff2 = expression_buff.toUtf8();
    double xx = x_value.toDouble();
    double result = 0.0;
//    char* x = toDouble(buff1.data());
    char* expression = buff2.data();
    calculator(expression, &result, xx);
    return 0;
}


void Calculator::on_pushButton_clicked()
{
    close();
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
    if (!ui->Result_label->text().contains('.'))
        ui->Result_label->setText(ui->Result_label->text() + ".");
}




//void Calculator::on_textEdit_objectNameChanged(const QString &objectName)
//{
//    ui->Result_label->setText(ui->Result_label->text() + objectName);
//}



void Calculator::on_Button_AC_clicked()
{
    ui->Result_label->setText("0");
}


void Calculator::on_Button_x_clicked()
{
    if (!ui->Result_label->text().contains('x')) {
        ui->Result_label->setText(ui->Result_label->text() + "x");
    }
}

