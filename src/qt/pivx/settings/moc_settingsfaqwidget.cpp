/****************************************************************************
** Meta object code from reading C++ file 'settingsfaqwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/settings/settingsfaqwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsfaqwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SettingsFaqWidget_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsFaqWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsFaqWidget_t qt_meta_stringdata_SettingsFaqWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SettingsFaqWidget"
QT_MOC_LITERAL(1, 18, 17), // "windowResizeEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 51, 5), // "event"
QT_MOC_LITERAL(5, 57, 10), // "setSection"
QT_MOC_LITERAL(6, 68, 3), // "num"
QT_MOC_LITERAL(7, 72, 13), // "onFaq1Clicked"
QT_MOC_LITERAL(8, 86, 13), // "onFaq2Clicked"
QT_MOC_LITERAL(9, 100, 13), // "onFaq3Clicked"
QT_MOC_LITERAL(10, 114, 13), // "onFaq4Clicked"
QT_MOC_LITERAL(11, 128, 13), // "onFaq5Clicked"
QT_MOC_LITERAL(12, 142, 13), // "onFaq6Clicked"
QT_MOC_LITERAL(13, 156, 13), // "onFaq7Clicked"
QT_MOC_LITERAL(14, 170, 13), // "onFaq8Clicked"
QT_MOC_LITERAL(15, 184, 13), // "onFaq9Clicked"
QT_MOC_LITERAL(16, 198, 14) // "onFaq10Clicked"

    },
    "SettingsFaqWidget\0windowResizeEvent\0"
    "\0QResizeEvent*\0event\0setSection\0num\0"
    "onFaq1Clicked\0onFaq2Clicked\0onFaq3Clicked\0"
    "onFaq4Clicked\0onFaq5Clicked\0onFaq6Clicked\0"
    "onFaq7Clicked\0onFaq8Clicked\0onFaq9Clicked\0"
    "onFaq10Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsFaqWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
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

void SettingsFaqWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsFaqWidget *_t = static_cast<SettingsFaqWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowResizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->setSection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onFaq1Clicked(); break;
        case 3: _t->onFaq2Clicked(); break;
        case 4: _t->onFaq3Clicked(); break;
        case 5: _t->onFaq4Clicked(); break;
        case 6: _t->onFaq5Clicked(); break;
        case 7: _t->onFaq6Clicked(); break;
        case 8: _t->onFaq7Clicked(); break;
        case 9: _t->onFaq8Clicked(); break;
        case 10: _t->onFaq9Clicked(); break;
        case 11: _t->onFaq10Clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsFaqWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsFaqWidget.data,
      qt_meta_data_SettingsFaqWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SettingsFaqWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsFaqWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsFaqWidget.stringdata0))
        return static_cast<void*>(const_cast< SettingsFaqWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingsFaqWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
