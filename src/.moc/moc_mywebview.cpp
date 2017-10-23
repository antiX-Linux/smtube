/****************************************************************************
** Meta object code from reading C++ file 'mywebview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mywebview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywebview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyWebView_t {
    QByteArrayData data[7];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWebView_t qt_meta_stringdata_MyWebView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyWebView"
QT_MOC_LITERAL(1, 10, 17), // "requestedOpenWith"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "requestedOpenAudioWith"
QT_MOC_LITERAL(4, 52, 25), // "openLinkInExternalBrowser"
QT_MOC_LITERAL(5, 78, 17), // "openWithTriggered"
QT_MOC_LITERAL(6, 96, 22) // "openAudioWithTriggered"

    },
    "MyWebView\0requestedOpenWith\0\0"
    "requestedOpenAudioWith\0openLinkInExternalBrowser\0"
    "openWithTriggered\0openAudioWithTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   49,    2, 0x09 /* Protected */,
       5,    0,   50,    2, 0x09 /* Protected */,
       6,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyWebView *_t = static_cast<MyWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestedOpenWith((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->requestedOpenAudioWith((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 2: _t->openLinkInExternalBrowser(); break;
        case 3: _t->openWithTriggered(); break;
        case 4: _t->openAudioWithTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyWebView::*_t)(const QString & , const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWebView::requestedOpenWith)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyWebView::*_t)(const QString & , const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWebView::requestedOpenAudioWith)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_MyWebView.data,
      qt_meta_data_MyWebView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyWebView.stringdata0))
        return static_cast<void*>(const_cast< MyWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int MyWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MyWebView::requestedOpenWith(const QString & _t1, const QUrl & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyWebView::requestedOpenAudioWith(const QString & _t1, const QUrl & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
