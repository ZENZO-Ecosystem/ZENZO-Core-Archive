/****************************************************************************
** Meta object code from reading C++ file 'optionsmodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/optionsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OptionsModel_t {
    QByteArrayData data[10];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionsModel_t qt_meta_stringdata_OptionsModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OptionsModel"
QT_MOC_LITERAL(1, 13, 18), // "displayUnitChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "unit"
QT_MOC_LITERAL(4, 38, 21), // "zeromintEnableChanged"
QT_MOC_LITERAL(5, 60, 25), // "zeromintPercentageChanged"
QT_MOC_LITERAL(6, 86, 21), // "preferredDenomChanged"
QT_MOC_LITERAL(7, 108, 27), // "anonymizeZenzoAmountChanged"
QT_MOC_LITERAL(8, 136, 26), // "coinControlFeaturesChanged"
QT_MOC_LITERAL(9, 163, 23) // "hideZeroBalancesChanged"

    },
    "OptionsModel\0displayUnitChanged\0\0unit\0"
    "zeromintEnableChanged\0zeromintPercentageChanged\0"
    "preferredDenomChanged\0anonymizeZenzoAmountChanged\0"
    "coinControlFeaturesChanged\0"
    "hideZeroBalancesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void OptionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsModel *_t = static_cast<OptionsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayUnitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->zeromintEnableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->zeromintPercentageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->preferredDenomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->anonymizeZenzoAmountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->coinControlFeaturesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->hideZeroBalancesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::displayUnitChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::zeromintEnableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::zeromintPercentageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::preferredDenomChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::anonymizeZenzoAmountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::coinControlFeaturesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (OptionsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsModel::hideZeroBalancesChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject OptionsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_OptionsModel.data,
      qt_meta_data_OptionsModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsModel.stringdata0))
        return static_cast<void*>(const_cast< OptionsModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int OptionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void OptionsModel::displayUnitChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionsModel::zeromintEnableChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OptionsModel::zeromintPercentageChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OptionsModel::preferredDenomChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OptionsModel::anonymizeZenzoAmountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OptionsModel::coinControlFeaturesChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OptionsModel::hideZeroBalancesChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
