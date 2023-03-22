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
#include <QtWidgets/QGroupBox>
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
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_value_x;
    QToolButton *Button_x;
    QGroupBox *groupBox;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(1371, 979);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Result_label = new QLabel(centralwidget);
        Result_label->setObjectName(QString::fromUtf8("Result_label"));
        Result_label->setGeometry(QRect(380, 100, 260, 100));
        Result_label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 122, 82);\n"
"font: 18pt \".AppleSystemUIFont\";\n"
"border: 3px solid black;\n"
"qproperty-aligment: 'AlignVCenter | AlignRight';"));
        Result_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button_7 = new QToolButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(380, 265, 65, 65));
        Button_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_8 = new QToolButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(445, 265, 65, 65));
        Button_8->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_div = new QToolButton(centralwidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        Button_div->setGeometry(QRect(575, 200, 65, 65));
        Button_div->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_9 = new QToolButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(510, 265, 65, 65));
        Button_9->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_mul = new QToolButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setGeometry(QRect(575, 265, 65, 65));
        Button_mul->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 2px solid white;\n"
"background-color: rgb(255, 122, 82);\n"
""));
        Button_5 = new QToolButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(445, 330, 65, 65));
        Button_5->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_4 = new QToolButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(380, 330, 65, 65));
        Button_4->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_6 = new QToolButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(510, 330, 65, 65));
        Button_6->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_plus = new QToolButton(centralwidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        Button_plus->setGeometry(QRect(575, 395, 65, 65));
        Button_plus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"border: 1px solid black;"));
        Button_2 = new QToolButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(445, 395, 65, 65));
        Button_2->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_3 = new QToolButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(510, 395, 65, 65));
        Button_3->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_1 = new QToolButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(380, 395, 65, 65));
        Button_1->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_equal = new QToolButton(centralwidget);
        Button_equal->setObjectName(QString::fromUtf8("Button_equal"));
        Button_equal->setEnabled(true);
        Button_equal->setGeometry(QRect(575, 460, 65, 65));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(false);
        Button_equal->setFont(font);
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
        Button_tochka->setGeometry(QRect(510, 460, 65, 65));
        Button_tochka->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_0 = new QToolButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(380, 460, 130, 65));
        Button_0->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_minus = new QToolButton(centralwidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));
        Button_minus->setGeometry(QRect(575, 330, 65, 65));
        Button_minus->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_Open_Backet = new QToolButton(centralwidget);
        Button_Open_Backet->setObjectName(QString::fromUtf8("Button_Open_Backet"));
        Button_Open_Backet->setGeometry(QRect(445, 200, 65, 65));
        Button_Open_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_AC = new QToolButton(centralwidget);
        Button_AC->setObjectName(QString::fromUtf8("Button_AC"));
        Button_AC->setGeometry(QRect(380, 200, 65, 65));
        Button_AC->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        Button_Clozed_Backet = new QToolButton(centralwidget);
        Button_Clozed_Backet->setObjectName(QString::fromUtf8("Button_Clozed_Backet"));
        Button_Clozed_Backet->setGeometry(QRect(510, 200, 65, 65));
        Button_Clozed_Backet->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(870, 160, 111, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(720, 80, 201, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        line_value_x = new QLineEdit(layoutWidget);
        line_value_x->setObjectName(QString::fromUtf8("line_value_x"));

        horizontalLayout->addWidget(line_value_x);

        Button_x = new QToolButton(centralwidget);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        Button_x->setGeometry(QRect(1070, 130, 91, 91));
        Button_x->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 190, 240, 260));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(120, 180, 120, 65));
        QFont font1;
        font1.setPointSize(18);
        pushButton_12->setFont(font1);
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 125, 80, 65));
        pushButton_9->setFont(font1);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 125, 80, 65));
        pushButton_8->setFont(font1);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 70, 80, 65));
        pushButton_5->setFont(font1);
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(80, 125, 80, 65));
        pushButton_10->setFont(font1);
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(0, 180, 120, 65));
        pushButton_11->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 15, 80, 65));
        pushButton_2->setFont(font1);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 15, 80, 65));
        pushButton_4->setFont(font1);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 70, 80, 65));
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 70, 80, 65));
        pushButton_7->setFont(font1);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 15, 80, 65));
        pushButton_3->setFont(font1);
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
        pushButton->setText(QCoreApplication::translate("Calculator", "exit", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 x:", nullptr));
        line_value_x->setText(QString());
        Button_x->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Calculator", "GroupBox", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "mod", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "log", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "asin", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "sin", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "tan", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "atan", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "acos", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "cos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
