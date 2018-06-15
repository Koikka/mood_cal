// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PhotoHandle.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhotoHandle;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class NativePhotoHandle :420
// {
struct NativePhotoHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
};

NativePhotoHandle_type* NativePhotoHandle_typeof();
void NativePhotoHandle__ctor_1_fn(NativePhotoHandle* __this, ::g::Java::Object* bitmap);
void NativePhotoHandle__get_Bitmap_fn(NativePhotoHandle* __this, ::g::Java::Object** __retval);
void NativePhotoHandle__Dispose_fn(NativePhotoHandle* __this);
void NativePhotoHandle__New1_fn(::g::Java::Object* bitmap, NativePhotoHandle** __retval);
void NativePhotoHandle__Recycle_fn(::g::Java::Object* bitmap);

struct NativePhotoHandle : ::g::Fuse::Controls::PhotoHandle
{
    uStrong< ::g::Java::Object*> _bitmap;

    void ctor_1(::g::Java::Object* bitmap);
    ::g::Java::Object* Bitmap();
    void Dispose();
    static NativePhotoHandle* New1(::g::Java::Object* bitmap);
    static void Recycle(::g::Java::Object* bitmap);
};
// }

}}}} // ::g::Fuse::Controls::Android
