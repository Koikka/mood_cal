// This file was generated based on '.uno/ux14/mood_calendar.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mood_calendar_F-b7100a81.h>
#include <Fuse.Controls.Panel.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mood_calendar_FuseControlsPanel_Color_Property :74
// {
static void mood_calendar_FuseControlsPanel_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Panel*/], offsetof(mood_calendar_FuseControlsPanel_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mood_calendar_FuseControlsPanel_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_FuseControlsPanel_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mood_calendar_FuseControlsPanel_Color_Property", options);
    type->fp_build_ = mood_calendar_FuseControlsPanel_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mood_calendar_FuseControlsPanel_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mood_calendar_FuseControlsPanel_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mood_calendar_FuseControlsPanel_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))mood_calendar_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public mood_calendar_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :77
void mood_calendar_FuseControlsPanel_Color_Property__ctor_3_fn(mood_calendar_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :79
void mood_calendar_FuseControlsPanel_Color_Property__Get1_fn(mood_calendar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[0/*Fuse.Controls.Panel*/]))->Color(), void();
}

// public mood_calendar_FuseControlsPanel_Color_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :77
void mood_calendar_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, mood_calendar_FuseControlsPanel_Color_Property** __retval)
{
    *__retval = mood_calendar_FuseControlsPanel_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :78
void mood_calendar_FuseControlsPanel_Color_Property__get_Object_fn(mood_calendar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :80
void mood_calendar_FuseControlsPanel_Color_Property__Set1_fn(mood_calendar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[0/*Fuse.Controls.Panel*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :81
void mood_calendar_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(mood_calendar_FuseControlsPanel_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public mood_calendar_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :77
void mood_calendar_FuseControlsPanel_Color_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mood_calendar_FuseControlsPanel_Color_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :77
mood_calendar_FuseControlsPanel_Color_Property* mood_calendar_FuseControlsPanel_Color_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    mood_calendar_FuseControlsPanel_Color_Property* obj1 = (mood_calendar_FuseControlsPanel_Color_Property*)uNew(mood_calendar_FuseControlsPanel_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
