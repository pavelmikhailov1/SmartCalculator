#include "creditwindow.h"
#include "calculator.h"
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

void creditwindow::on_Button_calculate_clicked()
{
    if (ui->line_sum->value() == 0.) {
        QMessageBox::warning(this, "Пустые поля ввода", "Для рассчета ежемесячного платежа заполните все поля");
    } else {
        Credit credit;
        credit.sum = ui->line_sum->value();
        credit.term = ui->line_term->value();
        credit.interest_rate = ui->line_interest_rate->value();
        credit.type = ui->checkBox->checkState();

        credit_calc(&credit);

        if (credit.type != 0) {
            ui->lineEdit_monthly_payment->setText(QString::number(credit.monthly_payment) + " ... " + QString::number(credit.last_monthly_payment));
        } else {
            ui->lineEdit_monthly_payment->setText(QString::number(credit.monthly_payment));
        }

        ui->lineEdit_overpayment->setText(QString::number(credit.overpayment));
        ui->lineEdit_total_payment->setText(QString::number(credit.total_payment));
        std::cout << credit.overpayment << '\n';
        std::cout << credit.total_payment << '\n';
        std::cout << credit.monthly_payment << '\n';
   }
}

