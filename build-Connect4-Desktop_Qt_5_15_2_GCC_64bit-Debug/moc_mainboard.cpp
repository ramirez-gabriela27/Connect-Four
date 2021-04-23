/****************************************************************************
** Meta object code from reading C++ file 'mainboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Connect4/mainboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainBoard_t {
    QByteArrayData data[20];
    char stringdata0[476];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainBoard_t qt_meta_stringdata_MainBoard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MainBoard"
QT_MOC_LITERAL(1, 10, 21), // "on_doneButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_p1_color_clicked"
QT_MOC_LITERAL(4, 53, 19), // "on_p2_color_clicked"
QT_MOC_LITERAL(5, 73, 19), // "on_p3_color_clicked"
QT_MOC_LITERAL(6, 93, 34), // "on_p1_comboBox_currentIndexCh..."
QT_MOC_LITERAL(7, 128, 5), // "index"
QT_MOC_LITERAL(8, 134, 34), // "on_p2_comboBox_currentIndexCh..."
QT_MOC_LITERAL(9, 169, 34), // "on_p3_comboBox_currentIndexCh..."
QT_MOC_LITERAL(10, 204, 26), // "on_p1_name_editingFinished"
QT_MOC_LITERAL(11, 231, 26), // "on_p2_name_editingFinished"
QT_MOC_LITERAL(12, 258, 26), // "on_p3_name_editingFinished"
QT_MOC_LITERAL(13, 285, 30), // "on_board_endGameButton_clicked"
QT_MOC_LITERAL(14, 316, 27), // "on_board_shopButton_clicked"
QT_MOC_LITERAL(15, 344, 30), // "on_store_endGameButton_clicked"
QT_MOC_LITERAL(16, 375, 32), // "on_store_nextRoundButton_clicked"
QT_MOC_LITERAL(17, 408, 24), // "on_actionStats_triggered"
QT_MOC_LITERAL(18, 433, 22), // "on_buy_upgrade_clicked"
QT_MOC_LITERAL(19, 456, 19) // "on_buy_item_clicked"

    },
    "MainBoard\0on_doneButton_clicked\0\0"
    "on_p1_color_clicked\0on_p2_color_clicked\0"
    "on_p3_color_clicked\0"
    "on_p1_comboBox_currentIndexChanged\0"
    "index\0on_p2_comboBox_currentIndexChanged\0"
    "on_p3_comboBox_currentIndexChanged\0"
    "on_p1_name_editingFinished\0"
    "on_p2_name_editingFinished\0"
    "on_p3_name_editingFinished\0"
    "on_board_endGameButton_clicked\0"
    "on_board_shopButton_clicked\0"
    "on_store_endGameButton_clicked\0"
    "on_store_nextRoundButton_clicked\0"
    "on_actionStats_triggered\0"
    "on_buy_upgrade_clicked\0on_buy_item_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       8,    1,  106,    2, 0x08 /* Private */,
       9,    1,  109,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_doneButton_clicked(); break;
        case 1: _t->on_p1_color_clicked(); break;
        case 2: _t->on_p2_color_clicked(); break;
        case 3: _t->on_p3_color_clicked(); break;
        case 4: _t->on_p1_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_p2_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_p3_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { bool _r = _t->on_p1_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->on_p2_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->on_p3_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_board_endGameButton_clicked(); break;
        case 11: _t->on_board_shopButton_clicked(); break;
        case 12: _t->on_store_endGameButton_clicked(); break;
        case 13: _t->on_store_nextRoundButton_clicked(); break;
        case 14: _t->on_actionStats_triggered(); break;
        case 15: _t->on_buy_upgrade_clicked(); break;
        case 16: _t->on_buy_item_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainBoard.data,
    qt_meta_data_MainBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainBoard.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
