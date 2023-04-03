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
        if (credit.interest_rate == 0.) {
            ui->lineEdit_monthly_payment->setText("0.00");
            ui->lineEdit_overpayment->setText("0.00");
            ui->lineEdit_total_payment->setText("0.00");
        } else {

            credit_calc(&credit);

            if (credit.type != 0) {
                ui->lineEdit_monthly_payment->setText(QString::number(credit.monthly_payment, 'f', 2) + " ... " + QString::number(credit.last_monthly_payment, 'f', 2));
            } else {
                ui->lineEdit_monthly_payment->setText(QString::number(credit.monthly_payment, 'f', 2));
            }

            ui->lineEdit_overpayment->setText(QString::number(credit.overpayment, 'f', 2));
            ui->lineEdit_total_payment->setText(QString::number(credit.total_payment, 'f', 2));
        }
   }
}

