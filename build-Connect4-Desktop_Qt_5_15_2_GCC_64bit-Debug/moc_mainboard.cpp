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
    QByteArrayData data[48];
    char stringdata0[981];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainBoard_t qt_meta_stringdata_MainBoard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MainBoard"
QT_MOC_LITERAL(1, 10, 11), // "send_rounds"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "rounds_"
QT_MOC_LITERAL(4, 31, 12), // "send_p1_name"
QT_MOC_LITERAL(5, 44, 4), // "name"
QT_MOC_LITERAL(6, 49, 12), // "send_p2_name"
QT_MOC_LITERAL(7, 62, 12), // "send_p3_name"
QT_MOC_LITERAL(8, 75, 17), // "clear_leaderboard"
QT_MOC_LITERAL(9, 93, 10), // "buy_signal"
QT_MOC_LITERAL(10, 104, 12), // "chip_dropped"
QT_MOC_LITERAL(11, 117, 21), // "on_doneButton_clicked"
QT_MOC_LITERAL(12, 139, 19), // "on_p1_color_clicked"
QT_MOC_LITERAL(13, 159, 19), // "on_p2_color_clicked"
QT_MOC_LITERAL(14, 179, 19), // "on_p3_color_clicked"
QT_MOC_LITERAL(15, 199, 34), // "on_p1_comboBox_currentIndexCh..."
QT_MOC_LITERAL(16, 234, 5), // "index"
QT_MOC_LITERAL(17, 240, 34), // "on_p2_comboBox_currentIndexCh..."
QT_MOC_LITERAL(18, 275, 34), // "on_p3_comboBox_currentIndexCh..."
QT_MOC_LITERAL(19, 310, 26), // "on_p1_name_editingFinished"
QT_MOC_LITERAL(20, 337, 26), // "on_p2_name_editingFinished"
QT_MOC_LITERAL(21, 364, 26), // "on_p3_name_editingFinished"
QT_MOC_LITERAL(22, 391, 27), // "on_p1_color_editingFinished"
QT_MOC_LITERAL(23, 419, 27), // "on_p2_color_editingFinished"
QT_MOC_LITERAL(24, 447, 27), // "on_p3_color_editingFinished"
QT_MOC_LITERAL(25, 475, 27), // "on_board_shopButton_clicked"
QT_MOC_LITERAL(26, 503, 32), // "on_store_nextRoundButton_clicked"
QT_MOC_LITERAL(27, 536, 30), // "on_actionLeaderboard_triggered"
QT_MOC_LITERAL(28, 567, 27), // "on_actionEnd_Game_triggered"
QT_MOC_LITERAL(29, 595, 19), // "on_column_1_pressed"
QT_MOC_LITERAL(30, 615, 20), // "on_column_1_released"
QT_MOC_LITERAL(31, 636, 19), // "on_column_2_pressed"
QT_MOC_LITERAL(32, 656, 20), // "on_column_2_released"
QT_MOC_LITERAL(33, 677, 19), // "on_column_3_pressed"
QT_MOC_LITERAL(34, 697, 19), // "on_column_4_pressed"
QT_MOC_LITERAL(35, 717, 20), // "on_column_4_released"
QT_MOC_LITERAL(36, 738, 19), // "on_column_5_pressed"
QT_MOC_LITERAL(37, 758, 20), // "on_column_5_released"
QT_MOC_LITERAL(38, 779, 20), // "on_column_6_released"
QT_MOC_LITERAL(39, 800, 19), // "on_column_6_pressed"
QT_MOC_LITERAL(40, 820, 19), // "on_column_7_pressed"
QT_MOC_LITERAL(41, 840, 20), // "on_column_7_released"
QT_MOC_LITERAL(42, 861, 20), // "on_column_3_released"
QT_MOC_LITERAL(43, 882, 18), // "recieve_buy_signal"
QT_MOC_LITERAL(44, 901, 15), // "recieve_dropped"
QT_MOC_LITERAL(45, 917, 20), // "recieve_clear_signal"
QT_MOC_LITERAL(46, 938, 22), // "on_buy_upgrade_clicked"
QT_MOC_LITERAL(47, 961, 19) // "on_buy_item_clicked"

    },
    "MainBoard\0send_rounds\0\0rounds_\0"
    "send_p1_name\0name\0send_p2_name\0"
    "send_p3_name\0clear_leaderboard\0"
    "buy_signal\0chip_dropped\0on_doneButton_clicked\0"
    "on_p1_color_clicked\0on_p2_color_clicked\0"
    "on_p3_color_clicked\0"
    "on_p1_comboBox_currentIndexChanged\0"
    "index\0on_p2_comboBox_currentIndexChanged\0"
    "on_p3_comboBox_currentIndexChanged\0"
    "on_p1_name_editingFinished\0"
    "on_p2_name_editingFinished\0"
    "on_p3_name_editingFinished\0"
    "on_p1_color_editingFinished\0"
    "on_p2_color_editingFinished\0"
    "on_p3_color_editingFinished\0"
    "on_board_shopButton_clicked\0"
    "on_store_nextRoundButton_clicked\0"
    "on_actionLeaderboard_triggered\0"
    "on_actionEnd_Game_triggered\0"
    "on_column_1_pressed\0on_column_1_released\0"
    "on_column_2_pressed\0on_column_2_released\0"
    "on_column_3_pressed\0on_column_4_pressed\0"
    "on_column_4_released\0on_column_5_pressed\0"
    "on_column_5_released\0on_column_6_released\0"
    "on_column_6_pressed\0on_column_7_pressed\0"
    "on_column_7_released\0on_column_3_released\0"
    "recieve_buy_signal\0recieve_dropped\0"
    "recieve_clear_signal\0on_buy_upgrade_clicked\0"
    "on_buy_item_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  229,    2, 0x06 /* Public */,
       4,    1,  232,    2, 0x06 /* Public */,
       6,    1,  235,    2, 0x06 /* Public */,
       7,    1,  238,    2, 0x06 /* Public */,
       8,    0,  241,    2, 0x06 /* Public */,
       9,    0,  242,    2, 0x06 /* Public */,
      10,    0,  243,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  244,    2, 0x08 /* Private */,
      12,    0,  245,    2, 0x08 /* Private */,
      13,    0,  246,    2, 0x08 /* Private */,
      14,    0,  247,    2, 0x08 /* Private */,
      15,    1,  248,    2, 0x08 /* Private */,
      17,    1,  251,    2, 0x08 /* Private */,
      18,    1,  254,    2, 0x08 /* Private */,
      19,    0,  257,    2, 0x08 /* Private */,
      20,    0,  258,    2, 0x08 /* Private */,
      21,    0,  259,    2, 0x08 /* Private */,
      22,    0,  260,    2, 0x08 /* Private */,
      23,    0,  261,    2, 0x08 /* Private */,
      24,    0,  262,    2, 0x08 /* Private */,
      25,    0,  263,    2, 0x08 /* Private */,
      26,    0,  264,    2, 0x08 /* Private */,
      27,    0,  265,    2, 0x08 /* Private */,
      28,    0,  266,    2, 0x08 /* Private */,
      29,    0,  267,    2, 0x08 /* Private */,
      30,    0,  268,    2, 0x08 /* Private */,
      31,    0,  269,    2, 0x08 /* Private */,
      32,    0,  270,    2, 0x08 /* Private */,
      33,    0,  271,    2, 0x08 /* Private */,
      34,    0,  272,    2, 0x08 /* Private */,
      35,    0,  273,    2, 0x08 /* Private */,
      36,    0,  274,    2, 0x08 /* Private */,
      37,    0,  275,    2, 0x08 /* Private */,
      38,    0,  276,    2, 0x08 /* Private */,
      39,    0,  277,    2, 0x08 /* Private */,
      40,    0,  278,    2, 0x08 /* Private */,
      41,    0,  279,    2, 0x08 /* Private */,
      42,    0,  280,    2, 0x08 /* Private */,
      43,    0,  281,    2, 0x08 /* Private */,
      44,    0,  282,    2, 0x08 /* Private */,
      45,    0,  283,    2, 0x0a /* Public */,
      46,    0,  284,    2, 0x0a /* Public */,
      47,    0,  285,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
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
    QMetaType::Int,
    QMetaType::Int,
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
        case 0: _t->send_rounds((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->send_p1_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->send_p2_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->send_p3_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->clear_leaderboard(); break;
        case 5: _t->buy_signal(); break;
        case 6: _t->chip_dropped(); break;
        case 7: _t->on_doneButton_clicked(); break;
        case 8: _t->on_p1_color_clicked(); break;
        case 9: _t->on_p2_color_clicked(); break;
        case 10: _t->on_p3_color_clicked(); break;
        case 11: _t->on_p1_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_p2_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_p3_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: { bool _r = _t->on_p1_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->on_p2_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->on_p3_name_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->on_p1_color_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->on_p2_color_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->on_p3_color_editingFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->on_board_shopButton_clicked(); break;
        case 21: _t->on_store_nextRoundButton_clicked(); break;
        case 22: _t->on_actionLeaderboard_triggered(); break;
        case 23: _t->on_actionEnd_Game_triggered(); break;
        case 24: _t->on_column_1_pressed(); break;
        case 25: _t->on_column_1_released(); break;
        case 26: _t->on_column_2_pressed(); break;
        case 27: _t->on_column_2_released(); break;
        case 28: _t->on_column_3_pressed(); break;
        case 29: _t->on_column_4_pressed(); break;
        case 30: _t->on_column_4_released(); break;
        case 31: _t->on_column_5_pressed(); break;
        case 32: _t->on_column_5_released(); break;
        case 33: _t->on_column_6_released(); break;
        case 34: _t->on_column_6_pressed(); break;
        case 35: _t->on_column_7_pressed(); break;
        case 36: _t->on_column_7_released(); break;
        case 37: _t->on_column_3_released(); break;
        case 38: { int _r = _t->recieve_buy_signal();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 39: { int _r = _t->recieve_dropped();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->recieve_clear_signal(); break;
        case 41: _t->on_buy_upgrade_clicked(); break;
        case 42: _t->on_buy_item_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::send_rounds)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::send_p1_name)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::send_p2_name)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::send_p3_name)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::clear_leaderboard)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::buy_signal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainBoard::chip_dropped)) {
                *result = 6;
                return;
            }
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
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void MainBoard::send_rounds(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainBoard::send_p1_name(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainBoard::send_p2_name(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainBoard::send_p3_name(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainBoard::clear_leaderboard()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainBoard::buy_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainBoard::chip_dropped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE