// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/NativePhoto.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Photo.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhoto;}}}}
namespace g{namespace Fuse{namespace Controls{struct ThumbnailSizeHint;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class NativePhoto :18
// {
::g::Fuse::Controls::Photo_type* NativePhoto_typeof();
void NativePhoto__ctor_1_fn(NativePhoto* __this, ::g::Java::Object* byteArray);
void NativePhoto__GetInputStream_fn(::g::Java::Object* byteArray, ::g::Java::Object** __retval);
void NativePhoto__New1_fn(::g::Java::Object* byteArray, NativePhoto** __retval);
void NativePhoto__Release_fn(NativePhoto* __this);
void NativePhoto__Save_fn(NativePhoto* __this, ::g::Uno::Threading::Future1** __retval);
void NativePhoto__SaveThumbnail_fn(NativePhoto* __this, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint, ::g::Uno::Threading::Future1** __retval);

struct NativePhoto : ::g::Fuse::Controls::Photo
{
    uStrong< ::g::Java::Object*> _byteArray;

    void ctor_1(::g::Java::Object* byteArray);
    static ::g::Java::Object* GetInputStream(::g::Java::Object* byteArray);
    static NativePhoto* New1(::g::Java::Object* byteArray);
};
// }

}}}} // ::g::Fuse::Controls::Android
