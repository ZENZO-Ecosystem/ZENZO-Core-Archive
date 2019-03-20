/****************************************************************************
** Meta object code from reading C++ file 'bitcoinaddressvalidator.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoinaddressvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoinaddressvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinAddressEntryValidator_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinAddressEntryValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinAddressEntryValidator_t qt_meta_stringdata_BitcoinAddressEntryValidator = {
    {
QT_MOC_LITERAL(0, 0, 28) // "BitcoinAddressEntryValidator"

    },
    "BitcoinAddressEntryValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinAddressEntryValidator[] = {

 // content:
       7,       // revision
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

void BitcoinAddressEntryValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BitcoinAddressEntryValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_BitcoinAddressEntryValidator.data,
      qt_meta_data_BitcoinAddressEntryValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinAddressEntryValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinAddressEntryValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinAddressEntryValidator.stringdata0))
        return static_cast<void*>(const_cast< BitcoinAddressEntryValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int BitcoinAddressEntryValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_BitcoinAddressCheckValidator_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinAddressCheckValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinAddressCheckValidator_t qt_meta_stringdata_BitcoinAddressCheckValidator = {
    {
QT_MOC_LITERAL(0, 0, 28) // "BitcoinAddressCheckValidator"

    },
    "BitcoinAddressCheckValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinAddressCheckValidator[] = {

 // content:
       7,       // revision
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

void BitcoinAddressCheckValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BitcoinAddressCheckValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_BitcoinAddressCheckValidator.data,
      qt_meta_data_BitcoinAddressCheckValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinAddressCheckValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinAddressCheckValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinAddressCheckValidator.stringdata0))
        return static_cast<void*>(const_cast< BitcoinAddressCheckValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int BitcoinAddressCheckValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
