// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Nodes/1.12.0/Input/PointerEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerWhe-bba8a6d9.h>
#include <Fuse.Input.PointerWhe-c022b7e3.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerWheelMoved;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerWheelMoved
// {
::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof();
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this);
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args);
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval);

struct PointerWheelMoved : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerWheelMoved* New1();
};
// }

}}} // ::g::Fuse::Input
