/****************************************************************************
** Meta object code from reading C++ file 'property_tree_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rviz/properties/property_tree_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'property_tree_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz__PropertySelectionModel_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz__PropertySelectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz__PropertySelectionModel_t qt_meta_stringdata_rviz__PropertySelectionModel = {
    {
QT_MOC_LITERAL(0, 0, 28) // "rviz::PropertySelectionModel"

    },
    "rviz::PropertySelectionModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz__PropertySelectionModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void rviz::PropertySelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz::PropertySelectionModel::staticMetaObject = { {
    &QItemSelectionModel::staticMetaObject,
    qt_meta_stringdata_rviz__PropertySelectionModel.data,
    qt_meta_data_rviz__PropertySelectionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz::PropertySelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz::PropertySelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz__PropertySelectionModel.stringdata0))
        return static_cast<void*>(this);
    return QItemSelectionModel::qt_metacast(_clname);
}

int rviz::PropertySelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_rviz__PropertyTreeWidget_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz__PropertyTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz__PropertyTreeWidget_t qt_meta_stringdata_rviz__PropertyTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "rviz::PropertyTreeWidget"
QT_MOC_LITERAL(1, 25, 22), // "currentPropertyChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "const Property*"
QT_MOC_LITERAL(4, 65, 20), // "new_current_property"
QT_MOC_LITERAL(5, 86, 19), // "selectionHasChanged"
QT_MOC_LITERAL(6, 106, 21), // "propertyHiddenChanged"
QT_MOC_LITERAL(7, 128, 8) // "property"

    },
    "rviz::PropertyTreeWidget\0"
    "currentPropertyChanged\0\0const Property*\0"
    "new_current_property\0selectionHasChanged\0"
    "propertyHiddenChanged\0property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz__PropertyTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void rviz::PropertyTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPropertyChanged((*reinterpret_cast< const Property*(*)>(_a[1]))); break;
        case 1: _t->selectionHasChanged(); break;
        case 2: _t->propertyHiddenChanged((*reinterpret_cast< const Property*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyTreeWidget::*)(const Property * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyTreeWidget::currentPropertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyTreeWidget::selectionHasChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz::PropertyTreeWidget::staticMetaObject = { {
    &QTreeView::staticMetaObject,
    qt_meta_stringdata_rviz__PropertyTreeWidget.data,
    qt_meta_data_rviz__PropertyTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz::PropertyTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz::PropertyTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz__PropertyTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int rviz::PropertyTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void rviz::PropertyTreeWidget::currentPropertyChanged(const Property * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rviz::PropertyTreeWidget::selectionHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
