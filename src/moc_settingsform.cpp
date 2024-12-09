/****************************************************************************
** Meta object code from reading C++ file 'settingsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "settingsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsForm_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsForm_t qt_meta_stringdata_SettingsForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsForm"
QT_MOC_LITERAL(1, 13, 13), // "settingsSaved"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(4, 50, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(5, 72, 22), // "on_enableSound_toggled"
QT_MOC_LITERAL(6, 95, 7) // "checked"

    },
    "SettingsForm\0settingsSaved\0\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_enableSound_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void SettingsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsSaved(); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_enableSound_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsForm::settingsSaved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SettingsForm.data,
    qt_meta_data_SettingsForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SettingsForm::settingsSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
