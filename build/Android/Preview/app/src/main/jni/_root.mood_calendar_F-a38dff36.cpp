// This file was generated based on /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/build/Android/Preview/cache/ux14/mood_calendar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mood_calendar_F-a38dff36.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mood_calendar_FuseElementsElement_Opacity_Property :29
// {
static void mood_calendar_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(mood_calendar_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mood_calendar_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mood_calendar_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = mood_calendar_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mood_calendar_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mood_calendar_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mood_calendar_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))mood_calendar_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public mood_calendar_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :32
void mood_calendar_FuseElementsElement_Opacity_Property__ctor_3_fn(mood_calendar_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :34
void mood_calendar_FuseElementsElement_Opacity_Property__Get1_fn(mood_calendar_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("mood_calendar_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public mood_calendar_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :32
void mood_calendar_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, mood_calendar_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = mood_calendar_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :33
void mood_calendar_FuseElementsElement_Opacity_Property__get_Object_fn(mood_calendar_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :35
void mood_calendar_FuseElementsElement_Opacity_Property__Set1_fn(mood_calendar_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("mood_calendar_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :36
void mood_calendar_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(mood_calendar_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public mood_calendar_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :32
void mood_calendar_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mood_calendar_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :32
mood_calendar_FuseElementsElement_Opacity_Property* mood_calendar_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    mood_calendar_FuseElementsElement_Opacity_Property* obj1 = (mood_calendar_FuseElementsElement_Opacity_Property*)uNew(mood_calendar_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
