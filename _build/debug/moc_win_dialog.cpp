/****************************************************************************
** Meta object code from reading C++ file 'win_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../win_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'win_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Win_dialog_t {
    QByteArrayData data[14];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Win_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Win_dialog_t qt_meta_stringdata_Win_dialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Win_dialog"
QT_MOC_LITERAL(1, 11, 13), // "set_new_param"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "const char*"
QT_MOC_LITERAL(4, 38, 7), // "section"
QT_MOC_LITERAL(5, 46, 5), // "param"
QT_MOC_LITERAL(6, 52, 3), // "buf"
QT_MOC_LITERAL(7, 56, 12), // "set_new_sect"
QT_MOC_LITERAL(8, 69, 31), // "on_text_name_string_textChanged"
QT_MOC_LITERAL(9, 101, 4), // "arg1"
QT_MOC_LITERAL(10, 106, 30), // "on_text_name_param_textChanged"
QT_MOC_LITERAL(11, 137, 31), // "on_text_value_param_textChanged"
QT_MOC_LITERAL(12, 169, 17), // "on_But_OK_clicked"
QT_MOC_LITERAL(13, 187, 32) // "on_text_section_name_textChanged"

    },
    "Win_dialog\0set_new_param\0\0const char*\0"
    "section\0param\0buf\0set_new_sect\0"
    "on_text_name_string_textChanged\0arg1\0"
    "on_text_name_param_textChanged\0"
    "on_text_value_param_textChanged\0"
    "on_But_OK_clicked\0on_text_section_name_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Win_dialog[] = {

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
       1,    3,   49,    2, 0x06 /* Public */,
       7,    3,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Win_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Win_dialog *_t = static_cast<Win_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_new_param((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 1: _t->set_new_sect((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 2: _t->on_text_name_string_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_text_name_param_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_text_value_param_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_But_OK_clicked(); break;
        case 6: _t->on_text_section_name_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Win_dialog::*)(const char * , const char * , const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Win_dialog::set_new_param)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Win_dialog::*)(const char * , const char * , const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Win_dialog::set_new_sect)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Win_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Win_dialog.data,
      qt_meta_data_Win_dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Win_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Win_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Win_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Win_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Win_dialog::set_new_param(const char * _t1, const char * _t2, const char * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Win_dialog::set_new_sect(const char * _t1, const char * _t2, const char * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
