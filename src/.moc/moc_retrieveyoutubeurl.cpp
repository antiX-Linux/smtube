/****************************************************************************
** Meta object code from reading C++ file 'retrieveyoutubeurl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../retrieveyoutubeurl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'retrieveyoutubeurl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RetrieveYoutubeUrl_t {
    QByteArrayData data[22];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RetrieveYoutubeUrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RetrieveYoutubeUrl_t qt_meta_stringdata_RetrieveYoutubeUrl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RetrieveYoutubeUrl"
QT_MOC_LITERAL(1, 19, 7), // "gotUrls"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(4, 46, 15), // "gotPreferredUrl"
QT_MOC_LITERAL(5, 62, 3), // "url"
QT_MOC_LITERAL(6, 66, 4), // "itag"
QT_MOC_LITERAL(7, 71, 12), // "gotEmptyList"
QT_MOC_LITERAL(8, 84, 10), // "connecting"
QT_MOC_LITERAL(9, 95, 4), // "host"
QT_MOC_LITERAL(10, 100, 12), // "errorOcurred"
QT_MOC_LITERAL(11, 113, 12), // "error_number"
QT_MOC_LITERAL(12, 126, 9), // "error_str"
QT_MOC_LITERAL(13, 136, 17), // "signatureNotFound"
QT_MOC_LITERAL(14, 154, 5), // "title"
QT_MOC_LITERAL(15, 160, 12), // "noSslSupport"
QT_MOC_LITERAL(16, 173, 15), // "videoPageLoaded"
QT_MOC_LITERAL(17, 189, 4), // "page"
QT_MOC_LITERAL(18, 194, 19), // "videoInfoPageLoaded"
QT_MOC_LITERAL(19, 214, 16), // "playerPageLoaded"
QT_MOC_LITERAL(20, 231, 16), // "streamPageLoaded"
QT_MOC_LITERAL(21, 248, 16) // "processVideoPage"

    },
    "RetrieveYoutubeUrl\0gotUrls\0\0"
    "QMap<int,QString>\0gotPreferredUrl\0url\0"
    "itag\0gotEmptyList\0connecting\0host\0"
    "errorOcurred\0error_number\0error_str\0"
    "signatureNotFound\0title\0noSslSupport\0"
    "videoPageLoaded\0page\0videoInfoPageLoaded\0"
    "playerPageLoaded\0streamPageLoaded\0"
    "processVideoPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RetrieveYoutubeUrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,
       7,    0,   82,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    2,   86,    2, 0x06 /* Public */,
      13,    1,   91,    2, 0x06 /* Public */,
      15,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   95,    2, 0x09 /* Protected */,
      18,    1,   98,    2, 0x09 /* Protected */,
      19,    1,  101,    2, 0x09 /* Protected */,
      20,    1,  104,    2, 0x09 /* Protected */,
      21,    0,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void,

       0        // eod
};

void RetrieveYoutubeUrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RetrieveYoutubeUrl *_t = static_cast<RetrieveYoutubeUrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotUrls((*reinterpret_cast< const QMap<int,QString>(*)>(_a[1]))); break;
        case 1: _t->gotPreferredUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->gotEmptyList(); break;
        case 3: _t->connecting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->errorOcurred((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->signatureNotFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->noSslSupport(); break;
        case 7: _t->videoPageLoaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->videoInfoPageLoaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->playerPageLoaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->streamPageLoaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->processVideoPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RetrieveYoutubeUrl::*_t)(const QMap<int,QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::gotUrls)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::gotPreferredUrl)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::gotEmptyList)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::connecting)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::errorOcurred)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::signatureNotFound)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (RetrieveYoutubeUrl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RetrieveYoutubeUrl::noSslSupport)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject RetrieveYoutubeUrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RetrieveYoutubeUrl.data,
      qt_meta_data_RetrieveYoutubeUrl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RetrieveYoutubeUrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RetrieveYoutubeUrl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RetrieveYoutubeUrl.stringdata0))
        return static_cast<void*>(const_cast< RetrieveYoutubeUrl*>(this));
    return QObject::qt_metacast(_clname);
}

int RetrieveYoutubeUrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RetrieveYoutubeUrl::gotUrls(const QMap<int,QString> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RetrieveYoutubeUrl::gotPreferredUrl(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RetrieveYoutubeUrl::gotEmptyList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void RetrieveYoutubeUrl::connecting(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RetrieveYoutubeUrl::errorOcurred(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RetrieveYoutubeUrl::signatureNotFound(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RetrieveYoutubeUrl::noSslSupport()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
