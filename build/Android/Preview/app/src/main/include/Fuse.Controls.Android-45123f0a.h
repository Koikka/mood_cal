// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PhotoOp-ba14e671.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera__AndroidPhotoOptionPromise;}}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoResolution;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class Camera.AndroidPhotoOptionPromise :129
// {
::g::Fuse::Controls::PhotoOptionPromise_type* Camera__AndroidPhotoOptionPromise_typeof();
void Camera__AndroidPhotoOptionPromise__ctor_8_fn(Camera__AndroidPhotoOptionPromise* __this, ::g::Fuse::Controls::Android::Camera* camera);
void Camera__AndroidPhotoOptionPromise__New5_fn(::g::Fuse::Controls::Android::Camera* camera, Camera__AndroidPhotoOptionPromise** __retval);
void Camera__AndroidPhotoOptionPromise__Visit1_fn(Camera__AndroidPhotoOptionPromise* __this, ::g::Fuse::Controls::PhotoResolution* photoResolution);

struct Camera__AndroidPhotoOptionPromise : ::g::Fuse::Controls::PhotoOptionPromise
{
    uStrong< ::g::Fuse::Controls::Android::Camera*> _camera;
    uStrong<uString*> _parameters;

    void ctor_8(::g::Fuse::Controls::Android::Camera* camera);
    static Camera__AndroidPhotoOptionPromise* New5(::g::Fuse::Controls::Android::Camera* camera);
};
// }

}}}} // ::g::Fuse::Controls::Android
