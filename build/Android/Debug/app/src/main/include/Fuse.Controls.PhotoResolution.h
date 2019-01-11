// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/PhotoOption.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PhotoOption.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoResolution;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PhotoResolution :28
// {
uType* PhotoResolution_typeof();
void PhotoResolution__ctor_1_fn(PhotoResolution* __this, int32_t* width, int32_t* height);
void PhotoResolution__From1_fn(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Controls::PhotoOption** __retval);
void PhotoResolution__New1_fn(int32_t* width, int32_t* height, PhotoResolution** __retval);

struct PhotoResolution : ::g::Fuse::Controls::PhotoOption
{
    int32_t Width;
    int32_t Height;

    void ctor_1(int32_t width, int32_t height);
    static ::g::Fuse::Controls::PhotoOption* From1(::g::Fuse::Scripting::Object* obj);
    static PhotoResolution* New1(int32_t width, int32_t height);
};
// }

}}} // ::g::Fuse::Controls
