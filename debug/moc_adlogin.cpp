/****************************************************************************
** Meta object code from reading C++ file 'adlogin.h'
**
** Created: Tue May 14 20:42:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adlogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_adLogin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_adLogin[] = {
    "adLogin\0\0on_loginButton_clicked()\0"
};

void adLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        adLogin *_t = static_cast<adLogin *>(_o);
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData adLogin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject adLogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_adLogin,
      qt_meta_data_adLogin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &adLogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *adLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *adLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_adLogin))
        return static_cast<void*>(const_cast< adLogin*>(this));
    return QDialog::qt_metacast(_clname);
}

int adLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE