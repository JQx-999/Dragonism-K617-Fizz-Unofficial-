/****************************************************************************
** Meta object code from reading C++ file 'dragonism.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scripts/dragonism.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragonism.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10DragWorkerE_t {};
} // unnamed namespace

template <> constexpr inline auto DragWorker::qt_create_metaobjectdata<qt_meta_tag_ZN10DragWorkerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DragWorker",
        "scriptSuccess",
        "",
        "scriptError",
        "run"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scriptSuccess'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scriptError'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DragWorker, qt_meta_tag_ZN10DragWorkerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DragWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DragWorkerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DragWorkerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10DragWorkerE_t>.metaTypes,
    nullptr
} };

void DragWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DragWorker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scriptSuccess(); break;
        case 1: _t->scriptError(); break;
        case 2: _t->run(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DragWorker::*)()>(_a, &DragWorker::scriptSuccess, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DragWorker::*)()>(_a, &DragWorker::scriptError, 1))
            return;
    }
}

const QMetaObject *DragWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DragWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DragWorkerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DragWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DragWorker::scriptSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DragWorker::scriptError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN11DragWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto DragWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN11DragWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DragWrapper",
        "scriptSuccess",
        "",
        "scriptError",
        "runningChanged",
        "call",
        "m",
        "s",
        "b",
        "running"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scriptSuccess'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scriptError'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'runningChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'call'
        QtMocHelpers::MethodData<void(int, int, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'running'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DragWrapper, qt_meta_tag_ZN11DragWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DragWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11DragWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11DragWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11DragWrapperE_t>.metaTypes,
    nullptr
} };

void DragWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DragWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scriptSuccess(); break;
        case 1: _t->scriptError(); break;
        case 2: _t->runningChanged(); break;
        case 3: _t->call((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DragWrapper::*)()>(_a, &DragWrapper::scriptSuccess, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DragWrapper::*)()>(_a, &DragWrapper::scriptError, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DragWrapper::*)()>(_a, &DragWrapper::runningChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isRunning(); break;
        default: break;
        }
    }
}

const QMetaObject *DragWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DragWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11DragWrapperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DragWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DragWrapper::scriptSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DragWrapper::scriptError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DragWrapper::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
