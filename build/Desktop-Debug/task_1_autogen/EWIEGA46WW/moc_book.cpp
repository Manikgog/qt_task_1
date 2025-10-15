/****************************************************************************
** Meta object code from reading C++ file 'book.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../book.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'book.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Book_t {
    uint offsetsAndSizes[32];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[8];
    char stringdata3[1];
    char stringdata4[10];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[7];
    char stringdata12[7];
    char stringdata13[15];
    char stringdata14[9];
    char stringdata15[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Book_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Book_t qt_meta_stringdata_Book = {
    {
        QT_MOC_LITERAL(0, 4),  // "Book"
        QT_MOC_LITERAL(5, 9),  // "className"
        QT_MOC_LITERAL(15, 7),  // "setName"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 9),  // "book_name"
        QT_MOC_LITERAL(34, 15),  // "setPublishHouse"
        QT_MOC_LITERAL(50, 13),  // "publish_house"
        QT_MOC_LITERAL(64, 11),  // "setPageNums"
        QT_MOC_LITERAL(76, 8),  // "uint16_t"
        QT_MOC_LITERAL(85, 11),  // "page_number"
        QT_MOC_LITERAL(97, 9),  // "setAuthor"
        QT_MOC_LITERAL(107, 6),  // "author"
        QT_MOC_LITERAL(114, 6),  // "m_name"
        QT_MOC_LITERAL(121, 14),  // "m_publishHouse"
        QT_MOC_LITERAL(136, 8),  // "m_author"
        QT_MOC_LITERAL(145, 9)   // "m_pageNum"
    },
    "Book",
    "className",
    "setName",
    "",
    "book_name",
    "setPublishHouse",
    "publish_house",
    "setPageNums",
    "uint16_t",
    "page_number",
    "setAuthor",
    "author",
    "m_name",
    "m_publishHouse",
    "m_author",
    "m_pageNum"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Book[] = {

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
       5,    1,   43,    3, 0x02,    7 /* Public */,
       7,    1,   46,    3, 0x02,    9 /* Public */,
      10,    1,   49,    3, 0x02,   11 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00015003, uint(-1), 0,
      13, QMetaType::QString, 0x00015003, uint(-1), 0,
      14, QMetaType::QString, 0x00015003, uint(-1), 0,
      15, 0x80000000 | 8, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Book::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Book.offsetsAndSizes,
    qt_meta_data_Book,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Book_t,
        // property 'm_name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'm_publishHouse'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'm_author'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'm_pageNum'
        QtPrivate::TypeAndForceComplete<uint16_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Book, std::true_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPublishHouse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPageNums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'setAuthor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Book::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setPublishHouse((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setPageNums((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 3: _t->setAuthor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPublishHouse(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getAuthor(); break;
        case 3: *reinterpret_cast< uint16_t*>(_v) = _t->getPageNum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPublishHouse(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAuthor(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPageNums(*reinterpret_cast< uint16_t*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Book::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Book::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Book.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Book::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
