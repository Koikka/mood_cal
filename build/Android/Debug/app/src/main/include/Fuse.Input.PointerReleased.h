// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Nodes/1.12.0/Input/PointerEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerRel-561bb5f8.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerReleased;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerReleased
// {
::g::Fuse::VisualEvent_type* PointerReleased_typeof();
void PointerReleased__ctor_1_fn(PointerReleased* __this);
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void PointerReleased__New1_fn(PointerReleased** __retval);

struct PointerReleased : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerReleased* New1();
};
// }

}}} // ::g::Fuse::Input
