/****************************************************************************
** Meta object code from reading C++ file 'distortionHelp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../distortionHelp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'distortionHelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_distortionHelp_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_distortionHelp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_distortionHelp_t qt_meta_stringdata_distortionHelp = {
    {
QT_MOC_LITERAL(0, 0, 14), // "distortionHelp"
QT_MOC_LITERAL(1, 15, 12), // "onValsLoaded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(4, 54, 7), // "t_label"
QT_MOC_LITERAL(5, 62, 19), // "std::vector<double>"
QT_MOC_LITERAL(6, 82, 5), // "t_val"
QT_MOC_LITERAL(7, 88, 6), // "errors"
QT_MOC_LITERAL(8, 95, 27) // "on_pushButton_close_clicked"

    },
    "distortionHelp\0onValsLoaded\0\0"
    "std::vector<std::string>\0t_label\0"
    "std::vector<double>\0t_val\0errors\0"
    "on_pushButton_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_distortionHelp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       8,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void,

       0        // eod
};

void distortionHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<distortionHelp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onValsLoaded((*reinterpret_cast< std::vector<std::string>(*)>(_a[1])),(*reinterpret_cast< std::vector<double>(*)>(_a[2])),(*reinterpret_cast< std::vector<double>(*)>(_a[3]))); break;
        case 1: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject distortionHelp::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_distortionHelp.data,
    qt_meta_data_distortionHelp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *distortionHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *distortionHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_distortionHelp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int distortionHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
