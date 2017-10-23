/****************************************************************************
** Meta object code from reading C++ file 'codedownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../codedownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codedownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CodeDownloader_t {
    QByteArrayData data[22];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CodeDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CodeDownloader_t qt_meta_stringdata_CodeDownloader = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CodeDownloader"
QT_MOC_LITERAL(1, 15, 16), // "downloadFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "errorOcurred"
QT_MOC_LITERAL(4, 46, 12), // "error_number"
QT_MOC_LITERAL(5, 59, 9), // "error_str"
QT_MOC_LITERAL(6, 69, 9), // "fileSaved"
QT_MOC_LITERAL(7, 79, 10), // "saveFailed"
QT_MOC_LITERAL(8, 90, 8), // "download"
QT_MOC_LITERAL(9, 99, 3), // "url"
QT_MOC_LITERAL(10, 103, 14), // "cancelDownload"
QT_MOC_LITERAL(11, 118, 11), // "gotResponse"
QT_MOC_LITERAL(12, 130, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 145, 5), // "reply"
QT_MOC_LITERAL(14, 151, 22), // "updateDataReadProgress"
QT_MOC_LITERAL(15, 174, 10), // "bytes_read"
QT_MOC_LITERAL(16, 185, 11), // "total_bytes"
QT_MOC_LITERAL(17, 197, 4), // "save"
QT_MOC_LITERAL(18, 202, 5), // "bytes"
QT_MOC_LITERAL(19, 208, 15), // "reportFileSaved"
QT_MOC_LITERAL(20, 224, 16), // "reportSaveFailed"
QT_MOC_LITERAL(21, 241, 11) // "reportError"

    },
    "CodeDownloader\0downloadFinished\0\0"
    "errorOcurred\0error_number\0error_str\0"
    "fileSaved\0saveFailed\0download\0url\0"
    "cancelDownload\0gotResponse\0QNetworkReply*\0"
    "reply\0updateDataReadProgress\0bytes_read\0"
    "total_bytes\0save\0bytes\0reportFileSaved\0"
    "reportSaveFailed\0reportError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CodeDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    2,   75,    2, 0x06 /* Public */,
       6,    2,   80,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   88,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x08 /* Private */,
      14,    2,   95,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      19,    2,  103,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      21,    2,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   15,   16,
    QMetaType::Void, QMetaType::QByteArray,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,

       0        // eod
};

void CodeDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeDownloader *_t = static_cast<CodeDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadFinished(); break;
        case 1: _t->errorOcurred((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->fileSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->saveFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->download((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 5: _t->cancelDownload(); break;
        case 6: _t->gotResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->updateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->save((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->reportFileSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->reportSaveFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->reportError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CodeDownloader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDownloader::downloadFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CodeDownloader::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDownloader::errorOcurred)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CodeDownloader::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDownloader::fileSaved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CodeDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeDownloader::saveFailed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CodeDownloader::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_CodeDownloader.data,
      qt_meta_data_CodeDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CodeDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CodeDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CodeDownloader.stringdata0))
        return static_cast<void*>(const_cast< CodeDownloader*>(this));
    return QProgressDialog::qt_metacast(_clname);
}

int CodeDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CodeDownloader::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CodeDownloader::errorOcurred(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CodeDownloader::fileSaved(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CodeDownloader::saveFailed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
