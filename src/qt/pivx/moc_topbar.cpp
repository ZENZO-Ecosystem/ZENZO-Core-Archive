/****************************************************************************
** Meta object code from reading C++ file 'topbar.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/topbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'topbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TopBar_t {
    QByteArrayData data[31];
    char stringdata0[472];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TopBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TopBar_t qt_meta_stringdata_TopBar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "TopBar"
QT_MOC_LITERAL(1, 7, 12), // "themeChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "isLight"
QT_MOC_LITERAL(4, 29, 12), // "walletSynced"
QT_MOC_LITERAL(5, 42, 6), // "isSync"
QT_MOC_LITERAL(6, 49, 14), // "updateBalances"
QT_MOC_LITERAL(7, 64, 7), // "CAmount"
QT_MOC_LITERAL(8, 72, 7), // "balance"
QT_MOC_LITERAL(9, 80, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(10, 99, 15), // "immatureBalance"
QT_MOC_LITERAL(11, 115, 15), // "zerocoinBalance"
QT_MOC_LITERAL(12, 131, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(13, 158, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(14, 182, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(15, 199, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(16, 218, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(17, 239, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(18, 257, 17), // "setNumConnections"
QT_MOC_LITERAL(19, 275, 5), // "count"
QT_MOC_LITERAL(20, 281, 12), // "setNumBlocks"
QT_MOC_LITERAL(21, 294, 20), // "updateAutoMintStatus"
QT_MOC_LITERAL(22, 315, 19), // "updateStakingStatus"
QT_MOC_LITERAL(23, 335, 19), // "onBtnReceiveClicked"
QT_MOC_LITERAL(24, 355, 14), // "onThemeClicked"
QT_MOC_LITERAL(25, 370, 16), // "onBtnLockClicked"
QT_MOC_LITERAL(26, 387, 22), // "lockDropdownMouseLeave"
QT_MOC_LITERAL(27, 410, 19), // "lockDropdownClicked"
QT_MOC_LITERAL(28, 430, 12), // "StateClicked"
QT_MOC_LITERAL(29, 443, 13), // "refreshStatus"
QT_MOC_LITERAL(30, 457, 14) // "openLockUnlock"

    },
    "TopBar\0themeChanged\0\0isLight\0walletSynced\0"
    "isSync\0updateBalances\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "updateDisplayUnit\0setNumConnections\0"
    "count\0setNumBlocks\0updateAutoMintStatus\0"
    "updateStakingStatus\0onBtnReceiveClicked\0"
    "onThemeClicked\0onBtnLockClicked\0"
    "lockDropdownMouseLeave\0lockDropdownClicked\0"
    "StateClicked\0refreshStatus\0openLockUnlock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TopBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    9,   95,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    1,  115,    2, 0x0a /* Public */,
      20,    1,  118,    2, 0x0a /* Public */,
      21,    0,  121,    2, 0x0a /* Public */,
      22,    0,  122,    2, 0x0a /* Public */,
      23,    0,  123,    2, 0x08 /* Private */,
      24,    0,  124,    2, 0x08 /* Private */,
      25,    0,  125,    2, 0x08 /* Private */,
      26,    0,  126,    2, 0x08 /* Private */,
      27,    1,  127,    2, 0x08 /* Private */,
      29,    0,  130,    2, 0x08 /* Private */,
      30,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    8,    9,   10,   11,   12,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TopBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TopBar *_t = static_cast<TopBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->themeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->walletSynced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateBalances((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateAutoMintStatus(); break;
        case 7: _t->updateStakingStatus(); break;
        case 8: _t->onBtnReceiveClicked(); break;
        case 9: _t->onThemeClicked(); break;
        case 10: _t->onBtnLockClicked(); break;
        case 11: _t->lockDropdownMouseLeave(); break;
        case 12: _t->lockDropdownClicked((*reinterpret_cast< const StateClicked(*)>(_a[1]))); break;
        case 13: _t->refreshStatus(); break;
        case 14: _t->openLockUnlock(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TopBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TopBar::themeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TopBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TopBar::walletSynced)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TopBar::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_TopBar.data,
      qt_meta_data_TopBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TopBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TopBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TopBar.stringdata0))
        return static_cast<void*>(const_cast< TopBar*>(this));
    return PWidget::qt_metacast(_clname);
}

int TopBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TopBar::themeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TopBar::walletSynced(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
