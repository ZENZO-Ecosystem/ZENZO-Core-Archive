/****************************************************************************
** Meta object code from reading C++ file 'dashboardwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/dashboardwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboardwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SortEdit_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortEdit_t qt_meta_stringdata_SortEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SortEdit"
QT_MOC_LITERAL(1, 9, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "SortEdit\0Mouse_Pressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void SortEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SortEdit *_t = static_cast<SortEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mouse_Pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SortEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortEdit::Mouse_Pressed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SortEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_SortEdit.data,
      qt_meta_data_SortEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SortEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SortEdit.stringdata0))
        return static_cast<void*>(const_cast< SortEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int SortEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SortEdit::Mouse_Pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_DashboardWidget_t {
    QByteArrayData data[27];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DashboardWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DashboardWidget_t qt_meta_stringdata_DashboardWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DashboardWidget"
QT_MOC_LITERAL(1, 16, 19), // "incomingTransaction"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "date"
QT_MOC_LITERAL(4, 42, 4), // "unit"
QT_MOC_LITERAL(5, 47, 7), // "CAmount"
QT_MOC_LITERAL(6, 55, 6), // "amount"
QT_MOC_LITERAL(7, 62, 4), // "type"
QT_MOC_LITERAL(8, 67, 7), // "address"
QT_MOC_LITERAL(9, 75, 12), // "walletSynced"
QT_MOC_LITERAL(10, 88, 6), // "isSync"
QT_MOC_LITERAL(11, 95, 21), // "processNewTransaction"
QT_MOC_LITERAL(12, 117, 6), // "parent"
QT_MOC_LITERAL(13, 124, 5), // "start"
QT_MOC_LITERAL(14, 130, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(15, 155, 5), // "index"
QT_MOC_LITERAL(16, 161, 11), // "changeTheme"
QT_MOC_LITERAL(17, 173, 12), // "isLightTheme"
QT_MOC_LITERAL(18, 186, 8), // "QString&"
QT_MOC_LITERAL(19, 195, 5), // "theme"
QT_MOC_LITERAL(20, 201, 13), // "onSortChanged"
QT_MOC_LITERAL(21, 215, 17), // "onSortTypeChanged"
QT_MOC_LITERAL(22, 233, 5), // "value"
QT_MOC_LITERAL(23, 239, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(24, 257, 8), // "showList"
QT_MOC_LITERAL(25, 266, 11), // "onTxArrived"
QT_MOC_LITERAL(26, 278, 4) // "hash"

    },
    "DashboardWidget\0incomingTransaction\0"
    "\0date\0unit\0CAmount\0amount\0type\0address\0"
    "walletSynced\0isSync\0processNewTransaction\0"
    "parent\0start\0handleTransactionClicked\0"
    "index\0changeTheme\0isLightTheme\0QString&\0"
    "theme\0onSortChanged\0onSortTypeChanged\0"
    "value\0updateDisplayUnit\0showList\0"
    "onTxArrived\0hash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DashboardWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   75,    2, 0x0a /* Public */,
      11,    3,   78,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    2,   88,    2, 0x08 /* Private */,
      20,    1,   93,    2, 0x08 /* Private */,
      21,    1,   96,    2, 0x08 /* Private */,
      23,    0,   99,    2, 0x08 /* Private */,
      24,    0,  100,    2, 0x08 /* Private */,
      25,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    3,    4,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   12,   13,    2,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

       0        // eod
};

void DashboardWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DashboardWidget *_t = static_cast<DashboardWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->walletSynced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onSortChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onSortTypeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->showList(); break;
        case 9: _t->onTxArrived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DashboardWidget::*_t)(const QString & , int , const CAmount & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DashboardWidget::incomingTransaction)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DashboardWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_DashboardWidget.data,
      qt_meta_data_DashboardWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DashboardWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DashboardWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DashboardWidget.stringdata0))
        return static_cast<void*>(const_cast< DashboardWidget*>(this));
    return PWidget::qt_metacast(_clname);
}

int DashboardWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DashboardWidget::incomingTransaction(const QString & _t1, int _t2, const CAmount & _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
