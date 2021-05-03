/****************************************************************************
** Meta object code from reading C++ file 'statsdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Connect4/statsdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statsdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_statsDisplay_t {
    QByteArrayData data[11];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statsDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statsDisplay_t qt_meta_stringdata_statsDisplay = {
    {
QT_MOC_LITERAL(0, 0, 12), // "statsDisplay"
QT_MOC_LITERAL(1, 13, 17), // "clear_show_signal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "recieve_p1_name"
QT_MOC_LITERAL(4, 48, 4), // "name"
QT_MOC_LITERAL(5, 53, 15), // "recieve_p2_name"
QT_MOC_LITERAL(6, 69, 15), // "recieve_p3_name"
QT_MOC_LITERAL(7, 85, 10), // "get_rounds"
QT_MOC_LITERAL(8, 96, 6), // "rounds"
QT_MOC_LITERAL(9, 103, 17), // "clear_leaderboard"
QT_MOC_LITERAL(10, 121, 25) // "on_statsDisplay_destroyed"

    },
    "statsDisplay\0clear_show_signal\0\0"
    "recieve_p1_name\0name\0recieve_p2_name\0"
    "recieve_p3_name\0get_rounds\0rounds\0"
    "clear_leaderboard\0on_statsDisplay_destroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statsDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void statsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<statsDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear_show_signal(); break;
        case 1: _t->recieve_p1_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->recieve_p2_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->recieve_p3_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->get_rounds((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->clear_leaderboard(); break;
        case 6: _t->on_statsDisplay_destroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (statsDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&statsDisplay::clear_show_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject statsDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_statsDisplay.data,
    qt_meta_data_statsDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *statsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statsDisplay.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int statsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void statsDisplay::clear_show_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
