// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Gestures/1.12.0/Clicked.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Clicked
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof();
void Clicked__ctor_6_fn(Clicked* __this);
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__New2_fn(Clicked** __retval);
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* clickCount);
void Clicked__OnRooted_fn(Clicked* __this);
void Clicked__OnUnrooted_fn(Clicked* __this);

struct Clicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int32_t clickCount);
    static void AddHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static Clicked* New2();
};
// }

}}} // ::g::Fuse::Gestures
