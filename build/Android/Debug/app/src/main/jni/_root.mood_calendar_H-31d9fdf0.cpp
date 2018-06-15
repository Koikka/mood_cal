// This file was generated based on '.uno/ux14/mood_calendar.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hamburger.h>
#include <_root.mood_calendar_H-31d9fdf0.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mood_calendar_Hamburger_IsOpen_Property :38
// {
static void mood_calendar_Hamburger_IsOpen_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Hamburger_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Hamburger*/], offsetof(mood_calendar_Hamburger_IsOpen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mood_calendar_Hamburger_IsOpen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_Hamburger_IsOpen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mood_calendar_Hamburger_IsOpen_Property", options);
    type->fp_build_ = mood_calendar_Hamburger_IsOpen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mood_calendar_Hamburger_IsOpen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mood_calendar_Hamburger_IsOpen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mood_calendar_Hamburger_IsOpen_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))mood_calendar_Hamburger_IsOpen_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public mood_calendar_Hamburger_IsOpen_Property(Hamburger obj, Uno.UX.Selector name) :41
void mood_calendar_Hamburger_IsOpen_Property__ctor_3_fn(mood_calendar_Hamburger_IsOpen_Property* __this, ::g::Hamburger* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :43
void mood_calendar_Hamburger_IsOpen_Property__Get1_fn(mood_calendar_Hamburger_IsOpen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Hamburger*>(obj, ::TYPES[0/*Hamburger*/]))->IsOpen(), void();
}

// public mood_calendar_Hamburger_IsOpen_Property New(Hamburger obj, Uno.UX.Selector name) :41
void mood_calendar_Hamburger_IsOpen_Property__New1_fn(::g::Hamburger* obj, ::g::Uno::UX::Selector* name, mood_calendar_Hamburger_IsOpen_Property** __retval)
{
    *__retval = mood_calendar_Hamburger_IsOpen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :42
void mood_calendar_Hamburger_IsOpen_Property__get_Object_fn(mood_calendar_Hamburger_IsOpen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :44
void mood_calendar_Hamburger_IsOpen_Property__Set1_fn(mood_calendar_Hamburger_IsOpen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Hamburger*>(obj, ::TYPES[0/*Hamburger*/]))->SetIsOpen(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :45
void mood_calendar_Hamburger_IsOpen_Property__get_SupportsOriginSetter_fn(mood_calendar_Hamburger_IsOpen_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public mood_calendar_Hamburger_IsOpen_Property(Hamburger obj, Uno.UX.Selector name) [instance] :41
void mood_calendar_Hamburger_IsOpen_Property::ctor_3(::g::Hamburger* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mood_calendar_Hamburger_IsOpen_Property New(Hamburger obj, Uno.UX.Selector name) [static] :41
mood_calendar_Hamburger_IsOpen_Property* mood_calendar_Hamburger_IsOpen_Property::New1(::g::Hamburger* obj, ::g::Uno::UX::Selector name)
{
    mood_calendar_Hamburger_IsOpen_Property* obj1 = (mood_calendar_Hamburger_IsOpen_Property*)uNew(mood_calendar_Hamburger_IsOpen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
