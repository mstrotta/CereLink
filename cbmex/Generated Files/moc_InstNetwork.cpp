/****************************************************************************
** Meta object code from reading C++ file 'InstNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cbhwlib/InstNetwork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstNetwork_t {
    QByteArrayData data[12];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstNetwork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstNetwork_t qt_meta_stringdata_InstNetwork = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InstNetwork"
QT_MOC_LITERAL(1, 12, 16), // "InstNetworkEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "NetEventType"
QT_MOC_LITERAL(4, 43, 4), // "type"
QT_MOC_LITERAL(5, 48, 4), // "code"
QT_MOC_LITERAL(6, 53, 5), // "Close"
QT_MOC_LITERAL(7, 59, 12), // "OnNetCommand"
QT_MOC_LITERAL(8, 72, 14), // "NetCommandType"
QT_MOC_LITERAL(9, 87, 3), // "cmd"
QT_MOC_LITERAL(10, 91, 18), // "OnInstNetworkEvent"
QT_MOC_LITERAL(11, 110, 6) // "OnExec"

    },
    "InstNetwork\0InstNetworkEvent\0\0"
    "NetEventType\0type\0code\0Close\0OnNetCommand\0"
    "NetCommandType\0cmd\0OnInstNetworkEvent\0"
    "OnExec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstNetwork[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       1,    1,   54,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   57,    2, 0x0a /* Public */,
       7,    2,   58,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x28 /* Private | MethodCloned */,
      10,    2,   66,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::UInt,    9,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    2,    2,
    QMetaType::Void,

       0        // eod
};

void InstNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstNetwork *_t = static_cast<InstNetwork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InstNetworkEvent((*reinterpret_cast< NetEventType(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->InstNetworkEvent((*reinterpret_cast< NetEventType(*)>(_a[1]))); break;
        case 2: _t->Close(); break;
        case 3: _t->OnNetCommand((*reinterpret_cast< NetCommandType(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->OnNetCommand((*reinterpret_cast< NetCommandType(*)>(_a[1]))); break;
        case 5: _t->OnInstNetworkEvent((*reinterpret_cast< NetEventType(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: _t->OnExec(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InstNetwork::*_t)(NetEventType , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InstNetwork::InstNetworkEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InstNetwork::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_InstNetwork.data,
      qt_meta_data_InstNetwork,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InstNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstNetwork.stringdata0))
        return static_cast<void*>(const_cast< InstNetwork*>(this));
    return QThread::qt_metacast(_clname);
}

int InstNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void InstNetwork::InstNetworkEvent(NetEventType _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
