/****************************************************************************
** Meta object code from reading C++ file 'BoxSliderConnector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/tradr-loc-map-nav/path_planner_rviz_wp_plugin/include/BoxSliderConnector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoxSliderConnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BoxSliderConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   19,   20,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   48,   19,   19, 0x0a,
      71,   48,   19,   19, 0x09,
      92,   48,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BoxSliderConnector[] = {
    "BoxSliderConnector\0\0double\0"
    "ValueChanged(double)\0value\0SetValue(double)\0"
    "UpdateSlider(double)\0UpdateBox(int)\0"
};

void BoxSliderConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BoxSliderConnector *_t = static_cast<BoxSliderConnector *>(_o);
        switch (_id) {
        case 0: { double _r = _t->ValueChanged((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 1: _t->SetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->UpdateSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->UpdateBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BoxSliderConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BoxSliderConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BoxSliderConnector,
      qt_meta_data_BoxSliderConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BoxSliderConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BoxSliderConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BoxSliderConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoxSliderConnector))
        return static_cast<void*>(const_cast< BoxSliderConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int BoxSliderConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
double BoxSliderConnector::ValueChanged(double _t1)
{
    double _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
