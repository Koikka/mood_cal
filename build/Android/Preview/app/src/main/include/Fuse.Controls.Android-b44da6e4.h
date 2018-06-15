// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraPromise-1.h>
#include <Fuse.Controls.PhotoHandle.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhoto__PhotoHandlePromise;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class NativePhoto.PhotoHandlePromise :149
// {
::g::Uno::Threading::Future_type* NativePhoto__PhotoHandlePromise_typeof();
void NativePhoto__PhotoHandlePromise__ctor_8_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* byteArray);
void NativePhoto__PhotoHandlePromise__GetInputStream_fn(::g::Java::Object* byteArray, ::g::Java::Object** __retval);
void NativePhoto__PhotoHandlePromise__GetOrientationMatrix_fn(NativePhoto__PhotoHandlePromise* __this, int32_t* orientation, uArray** __retval);
void NativePhoto__PhotoHandlePromise__Load_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* byteArray, uArray* matrix, uDelegate* onResolve, uDelegate* onReject);
void NativePhoto__PhotoHandlePromise__New6_fn(::g::Java::Object* byteArray, NativePhoto__PhotoHandlePromise** __retval);
void NativePhoto__PhotoHandlePromise__OnReject_fn(NativePhoto__PhotoHandlePromise* __this, uString* msg);
void NativePhoto__PhotoHandlePromise__OnResolve_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* bitmap);

struct NativePhoto__PhotoHandlePromise : ::g::Fuse::Controls::CameraPromise
{
    void ctor_8(::g::Java::Object* byteArray);
    uArray* GetOrientationMatrix(int32_t orientation);
    void Load(::g::Java::Object* byteArray, uArray* matrix, uDelegate* onResolve, uDelegate* onReject);
    void OnReject(uString* msg);
    void OnResolve(::g::Java::Object* bitmap);
    static ::g::Java::Object* GetInputStream(::g::Java::Object* byteArray);
    static NativePhoto__PhotoHandlePromise* New6(::g::Java::Object* byteArray);
};
// }

}}}} // ::g::Fuse::Controls::Android
