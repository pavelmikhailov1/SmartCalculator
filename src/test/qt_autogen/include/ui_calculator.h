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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

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

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(1371, 979);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Result_label = new QLabel(centralwidget);
        Result_label->setObjectName(QString::fromUtf8("Result_label"));
        Result_label->setGeometry(QRect(229, 155, 521, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        Result_label->setFont(font);
        Result_label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 122, 82);\n"
"font: 22pt \".AppleSystemUIFont\";\n"
"border: 3px solid black;\n"
"qproperty-aligment: 'AlignVCenter | AlignRight';"));
        Result_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button_7 = new QToolButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(490, 320, 65, 65));
        Button_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_8 = new QToolButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(555, 320, 65, 65));
        Button_8->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_div = new QToolButton(centralwidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        Button_div->setGeometry(QRect(685, 255, 65, 65));
        Button_div->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_9 = new QToolButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(620, 320, 65, 65));
        Button_9->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_mul = new QToolButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setGeometry(QRect(685, 320, 65, 65));
        Button_mul->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 2px solid white;\n"
"background-color: rgb(255, 122, 82);\n"
""));
        Button_5 = new QToolButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(555, 385, 65, 65));
        Button_5->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_4 = new QToolButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(490, 385, 65, 65));
        Button_4->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_6 = new QToolButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(620, 385, 65, 65));
        Button_6->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_plus = new QToolButton(centralwidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        Button_plus->setGeometry(QRect(685, 450, 65, 65));
        Button_plus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid black;"));
        Button_2 = new QToolButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(555, 450, 65, 65));
        Button_2->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_3 = new QToolButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(620, 450, 65, 65));
        Button_3->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_1 = new QToolButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(490, 450, 65, 65));
        Button_1->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_equal = new QToolButton(centralwidget);
        Button_equal->setObjectName(QString::fromUtf8("Button_equal"));
        Button_equal->setEnabled(true);
        Button_equal->setGeometry(QRect(685, 515, 65, 65));
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
"	border-color: red ;\n"
"}\n"
" QLineEdit {\n"
"     border-width: 1px;\n"
"     border-style: solid;\n"
"     border-radius: 4px;\n"
" }\n"
""));
        Button_tochka = new QToolButton(centralwidget);
        Button_tochka->setObjectName(QString::fromUtf8("Button_tochka"));
        Button_tochka->setGeometry(QRect(620, 515, 65, 65));
        Button_tochka->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_0 = new QToolButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(490, 515, 130, 65));
        Button_0->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_minus = new QToolButton(centralwidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));
        Button_minus->setGeometry(QRect(685, 385, 65, 65));
        Button_minus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_Open_Backet = new QToolButton(centralwidget);
        Button_Open_Backet->setObjectName(QString::fromUtf8("Button_Open_Backet"));
        Button_Open_Backet->setGeometry(QRect(555, 255, 65, 65));
        Button_Open_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_AC = new QToolButton(centralwidget);
        Button_AC->setObjectName(QString::fromUtf8("Button_AC"));
        Button_AC->setGeometry(QRect(490, 255, 65, 65));
        Button_AC->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_Clozed_Backet = new QToolButton(centralwidget);
        Button_Clozed_Backet->setObjectName(QString::fromUtf8("Button_Clozed_Backet"));
        Button_Clozed_Backet->setGeometry(QRect(620, 255, 65, 65));
        Button_Clozed_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_exit = new QPushButton(centralwidget);
        Button_exit->setObjectName(QString::fromUtf8("Button_exit"));
        Button_exit->setGeometry(QRect(870, 160, 111, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 520, 241, 61));
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
        Button_mod->setGeometry(QRect(230, 450, 120, 65));
        Button_mod->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_atan = new QToolButton(centralwidget);
        Button_atan->setObjectName(QString::fromUtf8("Button_atan"));
        Button_atan->setGeometry(QRect(390, 320, 80, 65));
        Button_atan->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_asin = new QToolButton(centralwidget);
        Button_asin->setObjectName(QString::fromUtf8("Button_asin"));
        Button_asin->setGeometry(QRect(230, 320, 80, 65));
        Button_asin->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_x = new QToolButton(centralwidget);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        Button_x->setGeometry(QRect(350, 450, 120, 65));
        Button_x->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_sqrt = new QToolButton(centralwidget);
        Button_sqrt->setObjectName(QString::fromUtf8("Button_sqrt"));
        Button_sqrt->setGeometry(QRect(390, 385, 80, 65));
        Button_sqrt->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_sin = new QToolButton(centralwidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        Button_sin->setGeometry(QRect(230, 255, 80, 65));
        Button_sin->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_cos = new QToolButton(centralwidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        Button_cos->setGeometry(QRect(310, 255, 80, 65));
        Button_cos->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_ln = new QToolButton(centralwidget);
        Button_ln->setObjectName(QString::fromUtf8("Button_ln"));
        Button_ln->setGeometry(QRect(230, 385, 80, 65));
        Button_ln->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_tan = new QToolButton(centralwidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        Button_tan->setGeometry(QRect(390, 255, 80, 65));
        Button_tan->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_log = new QToolButton(centralwidget);
        Button_log->setObjectName(QString::fromUtf8("Button_log"));
        Button_log->setGeometry(QRect(310, 385, 80, 65));
        Button_log->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_acos = new QToolButton(centralwidget);
        Button_acos->setObjectName(QString::fromUtf8("Button_acos"));
        Button_acos->setGeometry(QRect(310, 320, 80, 65));
        Button_acos->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
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
        Button_tochka->setText(QCoreApplication::translate("Calculator", ",", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
