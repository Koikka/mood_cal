// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/NativePhoto.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraPromise-1.h>
#include <Uno.IDisposable.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhoto__SaveThumbnailPromise;}}}}
namespace g{namespace Fuse{namespace Controls{struct ThumbnailSizeHint;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class NativePhoto.SaveThumbnailPromise :277
// {
::g::Uno::Threading::Future_type* NativePhoto__SaveThumbnailPromise_typeof();
void NativePhoto__SaveThumbnailPromise__ctor_8_fn(NativePhoto__SaveThumbnailPromise* __this, ::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint);
void NativePhoto__SaveThumbnailPromise__GetAndroidOrientation_fn(::g::Java::Object* bytes, int32_t* __retval);
void NativePhoto__SaveThumbnailPromise__New6_fn(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint, NativePhoto__SaveThumbnailPromise** __retval);
void NativePhoto__SaveThumbnailPromise__OnReject_fn(NativePhoto__SaveThumbnailPromise* __this, uString* msg);
void NativePhoto__SaveThumbnailPromise__RunAsync_fn(uDelegate* callback);
void NativePhoto__SaveThumbnailPromise__SaveThumbnail_fn(NativePhoto__SaveThumbnailPromise* __this);
void NativePhoto__SaveThumbnailPromise__SaveThumbnail1_fn(::g::Java::Object* byteArray, int32_t* exifOrientation, uDelegate* resolve, uDelegate* reject, bool* useHint, float* widthHint, float* heightHint);

struct NativePhoto__SaveThumbnailPromise : ::g::Fuse::Controls::CameraPromise
{
    uStrong< ::g::Java::Object*> _byteArray;
    uStrong< ::g::Fuse::Controls::ThumbnailSizeHint*> _thumbnailSizeHint;

    void ctor_8(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint);
    void OnReject(uString* msg);
    void SaveThumbnail();
    static int32_t GetAndroidOrientation(::g::Java::Object* bytes);
    static NativePhoto__SaveThumbnailPromise* New6(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint);
    static void RunAsync(uDelegate* callback);
    static void SaveThumbnail1(::g::Java::Object* byteArray, int32_t exifOrientation, uDelegate* resolve, uDelegate* reject, bool useHint, float widthHint, float heightHint);
};
// }

}}}} // ::g::Fuse::Controls::Android
