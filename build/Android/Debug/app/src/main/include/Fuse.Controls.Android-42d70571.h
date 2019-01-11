// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/NativePhoto.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraPromise-1.h>
#include <Uno.IDisposable.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhoto__SavePromise;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class NativePhoto.SavePromise :235
// {
::g::Uno::Threading::Future_type* NativePhoto__SavePromise_typeof();
void NativePhoto__SavePromise__ctor_8_fn(NativePhoto__SavePromise* __this, ::g::Java::Object* byteArray);
void NativePhoto__SavePromise__New6_fn(::g::Java::Object* byteArray, NativePhoto__SavePromise** __retval);
void NativePhoto__SavePromise__OnException_fn(NativePhoto__SavePromise* __this, uString* message);
void NativePhoto__SavePromise__Save_fn(::g::Java::Object* byteArray, uDelegate* resolve, uDelegate* reject);

struct NativePhoto__SavePromise : ::g::Fuse::Controls::CameraPromise
{
    void ctor_8(::g::Java::Object* byteArray);
    void OnException(uString* message);
    static NativePhoto__SavePromise* New6(::g::Java::Object* byteArray);
    static void Save(::g::Java::Object* byteArray, uDelegate* resolve, uDelegate* reject);
};
// }

}}}} // ::g::Fuse::Controls::Android
