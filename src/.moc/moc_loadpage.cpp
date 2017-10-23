/****************************************************************************
** Meta object code from reading C++ file 'loadpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loadpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoadPage_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadPage_t qt_meta_stringdata_LoadPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LoadPage"
QT_MOC_LITERAL(1, 9, 12), // "errorOcurred"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "error_number"
QT_MOC_LITERAL(4, 36, 9), // "error_str"
QT_MOC_LITERAL(5, 46, 10), // "pageLoaded"
QT_MOC_LITERAL(6, 57, 4), // "page"
QT_MOC_LITERAL(7, 62, 11) // "gotResponse"

    },
    "LoadPage\0errorOcurred\0\0error_number\0"
    "error_str\0pageLoaded\0page\0gotResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LoadPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoadPage *_t = static_cast<LoadPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOcurred((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->pageLoaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->gotResponse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoadPage::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadPage::errorOcurred)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoadPage::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadPage::pageLoaded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LoadPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LoadPage.data,
      qt_meta_data_LoadPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoadPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoadPage.stringdata0))
        return static_cast<void*>(const_cast< LoadPage*>(this));
    return QObject::qt_metacast(_clname);
}

int LoadPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LoadPage::errorOcurred(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoadPage::pageLoaded(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
