/****************************************************************************
** Meta object code from reading C++ file 'thread_trio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../thread_trio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread_trio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_thread_Trio_t {
    QByteArrayData data[17];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_thread_Trio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_thread_Trio_t qt_meta_stringdata_thread_Trio = {
    {
QT_MOC_LITERAL(0, 0, 11), // "thread_Trio"
QT_MOC_LITERAL(1, 12, 20), // "return_error_of_trio"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "return_axis_paras"
QT_MOC_LITERAL(4, 52, 5), // "bool*"
QT_MOC_LITERAL(5, 58, 7), // "double*"
QT_MOC_LITERAL(6, 66, 12), // "return_paras"
QT_MOC_LITERAL(7, 79, 29), // "return_txt_transfer_situation"
QT_MOC_LITERAL(8, 109, 12), // "connect_Trio"
QT_MOC_LITERAL(9, 122, 10), // "close_Trio"
QT_MOC_LITERAL(10, 133, 16), // "send_txt_to_Trio"
QT_MOC_LITERAL(11, 150, 19), // "run_program_of_Trio"
QT_MOC_LITERAL(12, 170, 23), // "run_program_MANUAL_MODE"
QT_MOC_LITERAL(13, 194, 15), // "grab_axis_paras"
QT_MOC_LITERAL(14, 210, 8), // "write_VR"
QT_MOC_LITERAL(15, 219, 11), // "write_TABLE"
QT_MOC_LITERAL(16, 231, 19) // "close_Trio_Grabbing"

    },
    "thread_Trio\0return_error_of_trio\0\0"
    "return_axis_paras\0bool*\0double*\0"
    "return_paras\0return_txt_transfer_situation\0"
    "connect_Trio\0close_Trio\0send_txt_to_Trio\0"
    "run_program_of_Trio\0run_program_MANUAL_MODE\0"
    "grab_axis_paras\0write_VR\0write_TABLE\0"
    "close_Trio_Grabbing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_thread_Trio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   79,    2, 0x06 /* Public */,
       3,    2,   88,    2, 0x06 /* Public */,
       6,    2,   93,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  101,    2, 0x0a /* Public */,
       9,    0,  104,    2, 0x0a /* Public */,
      10,    3,  105,    2, 0x0a /* Public */,
      11,    2,  112,    2, 0x0a /* Public */,
      12,    1,  117,    2, 0x0a /* Public */,
      13,    1,  120,    2, 0x0a /* Public */,
      14,    2,  123,    2, 0x0a /* Public */,
      15,    2,  128,    2, 0x0a /* Public */,
      16,    0,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void,

       0        // eod
};

void thread_Trio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        thread_Trio *_t = static_cast<thread_Trio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->return_error_of_trio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->return_axis_paras((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 2: _t->return_paras((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->return_txt_transfer_situation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->connect_Trio((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 5: _t->close_Trio(); break;
        case 6: _t->send_txt_to_Trio((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->run_program_of_Trio((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->run_program_MANUAL_MODE((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 9: _t->grab_axis_paras((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 10: _t->write_VR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->write_TABLE((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->close_Trio_Grabbing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (thread_Trio::*_t)(int , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_Trio::return_error_of_trio)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (thread_Trio::*_t)(bool * , double * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_Trio::return_axis_paras)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (thread_Trio::*_t)(bool * , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_Trio::return_paras)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (thread_Trio::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_Trio::return_txt_transfer_situation)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject thread_Trio::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_thread_Trio.data,
      qt_meta_data_thread_Trio,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *thread_Trio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *thread_Trio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_thread_Trio.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int thread_Trio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void thread_Trio::return_error_of_trio(int _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void thread_Trio::return_axis_paras(bool * _t1, double * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void thread_Trio::return_paras(bool * _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void thread_Trio::return_txt_transfer_situation(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
