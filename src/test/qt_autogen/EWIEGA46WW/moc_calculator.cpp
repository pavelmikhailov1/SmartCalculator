/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qt/calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculator_t {
    const uint offsetsAndSize[30];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 10), // "Calculator"
QT_MOC_LITERAL(11, 25), // "add_numbers_and_operators"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 19), // "on_Button_0_clicked"
QT_MOC_LITERAL(58, 24), // "on_Button_tochka_clicked"
QT_MOC_LITERAL(83, 20), // "on_Button_AC_clicked"
QT_MOC_LITERAL(104, 23), // "on_Button_equal_clicked"
QT_MOC_LITERAL(128, 19), // "on_Button_x_clicked"
QT_MOC_LITERAL(148, 19), // "on_function_clicked"
QT_MOC_LITERAL(168, 22), // "on_Button_exit_clicked"
QT_MOC_LITERAL(191, 21), // "on_Button_mod_clicked"
QT_MOC_LITERAL(213, 29), // "on_Button_Open_Backet_clicked"
QT_MOC_LITERAL(243, 29), // "on_Button_clear_graph_clicked"
QT_MOC_LITERAL(273, 30), // "on_Button_create_grapf_clicked"
QT_MOC_LITERAL(304, 21) // "on_Button_pow_clicked"

    },
    "Calculator\0add_numbers_and_operators\0"
    "\0on_Button_0_clicked\0on_Button_tochka_clicked\0"
    "on_Button_AC_clicked\0on_Button_equal_clicked\0"
    "on_Button_x_clicked\0on_function_clicked\0"
    "on_Button_exit_clicked\0on_Button_mod_clicked\0"
    "on_Button_Open_Backet_clicked\0"
    "on_Button_clear_graph_clicked\0"
    "on_Button_create_grapf_clicked\0"
    "on_Button_pow_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add_numbers_and_operators(); break;
        case 1: _t->on_Button_0_clicked(); break;
        case 2: _t->on_Button_tochka_clicked(); break;
        case 3: _t->on_Button_AC_clicked(); break;
        case 4: _t->on_Button_equal_clicked(); break;
        case 5: _t->on_Button_x_clicked(); break;
        case 6: _t->on_function_clicked(); break;
        case 7: _t->on_Button_exit_clicked(); break;
        case 8: _t->on_Button_mod_clicked(); break;
        case 9: _t->on_Button_Open_Backet_clicked(); break;
        case 10: _t->on_Button_clear_graph_clicked(); break;
        case 11: _t->on_Button_create_grapf_clicked(); break;
        case 12: _t->on_Button_pow_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Calculator.offsetsAndSize,
    qt_meta_data_Calculator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Calculator_t
, QtPrivate::TypeAndForceComplete<Calculator, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE