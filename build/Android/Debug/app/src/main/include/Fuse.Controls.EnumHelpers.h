// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/EnumExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct EnumHelpers;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class EnumHelpers
// {
uClassType* EnumHelpers_typeof();
void EnumHelpers__As_fn(uType* __type, uString* str, uTRef __retval);
void EnumHelpers__AsString_fn(uType* __type, void* e, uString** __retval);

struct EnumHelpers : uObject
{
    template<class T>
    static T As(uType* __type, uString* str) { T __retval; return EnumHelpers__As_fn(__type, str, &__retval), __retval; }
    template<class T>
    static uString* AsString(uType* __type, T e) { uString* __retval; return EnumHelpers__AsString_fn(__type, uConstrain(__type->U(0), e), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
