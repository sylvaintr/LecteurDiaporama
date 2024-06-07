/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lecteurDiaporama/lecteurvue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurvue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LecteurVue_t {
    const uint offsetsAndSize[30];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 24), // "afficherFenetreAProposDe"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 15), // "demanderQuitter"
QT_MOC_LITERAL(53, 15), // "demanderAvancer"
QT_MOC_LITERAL(69, 15), // "demanderReculer"
QT_MOC_LITERAL(85, 19), // "demanderAutomatique"
QT_MOC_LITERAL(105, 17), // "demanderAccelerer"
QT_MOC_LITERAL(123, 16), // "demanderRalentir"
QT_MOC_LITERAL(140, 25), // "demanderchangementvitesse"
QT_MOC_LITERAL(166, 13), // "demanderVider"
QT_MOC_LITERAL(180, 15), // "demanderChanger"
QT_MOC_LITERAL(196, 19), // "demanderAvancerAuto"
QT_MOC_LITERAL(216, 18), // "demanderChangerImg"
QT_MOC_LITERAL(235, 24) // "demanderChangerCheminImg"

    },
    "LecteurVue\0afficherFenetreAProposDe\0"
    "\0demanderQuitter\0demanderAvancer\0"
    "demanderReculer\0demanderAutomatique\0"
    "demanderAccelerer\0demanderRalentir\0"
    "demanderchangementvitesse\0demanderVider\0"
    "demanderChanger\0demanderAvancerAuto\0"
    "demanderChangerImg\0demanderChangerCheminImg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurVue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    0,   95,    2, 0x0a,    4 /* Public */,
       6,    0,   96,    2, 0x0a,    5 /* Public */,
       7,    0,   97,    2, 0x0a,    6 /* Public */,
       8,    0,   98,    2, 0x0a,    7 /* Public */,
       9,    0,   99,    2, 0x0a,    8 /* Public */,
      10,    0,  100,    2, 0x0a,    9 /* Public */,
      11,    0,  101,    2, 0x0a,   10 /* Public */,
      12,    0,  102,    2, 0x0a,   11 /* Public */,
      13,    0,  103,    2, 0x0a,   12 /* Public */,
      14,    0,  104,    2, 0x0a,   13 /* Public */,

 // slots: parameters
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

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurVue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->afficherFenetreAProposDe(); break;
        case 1: _t->demanderQuitter(); break;
        case 2: _t->demanderAvancer(); break;
        case 3: _t->demanderReculer(); break;
        case 4: _t->demanderAutomatique(); break;
        case 5: _t->demanderAccelerer(); break;
        case 6: _t->demanderRalentir(); break;
        case 7: _t->demanderchangementvitesse(); break;
        case 8: _t->demanderVider(); break;
        case 9: _t->demanderChanger(); break;
        case 10: _t->demanderAvancerAuto(); break;
        case 11: _t->demanderChangerImg(); break;
        case 12: _t->demanderChangerCheminImg(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject LecteurVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LecteurVue.offsetsAndSize,
    qt_meta_data_LecteurVue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LecteurVue_t
, QtPrivate::TypeAndForceComplete<LecteurVue, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LecteurVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LecteurVue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LecteurVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
