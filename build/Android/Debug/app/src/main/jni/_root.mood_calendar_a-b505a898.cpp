// This file was generated based on '.uno/ux14/mood_calendar.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hamburger.h>
#include <_root.mood_calendar_a-b505a898.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class mood_calendar_accessor_Hamburger_IsOpen :1
// {
// static generated mood_calendar_accessor_Hamburger_IsOpen() :1
static void mood_calendar_accessor_Hamburger_IsOpen__cctor__fn(uType* __type)
{
    mood_calendar_accessor_Hamburger_IsOpen::Singleton_ = mood_calendar_accessor_Hamburger_IsOpen::New1();
    mood_calendar_accessor_Hamburger_IsOpen::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsOpen"*/]);
}

static void mood_calendar_accessor_Hamburger_IsOpen_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsOpen");
    ::TYPES[0] = ::g::Hamburger_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&mood_calendar_accessor_Hamburger_IsOpen::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mood_calendar_accessor_Hamburger_IsOpen::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* mood_calendar_accessor_Hamburger_IsOpen_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_accessor_Hamburger_IsOpen);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("mood_calendar_accessor_Hamburger_IsOpen", options);
    type->fp_build_ = mood_calendar_accessor_Hamburger_IsOpen_build;
    type->fp_ctor_ = (void*)mood_calendar_accessor_Hamburger_IsOpen__New1_fn;
    type->fp_cctor_ = mood_calendar_accessor_Hamburger_IsOpen__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))mood_calendar_accessor_Hamburger_IsOpen__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))mood_calendar_accessor_Hamburger_IsOpen__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))mood_calendar_accessor_Hamburger_IsOpen__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))mood_calendar_accessor_Hamburger_IsOpen__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))mood_calendar_accessor_Hamburger_IsOpen__get_SupportsOriginSetter_fn;
    return type;
}

// public generated mood_calendar_accessor_Hamburger_IsOpen() :1
void mood_calendar_accessor_Hamburger_IsOpen__ctor_1_fn(mood_calendar_accessor_Hamburger_IsOpen* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void mood_calendar_accessor_Hamburger_IsOpen__GetAsObject_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Hamburger*>(obj, ::TYPES[0/*Hamburger*/]))->IsOpen()), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void mood_calendar_accessor_Hamburger_IsOpen__get_Name_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = mood_calendar_accessor_Hamburger_IsOpen::_name_, void();
}

// public generated mood_calendar_accessor_Hamburger_IsOpen New() :1
void mood_calendar_accessor_Hamburger_IsOpen__New1_fn(mood_calendar_accessor_Hamburger_IsOpen** __retval)
{
    *__retval = mood_calendar_accessor_Hamburger_IsOpen::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void mood_calendar_accessor_Hamburger_IsOpen__get_PropertyType_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void mood_calendar_accessor_Hamburger_IsOpen__SetAsObject_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Hamburger*>(obj, ::TYPES[0/*Hamburger*/]))->SetIsOpen(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void mood_calendar_accessor_Hamburger_IsOpen__get_SupportsOriginSetter_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> mood_calendar_accessor_Hamburger_IsOpen::Singleton_;
::g::Uno::UX::Selector mood_calendar_accessor_Hamburger_IsOpen::_name_;

// public generated mood_calendar_accessor_Hamburger_IsOpen() [instance] :1
void mood_calendar_accessor_Hamburger_IsOpen::ctor_1()
{
    ctor_();
}

// public generated mood_calendar_accessor_Hamburger_IsOpen New() [static] :1
mood_calendar_accessor_Hamburger_IsOpen* mood_calendar_accessor_Hamburger_IsOpen::New1()
{
    mood_calendar_accessor_Hamburger_IsOpen* obj1 = (mood_calendar_accessor_Hamburger_IsOpen*)uNew(mood_calendar_accessor_Hamburger_IsOpen_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
