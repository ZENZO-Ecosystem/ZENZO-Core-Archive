/****************************************************************************
** Meta object code from reading C++ file 'pwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/pwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PWidget_t {
    QByteArrayData data[20];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PWidget_t qt_meta_stringdata_PWidget = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PWidget"
QT_MOC_LITERAL(1, 8, 7), // "message"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "title"
QT_MOC_LITERAL(4, 23, 4), // "body"
QT_MOC_LITERAL(5, 28, 5), // "style"
QT_MOC_LITERAL(6, 34, 5), // "bool*"
QT_MOC_LITERAL(7, 40, 3), // "ret"
QT_MOC_LITERAL(8, 44, 8), // "showHide"
QT_MOC_LITERAL(9, 53, 4), // "show"
QT_MOC_LITERAL(10, 58, 10), // "execDialog"
QT_MOC_LITERAL(11, 69, 8), // "QDialog*"
QT_MOC_LITERAL(12, 78, 6), // "dialog"
QT_MOC_LITERAL(13, 85, 4), // "xDiv"
QT_MOC_LITERAL(14, 90, 4), // "yDiv"
QT_MOC_LITERAL(15, 95, 11), // "changeTheme"
QT_MOC_LITERAL(16, 107, 12), // "isLightTheme"
QT_MOC_LITERAL(17, 120, 8), // "QString&"
QT_MOC_LITERAL(18, 129, 5), // "theme"
QT_MOC_LITERAL(19, 135, 13) // "onChangeTheme"

    },
    "PWidget\0message\0\0title\0body\0style\0"
    "bool*\0ret\0showHide\0show\0execDialog\0"
    "QDialog*\0dialog\0xDiv\0yDiv\0changeTheme\0"
    "isLightTheme\0QString&\0theme\0onChangeTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,
       1,    3,   63,    2, 0x26 /* Public | MethodCloned */,
       8,    1,   70,    2, 0x06 /* Public */,
      10,    3,   73,    2, 0x06 /* Public */,
      10,    2,   80,    2, 0x26 /* Public | MethodCloned */,
      10,    1,   85,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   88,    2, 0x09 /* Protected */,
      19,    2,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool, 0x80000000 | 11, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Bool, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Bool, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 17,   16,   18,

       0        // eod
};

void PWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PWidget *_t = static_cast<PWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->showHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->execDialog((*reinterpret_cast< QDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->execDialog((*reinterpret_cast< QDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->execDialog((*reinterpret_cast< QDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->onChangeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PWidget::*_t)(const QString & , const QString & , unsigned int , bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PWidget::message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PWidget::showHide)) {
                *result = 2;
                return;
            }
        }
        {
            typedef bool (PWidget::*_t)(QDialog * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PWidget::execDialog)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PWidget.data,
      qt_meta_data_PWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PWidget.stringdata0))
        return static_cast<void*>(const_cast< PWidget*>(this));
    if (!strcmp(_clname, "Runnable"))
        return static_cast< Runnable*>(const_cast< PWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PWidget::message(const QString & _t1, const QString & _t2, unsigned int _t3, bool * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void PWidget::showHide(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
bool PWidget::execDialog(QDialog * _t1, int _t2, int _t3)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
