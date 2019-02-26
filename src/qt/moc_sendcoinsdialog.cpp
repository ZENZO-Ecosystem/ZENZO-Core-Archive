/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/sendcoinsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendCoinsDialog_t {
    QByteArrayData data[50];
    char stringdata0[912];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendCoinsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendCoinsDialog_t qt_meta_stringdata_SendCoinsDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SendCoinsDialog"
QT_MOC_LITERAL(1, 16, 7), // "message"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "title"
QT_MOC_LITERAL(4, 31, 5), // "style"
QT_MOC_LITERAL(5, 37, 5), // "clear"
QT_MOC_LITERAL(6, 43, 6), // "reject"
QT_MOC_LITERAL(7, 50, 6), // "accept"
QT_MOC_LITERAL(8, 57, 8), // "addEntry"
QT_MOC_LITERAL(9, 66, 15), // "SendCoinsEntry*"
QT_MOC_LITERAL(10, 82, 19), // "updateTabsAndLabels"
QT_MOC_LITERAL(11, 102, 10), // "setBalance"
QT_MOC_LITERAL(12, 113, 7), // "CAmount"
QT_MOC_LITERAL(13, 121, 7), // "balance"
QT_MOC_LITERAL(14, 129, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(15, 148, 15), // "immatureBalance"
QT_MOC_LITERAL(16, 164, 15), // "zerocoinBalance"
QT_MOC_LITERAL(17, 180, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(18, 207, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(19, 231, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(20, 248, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(21, 267, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(22, 288, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(23, 310, 26), // "on_buttonChooseFee_clicked"
QT_MOC_LITERAL(24, 337, 28), // "on_buttonMinimizeFee_clicked"
QT_MOC_LITERAL(25, 366, 11), // "removeEntry"
QT_MOC_LITERAL(26, 378, 5), // "entry"
QT_MOC_LITERAL(27, 384, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(28, 402, 13), // "updateSwiftTX"
QT_MOC_LITERAL(29, 416, 25), // "coinControlFeatureChanged"
QT_MOC_LITERAL(30, 442, 24), // "coinControlButtonClicked"
QT_MOC_LITERAL(31, 467, 24), // "coinControlChangeChecked"
QT_MOC_LITERAL(32, 492, 23), // "coinControlChangeEdited"
QT_MOC_LITERAL(33, 516, 23), // "coinControlUpdateLabels"
QT_MOC_LITERAL(34, 540, 28), // "coinControlClipboardQuantity"
QT_MOC_LITERAL(35, 569, 26), // "coinControlClipboardAmount"
QT_MOC_LITERAL(36, 596, 23), // "coinControlClipboardFee"
QT_MOC_LITERAL(37, 620, 28), // "coinControlClipboardAfterFee"
QT_MOC_LITERAL(38, 649, 25), // "coinControlClipboardBytes"
QT_MOC_LITERAL(39, 675, 28), // "coinControlClipboardPriority"
QT_MOC_LITERAL(40, 704, 29), // "coinControlClipboardLowOutput"
QT_MOC_LITERAL(41, 734, 26), // "coinControlClipboardChange"
QT_MOC_LITERAL(42, 761, 17), // "splitBlockChecked"
QT_MOC_LITERAL(43, 779, 25), // "splitBlockLineEditChanged"
QT_MOC_LITERAL(44, 805, 4), // "text"
QT_MOC_LITERAL(45, 810, 13), // "setMinimumFee"
QT_MOC_LITERAL(46, 824, 24), // "updateFeeSectionControls"
QT_MOC_LITERAL(47, 849, 17), // "updateMinFeeLabel"
QT_MOC_LITERAL(48, 867, 19), // "updateSmartFeeLabel"
QT_MOC_LITERAL(49, 887, 24) // "updateGlobalFeeVariables"

    },
    "SendCoinsDialog\0message\0\0title\0style\0"
    "clear\0reject\0accept\0addEntry\0"
    "SendCoinsEntry*\0updateTabsAndLabels\0"
    "setBalance\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "on_sendButton_clicked\0on_buttonChooseFee_clicked\0"
    "on_buttonMinimizeFee_clicked\0removeEntry\0"
    "entry\0updateDisplayUnit\0updateSwiftTX\0"
    "coinControlFeatureChanged\0"
    "coinControlButtonClicked\0"
    "coinControlChangeChecked\0"
    "coinControlChangeEdited\0coinControlUpdateLabels\0"
    "coinControlClipboardQuantity\0"
    "coinControlClipboardAmount\0"
    "coinControlClipboardFee\0"
    "coinControlClipboardAfterFee\0"
    "coinControlClipboardBytes\0"
    "coinControlClipboardPriority\0"
    "coinControlClipboardLowOutput\0"
    "coinControlClipboardChange\0splitBlockChecked\0"
    "splitBlockLineEditChanged\0text\0"
    "setMinimumFee\0updateFeeSectionControls\0"
    "updateMinFeeLabel\0updateSmartFeeLabel\0"
    "updateGlobalFeeVariables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendCoinsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  186,    2, 0x0a /* Public */,
       6,    0,  187,    2, 0x0a /* Public */,
       7,    0,  188,    2, 0x0a /* Public */,
       8,    0,  189,    2, 0x0a /* Public */,
      10,    0,  190,    2, 0x0a /* Public */,
      11,    9,  191,    2, 0x0a /* Public */,
      22,    0,  210,    2, 0x08 /* Private */,
      23,    0,  211,    2, 0x08 /* Private */,
      24,    0,  212,    2, 0x08 /* Private */,
      25,    1,  213,    2, 0x08 /* Private */,
      27,    0,  216,    2, 0x08 /* Private */,
      28,    0,  217,    2, 0x08 /* Private */,
      29,    1,  218,    2, 0x08 /* Private */,
      30,    0,  221,    2, 0x08 /* Private */,
      31,    1,  222,    2, 0x08 /* Private */,
      32,    1,  225,    2, 0x08 /* Private */,
      33,    0,  228,    2, 0x08 /* Private */,
      34,    0,  229,    2, 0x08 /* Private */,
      35,    0,  230,    2, 0x08 /* Private */,
      36,    0,  231,    2, 0x08 /* Private */,
      37,    0,  232,    2, 0x08 /* Private */,
      38,    0,  233,    2, 0x08 /* Private */,
      39,    0,  234,    2, 0x08 /* Private */,
      40,    0,  235,    2, 0x08 /* Private */,
      41,    0,  236,    2, 0x08 /* Private */,
      42,    1,  237,    2, 0x08 /* Private */,
      43,    1,  240,    2, 0x08 /* Private */,
      45,    0,  243,    2, 0x08 /* Private */,
      46,    0,  244,    2, 0x08 /* Private */,
      47,    0,  245,    2, 0x08 /* Private */,
      48,    0,  246,    2, 0x08 /* Private */,
      49,    0,  247,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendCoinsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendCoinsDialog *_t = static_cast<SendCoinsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->clear(); break;
        case 2: _t->reject(); break;
        case 3: _t->accept(); break;
        case 4: { SendCoinsEntry* _r = _t->addEntry();
            if (_a[0]) *reinterpret_cast< SendCoinsEntry**>(_a[0]) = _r; }  break;
        case 5: _t->updateTabsAndLabels(); break;
        case 6: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 7: _t->on_sendButton_clicked(); break;
        case 8: _t->on_buttonChooseFee_clicked(); break;
        case 9: _t->on_buttonMinimizeFee_clicked(); break;
        case 10: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 11: _t->updateDisplayUnit(); break;
        case 12: _t->updateSwiftTX(); break;
        case 13: _t->coinControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->coinControlButtonClicked(); break;
        case 15: _t->coinControlChangeChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->coinControlChangeEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->coinControlUpdateLabels(); break;
        case 18: _t->coinControlClipboardQuantity(); break;
        case 19: _t->coinControlClipboardAmount(); break;
        case 20: _t->coinControlClipboardFee(); break;
        case 21: _t->coinControlClipboardAfterFee(); break;
        case 22: _t->coinControlClipboardBytes(); break;
        case 23: _t->coinControlClipboardPriority(); break;
        case 24: _t->coinControlClipboardLowOutput(); break;
        case 25: _t->coinControlClipboardChange(); break;
        case 26: _t->splitBlockChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->splitBlockLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setMinimumFee(); break;
        case 29: _t->updateFeeSectionControls(); break;
        case 30: _t->updateMinFeeLabel(); break;
        case 31: _t->updateSmartFeeLabel(); break;
        case 32: _t->updateGlobalFeeVariables(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendCoinsDialog::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendCoinsDialog::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SendCoinsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendCoinsDialog.data,
      qt_meta_data_SendCoinsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendCoinsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendCoinsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsDialog.stringdata0))
        return static_cast<void*>(const_cast< SendCoinsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendCoinsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsDialog::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
