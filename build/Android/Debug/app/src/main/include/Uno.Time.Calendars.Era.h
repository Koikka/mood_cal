// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Source/Uno/Time/Calendars/Era.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// public sealed class Era
// {
uType* Era_typeof();
void Era__ctor__fn(Era* __this, uString* name);
void Era__New1_fn(uString* name, Era** __retval);
void Era__ToString_fn(Era* __this, uString** __retval);

struct Era : uObject
{
    static uSStrong<Era*> Common_;
    static uSStrong<Era*>& Common() { return Era_typeof()->Init(), Common_; }
    static uSStrong<Era*> BeforeCommon_;
    static uSStrong<Era*>& BeforeCommon() { return Era_typeof()->Init(), BeforeCommon_; }
    static uSStrong<Era*> AnnoMartyrum_;
    static uSStrong<Era*>& AnnoMartyrum() { return Era_typeof()->Init(), AnnoMartyrum_; }
    static uSStrong<Era*> AnnoHegirae_;
    static uSStrong<Era*>& AnnoHegirae() { return Era_typeof()->Init(), AnnoHegirae_; }
    static uSStrong<Era*> AnnoMundi_;
    static uSStrong<Era*>& AnnoMundi() { return Era_typeof()->Init(), AnnoMundi_; }
    static uSStrong<Era*> AnnoPersico_;
    static uSStrong<Era*>& AnnoPersico() { return Era_typeof()->Init(), AnnoPersico_; }
    uStrong<uString*> _name;

    void ctor_(uString* name);
    static Era* New1(uString* name);
};
// }

}}}} // ::g::Uno::Time::Calendars
