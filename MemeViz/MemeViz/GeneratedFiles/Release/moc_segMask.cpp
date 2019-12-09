/****************************************************************************
** Meta object code from reading C++ file 'segMask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../segMask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'segMask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_segMask_t {
    QByteArrayData data[13];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_segMask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_segMask_t qt_meta_stringdata_segMask = {
    {
QT_MOC_LITERAL(0, 0, 7), // "segMask"
QT_MOC_LITERAL(1, 8, 8), // "sendMask"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 26, 4), // "mask"
QT_MOC_LITERAL(5, 31, 16), // "onNewImageLoaded"
QT_MOC_LITERAL(6, 48, 6), // "bckdrp"
QT_MOC_LITERAL(7, 55, 29), // "on_pushButton_forebox_clicked"
QT_MOC_LITERAL(8, 85, 32), // "on_pushButton_foreground_clicked"
QT_MOC_LITERAL(9, 118, 32), // "on_pushButton_background_clicked"
QT_MOC_LITERAL(10, 151, 28), // "on_pushButton_refine_clicked"
QT_MOC_LITERAL(11, 180, 26), // "on_pushButton_mask_clicked"
QT_MOC_LITERAL(12, 207, 27) // "on_pushButton_close_clicked"

    },
    "segMask\0sendMask\0\0cv::Mat\0mask\0"
    "onNewImageLoaded\0bckdrp\0"
    "on_pushButton_forebox_clicked\0"
    "on_pushButton_foreground_clicked\0"
    "on_pushButton_background_clicked\0"
    "on_pushButton_refine_clicked\0"
    "on_pushButton_mask_clicked\0"
    "on_pushButton_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_segMask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void segMask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<segMask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMask((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->onNewImageLoaded((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_forebox_clicked(); break;
        case 3: _t->on_pushButton_foreground_clicked(); break;
        case 4: _t->on_pushButton_background_clicked(); break;
        case 5: _t->on_pushButton_refine_clicked(); break;
        case 6: _t->on_pushButton_mask_clicked(); break;
        case 7: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (segMask::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&segMask::sendMask)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject segMask::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_segMask.data,
    qt_meta_data_segMask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *segMask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *segMask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_segMask.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int segMask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void segMask::sendMask(cv::Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
