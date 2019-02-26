/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[15];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 22), // "updateMyMasternodeInfo"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "strAlias"
QT_MOC_LITERAL(4, 48, 7), // "strAddr"
QT_MOC_LITERAL(5, 56, 12), // "CMasternode*"
QT_MOC_LITERAL(6, 69, 3), // "pmn"
QT_MOC_LITERAL(7, 73, 16), // "updateMyNodeList"
QT_MOC_LITERAL(8, 90, 6), // "fForce"
QT_MOC_LITERAL(9, 97, 15), // "showContextMenu"
QT_MOC_LITERAL(10, 113, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(11, 136, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(12, 162, 29), // "on_startMissingButton_clicked"
QT_MOC_LITERAL(13, 192, 48), // "on_tableWidgetMyMasternodes_i..."
QT_MOC_LITERAL(14, 241, 23) // "on_UpdateButton_clicked"

    },
    "MasternodeList\0updateMyMasternodeInfo\0"
    "\0strAlias\0strAddr\0CMasternode*\0pmn\0"
    "updateMyNodeList\0fForce\0showContextMenu\0"
    "on_startButton_clicked\0on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

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
       1,    3,   59,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< CMasternode*(*)>(_a[3]))); break;
        case 1: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateMyNodeList(); break;
        case 3: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->on_startButton_clicked(); break;
        case 5: _t->on_startAllButton_clicked(); break;
        case 6: _t->on_startMissingButton_clicked(); break;
        case 7: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 8: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
