/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_treeWidget_itemClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 55, 4), // "item"
QT_MOC_LITERAL(5, 60, 6), // "column"
QT_MOC_LITERAL(6, 67, 27), // "on_treeWidget_2_itemClicked"
QT_MOC_LITERAL(7, 95, 31), // "on_text_value_param_textChanged"
QT_MOC_LITERAL(8, 127, 35), // "on_text_value_param_editingFi..."
QT_MOC_LITERAL(9, 163, 18), // "on_but_del_clicked"
QT_MOC_LITERAL(10, 182, 20), // "on_but_del_s_clicked"
QT_MOC_LITERAL(11, 203, 28), // "on_actionSave_file_triggered"
QT_MOC_LITERAL(12, 232, 18), // "on_but_add_clicked"
QT_MOC_LITERAL(13, 251, 13), // "set_new_param"
QT_MOC_LITERAL(14, 265, 11), // "const char*"
QT_MOC_LITERAL(15, 277, 7), // "section"
QT_MOC_LITERAL(16, 285, 5), // "param"
QT_MOC_LITERAL(17, 291, 3), // "buf"
QT_MOC_LITERAL(18, 295, 12), // "set_new_sect"
QT_MOC_LITERAL(19, 308, 20), // "on_but_add_s_clicked"
QT_MOC_LITERAL(20, 329, 28), // "on_actionLoad_File_triggered"
QT_MOC_LITERAL(21, 358, 24) // "on_actionClear_triggered"

    },
    "MainWindow\0on_treeWidget_itemClicked\0"
    "\0QTreeWidgetItem*\0item\0column\0"
    "on_treeWidget_2_itemClicked\0"
    "on_text_value_param_textChanged\0"
    "on_text_value_param_editingFinished\0"
    "on_but_del_clicked\0on_but_del_s_clicked\0"
    "on_actionSave_file_triggered\0"
    "on_but_add_clicked\0set_new_param\0"
    "const char*\0section\0param\0buf\0"
    "set_new_sect\0on_but_add_s_clicked\0"
    "on_actionLoad_File_triggered\0"
    "on_actionClear_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x08 /* Private */,
       6,    2,   84,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    3,   95,    2, 0x08 /* Private */,
      18,    3,  102,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,
      20,    0,  110,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_treeWidget_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_treeWidget_2_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_text_value_param_textChanged(); break;
        case 3: _t->on_text_value_param_editingFinished(); break;
        case 4: _t->on_but_del_clicked(); break;
        case 5: _t->on_but_del_s_clicked(); break;
        case 6: _t->on_actionSave_file_triggered(); break;
        case 7: _t->on_but_add_clicked(); break;
        case 8: _t->set_new_param((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 9: _t->set_new_sect((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 10: _t->on_but_add_s_clicked(); break;
        case 11: _t->on_actionLoad_File_triggered(); break;
        case 12: _t->on_actionClear_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
