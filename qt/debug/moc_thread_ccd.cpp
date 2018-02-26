/****************************************************************************
** Meta object code from reading C++ file 'thread_ccd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../thread_ccd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread_ccd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_thread_CCD_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_thread_CCD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_thread_CCD_t qt_meta_stringdata_thread_CCD = {
    {
QT_MOC_LITERAL(0, 0, 10), // "thread_CCD"
QT_MOC_LITERAL(1, 11, 14), // "image_captured"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "uchar*"
QT_MOC_LITERAL(4, 34, 12), // "error_of_ccd"
QT_MOC_LITERAL(5, 47, 10), // "initialize"
QT_MOC_LITERAL(6, 58, 13), // "capture_image"
QT_MOC_LITERAL(7, 72, 14), // "set_output_img"
QT_MOC_LITERAL(8, 87, 16) // "check_ccd_status"

    },
    "thread_CCD\0image_captured\0\0uchar*\0"
    "error_of_ccd\0initialize\0capture_image\0"
    "set_output_img\0check_ccd_status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_thread_CCD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void thread_CCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        thread_CCD *_t = static_cast<thread_CCD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->image_captured((*reinterpret_cast< uchar*(*)>(_a[1]))); break;
        case 1: _t->error_of_ccd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->initialize(); break;
        case 3: _t->capture_image(); break;
        case 4: _t->set_output_img(); break;
        case 5: { bool _r = _t->check_ccd_status();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (thread_CCD::*_t)(uchar * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_CCD::image_captured)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (thread_CCD::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&thread_CCD::error_of_ccd)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject thread_CCD::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_thread_CCD.data,
      qt_meta_data_thread_CCD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *thread_CCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *thread_CCD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_thread_CCD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int thread_CCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void thread_CCD::image_captured(uchar * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void thread_CCD::error_of_ccd(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
