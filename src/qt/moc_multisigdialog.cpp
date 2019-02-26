/****************************************************************************
** Meta object code from reading C++ file 'multisigdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/multisigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultisigDialog_t {
    QByteArrayData data[17];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultisigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultisigDialog_t qt_meta_stringdata_MultisigDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MultisigDialog"
QT_MOC_LITERAL(1, 15, 7), // "showTab"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 11), // "deleteFrame"
QT_MOC_LITERAL(5, 42, 9), // "pasteText"
QT_MOC_LITERAL(6, 52, 16), // "commitMultisigTx"
QT_MOC_LITERAL(7, 69, 26), // "addressBookButtonReceiving"
QT_MOC_LITERAL(8, 96, 27), // "on_addAddressButton_clicked"
QT_MOC_LITERAL(9, 124, 28), // "on_addMultisigButton_clicked"
QT_MOC_LITERAL(10, 153, 31), // "on_addDestinationButton_clicked"
QT_MOC_LITERAL(11, 185, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(12, 209, 25), // "on_addInputButton_clicked"
QT_MOC_LITERAL(13, 235, 27), // "on_addPrivKeyButton_clicked"
QT_MOC_LITERAL(14, 263, 21), // "on_signButton_clicked"
QT_MOC_LITERAL(15, 285, 32), // "on_pushButtonCoinControl_clicked"
QT_MOC_LITERAL(16, 318, 30) // "on_importAddressButton_clicked"

    },
    "MultisigDialog\0showTab\0\0index\0deleteFrame\0"
    "pasteText\0commitMultisigTx\0"
    "addressBookButtonReceiving\0"
    "on_addAddressButton_clicked\0"
    "on_addMultisigButton_clicked\0"
    "on_addDestinationButton_clicked\0"
    "on_createButton_clicked\0"
    "on_addInputButton_clicked\0"
    "on_addPrivKeyButton_clicked\0"
    "on_signButton_clicked\0"
    "on_pushButtonCoinControl_clicked\0"
    "on_importAddressButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultisigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultisigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultisigDialog *_t = static_cast<MultisigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deleteFrame(); break;
        case 2: _t->pasteText(); break;
        case 3: _t->commitMultisigTx(); break;
        case 4: _t->addressBookButtonReceiving(); break;
        case 5: _t->on_addAddressButton_clicked(); break;
        case 6: _t->on_addMultisigButton_clicked(); break;
        case 7: _t->on_addDestinationButton_clicked(); break;
        case 8: _t->on_createButton_clicked(); break;
        case 9: _t->on_addInputButton_clicked(); break;
        case 10: _t->on_addPrivKeyButton_clicked(); break;
        case 11: _t->on_signButton_clicked(); break;
        case 12: _t->on_pushButtonCoinControl_clicked(); break;
        case 13: _t->on_importAddressButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MultisigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MultisigDialog.data,
      qt_meta_data_MultisigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultisigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultisigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultisigDialog.stringdata0))
        return static_cast<void*>(const_cast< MultisigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MultisigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
