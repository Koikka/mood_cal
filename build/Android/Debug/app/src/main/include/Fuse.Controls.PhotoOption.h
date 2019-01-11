// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/PhotoOption.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class PhotoOption :10
// {
uType* PhotoOption_typeof();
void PhotoOption__ctor__fn(PhotoOption* __this);
void PhotoOption__From_fn(::g::Fuse::Scripting::Object* obj, uArray** __retval);

struct PhotoOption : uObject
{
    void ctor_();
    static uArray* From(::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Controls
