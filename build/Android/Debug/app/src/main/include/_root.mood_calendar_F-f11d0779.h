// This file was generated based on '.uno/ux14/mood_calendar.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mood_calendar_FuseVisual_IsEnabled_Property;}

namespace g{

// internal sealed class mood_calendar_FuseVisual_IsEnabled_Property :92
// {
::g::Uno::UX::Property1_type* mood_calendar_FuseVisual_IsEnabled_Property_typeof();
void mood_calendar_FuseVisual_IsEnabled_Property__ctor_3_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void mood_calendar_FuseVisual_IsEnabled_Property__Get1_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void mood_calendar_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, mood_calendar_FuseVisual_IsEnabled_Property** __retval);
void mood_calendar_FuseVisual_IsEnabled_Property__get_Object_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void mood_calendar_FuseVisual_IsEnabled_Property__Set1_fn(mood_calendar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct mood_calendar_FuseVisual_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static mood_calendar_FuseVisual_IsEnabled_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
