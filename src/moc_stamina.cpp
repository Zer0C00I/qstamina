/****************************************************************************
** Meta object code from reading C++ file 'stamina.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stamina.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stamina.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Stamina_t {
    QByteArrayData data[11];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stamina_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stamina_t qt_meta_stringdata_Stamina = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Stamina"
QT_MOC_LITERAL(1, 8, 13), // "lessonChoosed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 22), // "generatedlessonChoosed"
QT_MOC_LITERAL(4, 46, 13), // "layoutChoosed"
QT_MOC_LITERAL(5, 60, 7), // "timeout"
QT_MOC_LITERAL(6, 68, 22), // "on_pushButton_released"
QT_MOC_LITERAL(7, 91, 14), // "aboutTriggered"
QT_MOC_LITERAL(8, 106, 17), // "settingsTriggered"
QT_MOC_LITERAL(9, 124, 13), // "settingsSaved"
QT_MOC_LITERAL(10, 138, 18) // "generatorTriggered"

    },
    "Stamina\0lessonChoosed\0\0generatedlessonChoosed\0"
    "layoutChoosed\0timeout\0on_pushButton_released\0"
    "aboutTriggered\0settingsTriggered\0"
    "settingsSaved\0generatorTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stamina[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void Stamina::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stamina *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lessonChoosed(); break;
        case 1: _t->generatedlessonChoosed(); break;
        case 2: _t->layoutChoosed(); break;
        case 3: _t->timeout(); break;
        case 4: _t->on_pushButton_released(); break;
        case 5: _t->aboutTriggered(); break;
        case 6: _t->settingsTriggered(); break;
        case 7: _t->settingsSaved(); break;
        case 8: _t->generatorTriggered(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Stamina::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Stamina.data,
    qt_meta_data_Stamina,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Stamina::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stamina::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stamina.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Stamina::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
