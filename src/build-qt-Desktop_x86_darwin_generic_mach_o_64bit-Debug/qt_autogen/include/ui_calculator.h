/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *Result_label;
    QToolButton *Button_7;
    QToolButton *Button_8;
    QToolButton *Button_div;
    QToolButton *Button_9;
    QToolButton *Button_mul;
    QToolButton *Button_5;
    QToolButton *Button_4;
    QToolButton *Button_6;
    QToolButton *Button_plus;
    QToolButton *Button_2;
    QToolButton *Button_3;
    QToolButton *Button_1;
    QToolButton *Button_equal;
    QToolButton *Button_tochka;
    QToolButton *Button_0;
    QToolButton *Button_minus;
    QToolButton *Button_Open_Backet;
    QToolButton *Button_AC;
    QToolButton *Button_Clozed_Backet;
    QPushButton *Button_exit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_value_x;
    QToolButton *Button_mod;
    QToolButton *Button_atan;
    QToolButton *Button_asin;
    QToolButton *Button_x;
    QToolButton *Button_sqrt;
    QToolButton *Button_sin;
    QToolButton *Button_cos;
    QToolButton *Button_ln;
    QToolButton *Button_tan;
    QToolButton *Button_log;
    QToolButton *Button_acos;
    QCustomPlot *widget;
    QPushButton *Button_create_grapf;
    QPushButton *Button_clear_graph;
    QSpinBox *Ox;
    QSpinBox *Oy;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QToolButton *Button_pow;
    QLabel *label_5;
    QLineEdit *Input_expression;
    QPushButton *Button_clear;
    QPushButton *Button_backspase;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(1322, 603);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Result_label = new QLabel(centralwidget);
        Result_label->setObjectName(QString::fromUtf8("Result_label"));
        Result_label->setGeometry(QRect(30, 120, 517, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        Result_label->setFont(font);
        Result_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(31, 30, 31);\n"
"	border-style: solid;\n"
"	border-color: gray;\n"
"	border: 1px solid gray;\n"
"}\n"
""));
        Result_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button_7 = new QToolButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(290, 283, 65, 65));
        Button_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_8 = new QToolButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(354, 283, 65, 65));
        Button_8->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_div = new QToolButton(centralwidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        Button_div->setGeometry(QRect(482, 219, 65, 65));
        Button_div->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_9 = new QToolButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(418, 283, 65, 65));
        Button_9->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_mul = new QToolButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setGeometry(QRect(482, 283, 65, 65));
        Button_mul->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;\n"
"\n"
""));
        Button_5 = new QToolButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(354, 347, 65, 65));
        Button_5->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_4 = new QToolButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(290, 347, 65, 65));
        Button_4->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_6 = new QToolButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(418, 347, 65, 65));
        Button_6->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_plus = new QToolButton(centralwidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        Button_plus->setGeometry(QRect(482, 411, 65, 65));
        Button_plus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_2 = new QToolButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(354, 411, 65, 65));
        Button_2->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_3 = new QToolButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(418, 411, 65, 65));
        Button_3->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_1 = new QToolButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(290, 411, 65, 65));
        Button_1->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_equal = new QToolButton(centralwidget);
        Button_equal->setObjectName(QString::fromUtf8("Button_equal"));
        Button_equal->setEnabled(true);
        Button_equal->setGeometry(QRect(483, 475, 65, 65));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(false);
        Button_equal->setFont(font1);
        Button_equal->setMouseTracking(false);
        Button_equal->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"	border:	1px solid black;\n"
"	border-color: yellow;\n"
"}\n"
""));
        Button_tochka = new QToolButton(centralwidget);
        Button_tochka->setObjectName(QString::fromUtf8("Button_tochka"));
        Button_tochka->setGeometry(QRect(418, 475, 65, 65));
        Button_tochka->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_0 = new QToolButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(290, 475, 129, 65));
        Button_0->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_minus = new QToolButton(centralwidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));
        Button_minus->setGeometry(QRect(482, 347, 65, 65));
        Button_minus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_Open_Backet = new QToolButton(centralwidget);
        Button_Open_Backet->setObjectName(QString::fromUtf8("Button_Open_Backet"));
        Button_Open_Backet->setGeometry(QRect(354, 219, 65, 65));
        Button_Open_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;\n"
""));
        Button_AC = new QToolButton(centralwidget);
        Button_AC->setObjectName(QString::fromUtf8("Button_AC"));
        Button_AC->setGeometry(QRect(290, 219, 65, 65));
        Button_AC->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"	border:	1px solid black;\n"
