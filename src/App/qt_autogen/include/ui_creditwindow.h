/********************************************************************************
** Form generated from reading UI file 'creditwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITWINDOW_H
#define UI_CREDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_creditwindow
{
public:
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *line_sum;
    QSpinBox *line_term;
    QDoubleSpinBox *line_interest_rate;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLineEdit *lineEdit_monthly_payment;
    QLabel *label_10;
    QLineEdit *lineEdit_overpayment;
    QLabel *label_11;
    QLineEdit *lineEdit_total_payment;
    QPushButton *Button_calculate;

    void setupUi(QDialog *creditwindow)
    {
        if (creditwindow->objectName().isEmpty())
            creditwindow->setObjectName(QString::fromUtf8("creditwindow"));
        creditwindow->resize(1110, 659);
        checkBox = new QCheckBox(creditwindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 10, 251, 20));
        groupBox = new QGroupBox(creditwindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 441, 161));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 20, 98, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 98, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 120, 98, 21));
        line_sum = new QDoubleSpinBox(groupBox);
        line_sum->setObjectName(QString::fromUtf8("line_sum"));
        line_sum->setGeometry(QRect(140, 10, 281, 41));
        line_sum->setMaximum(1000000000.000000000000000);
        line_sum->setSingleStep(10000.000000000000000);
        line_term = new QSpinBox(groupBox);
        line_term->setObjectName(QString::fromUtf8("line_term"));
        line_term->setGeometry(QRect(140, 60, 281, 41));
        line_term->setMinimum(1);
        line_term->setMaximum(600);
        line_interest_rate = new QDoubleSpinBox(groupBox);
        line_interest_rate->setObjectName(QString::fromUtf8("line_interest_rate"));
        line_interest_rate->setGeometry(QRect(140, 110, 281, 41));
        line_interest_rate->setMinimum(-100.000000000000000);
        line_interest_rate->setMaximum(100.000000000000000);
        groupBox_2 = new QGroupBox(creditwindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 40, 541, 161));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 141, 21));
        lineEdit_monthly_payment = new QLineEdit(groupBox_2);
        lineEdit_monthly_payment->setObjectName(QString::fromUtf8("lineEdit_monthly_payment"));
        lineEdit_monthly_payment->setGeometry(QRect(220, 18, 293, 31));
        lineEdit_monthly_payment->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 70, 141, 21));
        lineEdit_overpayment = new QLineEdit(groupBox_2);
        lineEdit_overpayment->setObjectName(QString::fromUtf8("lineEdit_overpayment"));
        lineEdit_overpayment->setGeometry(QRect(220, 67, 293, 31));
        lineEdit_overpayment->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 120, 101, 21));
        lineEdit_total_payment = new QLineEdit(groupBox_2);
        lineEdit_total_payment->setObjectName(QString::fromUtf8("lineEdit_total_payment"));
        lineEdit_total_payment->setGeometry(QRect(220, 115, 293, 31));
        lineEdit_total_payment->setAlignment(Qt::AlignCenter);
        Button_calculate = new QPushButton(creditwindow);
        Button_calculate->setObjectName(QString::fromUtf8("Button_calculate"));
        Button_calculate->setGeometry(QRect(450, 210, 111, 51));

        retranslateUi(creditwindow);

        QMetaObject::connectSlotsByName(creditwindow);
    } // setupUi

    void retranslateUi(QDialog *creditwindow)
    {
        creditwindow->setWindowTitle(QCoreApplication::translate("creditwindow", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("creditwindow", "\320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("creditwindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("creditwindow", "\320\241\321\200\320\276\320\272, \320\274\320\265\321\201", nullptr));
        label_8->setText(QCoreApplication::translate("creditwindow", "\320\241\321\202\320\260\320\262\320\272\320\260, %", nullptr));
        groupBox_2->setTitle(QString());
        label_9->setText(QCoreApplication::translate("creditwindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        lineEdit_monthly_payment->setText(QString());
        label_10->setText(QCoreApplication::translate("creditwindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_11->setText(QCoreApplication::translate("creditwindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        Button_calculate->setText(QCoreApplication::translate("creditwindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditwindow: public Ui_creditwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITWINDOW_H
