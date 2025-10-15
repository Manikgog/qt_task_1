/****************************************************************************
** Meta object code from reading C++ file 'magazin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../magazin.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magazin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Magazin_t {
    uint offsetsAndSizes[24];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[8];
    char stringdata3[1];
    char stringdata4[16];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[7];
    char stringdata9[15];
    char stringdata10[11];
    char stringdata11[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Magazin_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Magazin_t qt_meta_stringdata_Magazin = {
    {
        QT_MOC_LITERAL(0, 7),  // "Magazin"
        QT_MOC_LITERAL(8, 9),  // "className"
        QT_MOC_LITERAL(18, 7),  // "setName"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 15),  // "setPublishHouse"
        QT_MOC_LITERAL(43, 11),  // "setPageNums"
        QT_MOC_LITERAL(55, 8),  // "uint16_t"
        QT_MOC_LITERAL(64, 11),  // "setIssueNum"
        QT_MOC_LITERAL(76, 6),  // "m_name"
        QT_MOC_LITERAL(83, 14),  // "m_publishHouse"
        QT_MOC_LITERAL(98, 10),  // "m_issueNum"
        QT_MOC_LITERAL(109, 9)   // "m_pageNum"
    },
    "Magazin",
    "className",
    "setName",
    "",
    "setPublishHouse",
    "setPageNums",
    "uint16_t",
    "setIssueNum",
    "m_name",
    "m_publishHouse",
    "m_issueNum",
    "m_pageNum"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Magazin[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       2,    1,   40,    3, 0x02,    5 /* Public */,
       4,    1,   43,    3, 0x02,    7 /* Public */,
       5,    1,   46,    3, 0x02,    9 /* Public */,
       7,    1,   49,    3, 0x02,   11 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, 0x80000000 | 6,    3,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00015003, uint(-1), 0,
       9, QMetaType::QString, 0x00015003, uint(-1), 0,
      10, 0x80000000 | 6, 0x0001500b, uint(-1), 0,
      11, 0x80000000 | 6, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Magazin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Magazin.offsetsAndSizes,
    qt_meta_data_Magazin,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Magazin_t,
        // property 'm_name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'm_publishHouse'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'm_issueNum'
        QtPrivate::TypeAndForceComplete<uint16_t, std::true_type>,
        // property 'm_pageNum'
        QtPrivate::TypeAndForceComplete<uint16_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Magazin, std::true_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPublishHouse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPageNums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'setIssueNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>
    >,
    nullptr
} };

void Magazin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Magazin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setPublishHouse((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setPageNums((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 3: _t->setIssueNum((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Magazin *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPublishHouse(); break;
        case 2: *reinterpret_cast< uint16_t*>(_v) = _t->getIssueNum(); break;
        case 3: *reinterpret_cast< uint16_t*>(_v) = _t->getPageNum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Magazin *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPublishHouse(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIssueNum(*reinterpret_cast< uint16_t*>(_v)); break;
        case 3: _t->setPageNums(*reinterpret_cast< uint16_t*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Magazin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Magazin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Magazin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Magazin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
