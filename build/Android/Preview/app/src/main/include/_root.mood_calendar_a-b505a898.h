// This file was generated based on /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/build/Android/Preview/cache/ux14/mood_calendar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mood_calendar_accessor_Hamburger_IsOpen;}

namespace g{

// internal sealed class mood_calendar_accessor_Hamburger_IsOpen :1
// {
::g::Uno::UX::PropertyAccessor_type* mood_calendar_accessor_Hamburger_IsOpen_typeof();
void mood_calendar_accessor_Hamburger_IsOpen__ctor_1_fn(mood_calendar_accessor_Hamburger_IsOpen* __this);
void mood_calendar_accessor_Hamburger_IsOpen__GetAsObject_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void mood_calendar_accessor_Hamburger_IsOpen__get_Name_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::Selector* __retval);
void mood_calendar_accessor_Hamburger_IsOpen__New1_fn(mood_calendar_accessor_Hamburger_IsOpen** __retval);
void mood_calendar_accessor_Hamburger_IsOpen__get_PropertyType_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, uType** __retval);
void mood_calendar_accessor_Hamburger_IsOpen__SetAsObject_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void mood_calendar_accessor_Hamburger_IsOpen__get_SupportsOriginSetter_fn(mood_calendar_accessor_Hamburger_IsOpen* __this, bool* __retval);

struct mood_calendar_accessor_Hamburger_IsOpen : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return mood_calendar_accessor_Hamburger_IsOpen_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return mood_calendar_accessor_Hamburger_IsOpen_typeof()->Init(), _name_; }

    void ctor_1();
    static mood_calendar_accessor_Hamburger_IsOpen* New1();
};
// }

} // ::g
