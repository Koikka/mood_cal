// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/WhileBool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions-56de3533.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFalse;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFalse
// {
::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof();
void WhileFalse__ctor_8_fn(WhileFalse* __this);
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval);
void WhileFalse__New2_fn(WhileFalse** __retval);

struct WhileFalse : ::g::Fuse::Triggers::WhileBool
{
    void ctor_8();
    static WhileFalse* New2();
};
// }

}}} // ::g::Fuse::Triggers
