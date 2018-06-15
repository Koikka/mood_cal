// This file was generated based on /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/build/Android/Preview/cache/ux14/mood_calendar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mood_calendar_F-f11d0779.h>
#include <Fuse.Visual.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mood_calendar_FuseVisual_IsEnabled_Property :83
// {
static void mood_calendar_FuseVisual_IsEnabled_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Visual*/], offsetof(mood_calendar_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mood_calendar_FuseVisual_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_FuseVisual_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mood_calendar_FuseVisual_IsEnabled_Property", options);
    type->fp_build_ = mood_calendar_FuseVisual_IsEnabled_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mood_calendar_FuseVisual_IsEnabled_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mood_calendar_FuseVisual_IsEnabled_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mood_calendar_FuseVisual_IsEnabled_Property__Set1_fn;
    return type;
}

// public mood_calendar_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) :86
void mood_calendar_FuseVisual_IsEnabled_Property__ctor_3_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :88
void mood_calendar_FuseVisual_IsEnabled_Property__Get1_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("mood_calendar_FuseVisual_IsEnabled_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[0/*Fuse.Visual*/]))->IsEnabled(), void();
}

// public mood_calendar_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) :86
void mood_calendar_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, mood_calendar_FuseVisual_IsEnabled_Property** __retval)
{
    *__retval = mood_calendar_FuseVisual_IsEnabled_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :87
void mood_calendar_FuseVisual_IsEnabled_Property__get_Object_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :89
void mood_calendar_FuseVisual_IsEnabled_Property__Set1_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("mood_calendar_FuseVisual_IsEnabled_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[0/*Fuse.Visual*/]))->IsEnabled(v_);
}

// public mood_calendar_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) [instance] :86
void mood_calendar_FuseVisual_IsEnabled_Property::ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mood_calendar_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) [static] :86
mood_calendar_FuseVisual_IsEnabled_Property* mood_calendar_FuseVisual_IsEnabled_Property::New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    mood_calendar_FuseVisual_IsEnabled_Property* obj1 = (mood_calendar_FuseVisual_IsEnabled_Property*)uNew(mood_calendar_FuseVisual_IsEnabled_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