"	border-color: yellow;\n"
"}"));
        Button_Clozed_Backet = new QToolButton(centralwidget);
        Button_Clozed_Backet->setObjectName(QString::fromUtf8("Button_Clozed_Backet"));
        Button_Clozed_Backet->setGeometry(QRect(418, 219, 65, 65));
        Button_Clozed_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_exit = new QPushButton(centralwidget);
        Button_exit->setObjectName(QString::fromUtf8("Button_exit"));
        Button_exit->setGeometry(QRect(1180, 65, 111, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 485, 241, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        line_value_x = new QLineEdit(layoutWidget);
        line_value_x->setObjectName(QString::fromUtf8("line_value_x"));

        horizontalLayout->addWidget(line_value_x);

        Button_mod = new QToolButton(centralwidget);
        Button_mod->setObjectName(QString::fromUtf8("Button_mod"));
        Button_mod->setGeometry(QRect(30, 411, 80, 65));
        Button_mod->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_atan = new QToolButton(centralwidget);
        Button_atan->setObjectName(QString::fromUtf8("Button_atan"));
        Button_atan->setGeometry(QRect(188, 283, 80, 65));
        Button_atan->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_asin = new QToolButton(centralwidget);
        Button_asin->setObjectName(QString::fromUtf8("Button_asin"));
        Button_asin->setGeometry(QRect(30, 283, 80, 65));
        Button_asin->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_x = new QToolButton(centralwidget);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        Button_x->setGeometry(QRect(188, 411, 80, 65));
        Button_x->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_sqrt = new QToolButton(centralwidget);
        Button_sqrt->setObjectName(QString::fromUtf8("Button_sqrt"));
        Button_sqrt->setGeometry(QRect(188, 347, 80, 65));
        Button_sqrt->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_sin = new QToolButton(centralwidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        Button_sin->setGeometry(QRect(30, 219, 80, 65));
        Button_sin->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_cos = new QToolButton(centralwidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        Button_cos->setGeometry(QRect(109, 219, 80, 65));
        Button_cos->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_ln = new QToolButton(centralwidget);
        Button_ln->setObjectName(QString::fromUtf8("Button_ln"));
        Button_ln->setGeometry(QRect(30, 347, 80, 65));
        Button_ln->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_tan = new QToolButton(centralwidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        Button_tan->setGeometry(QRect(188, 219, 80, 65));
        Button_tan->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_log = new QToolButton(centralwidget);
        Button_log->setObjectName(QString::fromUtf8("Button_log"));
        Button_log->setGeometry(QRect(109, 347, 80, 65));
        Button_log->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        Button_acos = new QToolButton(centralwidget);
        Button_acos->setObjectName(QString::fromUtf8("Button_acos"));
        Button_acos->setGeometry(QRect(109, 283, 80, 65));
        Button_acos->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(630, 135, 361, 321));
        Button_create_grapf = new QPushButton(centralwidget);
        Button_create_grapf->setObjectName(QString::fromUtf8("Button_create_grapf"));
        Button_create_grapf->setGeometry(QRect(640, 65, 151, 51));
        Button_clear_graph = new QPushButton(centralwidget);
        Button_clear_graph->setObjectName(QString::fromUtf8("Button_clear_graph"));
        Button_clear_graph->setGeometry(QRect(820, 65, 151, 51));
        Ox = new QSpinBox(centralwidget);
        Ox->setObjectName(QString::fromUtf8("Ox"));
        Ox->setGeometry(QRect(1070, 175, 91, 41));
        Ox->setMinimum(1);
        Ox->setMaximum(100000);
        Oy = new QSpinBox(centralwidget);
        Oy->setObjectName(QString::fromUtf8("Oy"));
        Oy->setGeometry(QRect(1070, 215, 91, 41));
        Oy->setMinimum(1);
        Oy->setMaximum(100000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1030, 225, 21, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1030, 185, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1030, 125, 281, 31));
        Button_pow = new QToolButton(centralwidget);
        Button_pow->setObjectName(QString::fromUtf8("Button_pow"));
        Button_pow->setGeometry(QRect(109, 411, 80, 65));
        Button_pow->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid gray;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 10, 691, 16));
        Input_expression = new QLineEdit(centralwidget);
        Input_expression->setObjectName(QString::fromUtf8("Input_expression"));
        Input_expression->setGeometry(QRect(30, 75, 520, 31));
        Input_expression->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border-width: 1px;\n"
"     border-style: solid;\n"
"     border-color: gray;\n"
" }"));
        Button_clear = new QPushButton(centralwidget);
        Button_clear->setObjectName(QString::fromUtf8("Button_clear"));
        Button_clear->setGeometry(QRect(550, 70, 41, 41));
        Button_backspase = new QPushButton(centralwidget);
        Button_backspase->setObjectName(QString::fromUtf8("Button_backspase"));
        Button_backspase->setGeometry(QRect(553, 115, 31, 110));
        Button_backspase->setStyleSheet(QString::fromUtf8("border-right-color: rgb(237, 255, 98);"));
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Result_label->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button_equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button_tochka->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button_minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button_Open_Backet->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        Button_AC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button_Clozed_Backet->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        Button_exit->setText(QCoreApplication::translate("Calculator", "exit", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 x:", nullptr));
        line_value_x->setText(QString());
        Button_mod->setText(QCoreApplication::translate("Calculator", "mod", nullptr));
        Button_atan->setText(QCoreApplication::translate("Calculator", "atan", nullptr));
        Button_asin->setText(QCoreApplication::translate("Calculator", "asin", nullptr));
        Button_x->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        Button_sqrt->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        Button_sin->setText(QCoreApplication::translate("Calculator", "sin", nullptr));
        Button_cos->setText(QCoreApplication::translate("Calculator", "cos", nullptr));
        Button_ln->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        Button_tan->setText(QCoreApplication::translate("Calculator", "tan", nullptr));
        Button_log->setText(QCoreApplication::translate("Calculator", "log", nullptr));
        Button_acos->setText(QCoreApplication::translate("Calculator", "acos", nullptr));
        Button_create_grapf->setText(QCoreApplication::translate("Calculator", "\320\236\321\202\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        Button_clear_graph->setText(QCoreApplication::translate("Calculator", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("Calculator", "Oy:", nullptr));
        label_4->setText(QCoreApplication::translate("Calculator", "Ox:", nullptr));
        label_2->setText(QCoreApplication::translate("Calculator", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\321\213 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\275\320\276\320\271 \320\277\320\273\320\276\321\201\320\272\320\276\321\201\321\202\320\270:", nullptr));
        Button_pow->setText(QCoreApplication::translate("Calculator", "pow", nullptr));
        label_5->setText(QCoreApplication::translate("Calculator", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213(\320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\320\276):", nullptr));
        Button_clear->setText(QCoreApplication::translate("Calculator", "clear", nullptr));
        Button_backspase->setText(QCoreApplication::translate("Calculator", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
