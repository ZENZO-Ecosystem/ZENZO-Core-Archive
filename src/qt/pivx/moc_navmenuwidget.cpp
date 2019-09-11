/****************************************************************************
** Meta object code from reading C++ file 'navmenuwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/navmenuwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navmenuwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NavMenuWidget_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavMenuWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavMenuWidget_t qt_meta_stringdata_NavMenuWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NavMenuWidget"
QT_MOC_LITERAL(1, 14, 14), // "selectSettings"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "onSendClicked"
QT_MOC_LITERAL(4, 44, 18), // "onDashboardClicked"
QT_MOC_LITERAL(5, 63, 16), // "onPrivacyClicked"
QT_MOC_LITERAL(6, 80, 16), // "onAddressClicked"
QT_MOC_LITERAL(7, 97, 20), // "onMasterNodesClicked"
QT_MOC_LITERAL(8, 118, 17), // "onSettingsClicked"
QT_MOC_LITERAL(9, 136, 16), // "onReceiveClicked"
QT_MOC_LITERAL(10, 153, 18) // "updateButtonStyles"

    },
    "NavMenuWidget\0selectSettings\0\0"
    "onSendClicked\0onDashboardClicked\0"
    "onPrivacyClicked\0onAddressClicked\0"
    "onMasterNodesClicked\0onSettingsClicked\0"
    "onReceiveClicked\0updateButtonStyles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavMenuWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NavMenuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavMenuWidget *_t = static_cast<NavMenuWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectSettings(); break;
        case 1: _t->onSendClicked(); break;
        case 2: _t->onDashboardClicked(); break;
        case 3: _t->onPrivacyClicked(); break;
        case 4: _t->onAddressClicked(); break;
        case 5: _t->onMasterNodesClicked(); break;
        case 6: _t->onSettingsClicked(); break;
        case 7: _t->onReceiveClicked(); break;
        case 8: _t->updateButtonStyles(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NavMenuWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NavMenuWidget.data,
      qt_meta_data_NavMenuWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NavMenuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavMenuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NavMenuWidget.stringdata0))
        return static_cast<void*>(const_cast< NavMenuWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NavMenuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
