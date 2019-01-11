// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraPromise-1.h>
#include <Fuse.Controls.Photo.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera__PicturePromise;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class Camera.PicturePromise :107
// {
::g::Uno::Threading::Future_type* Camera__PicturePromise_typeof();
void Camera__PicturePromise__ctor_8_fn(Camera__PicturePromise* __this);
void Camera__PicturePromise__New6_fn(Camera__PicturePromise** __retval);
void Camera__PicturePromise__OnReject_fn(Camera__PicturePromise* __this, uString* exceptionMessage);
void Camera__PicturePromise__OnResolve_fn(Camera__PicturePromise* __this, ::g::Java::Object* bytesArray);

struct Camera__PicturePromise : ::g::Fuse::Controls::CameraPromise
{
    void ctor_8();
    void OnReject(uString* exceptionMessage);
    void OnResolve(::g::Java::Object* bytesArray);
    static Camera__PicturePromise* New6();
};
// }

}}}} // ::g::Fuse::Controls::Android
