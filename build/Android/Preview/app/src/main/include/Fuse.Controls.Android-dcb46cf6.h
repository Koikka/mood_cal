// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraInfo.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraView;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraView__GetCameraInfoClosure;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class CameraView.GetCameraInfoClosure :247
// {
::g::Uno::Threading::Future_type* CameraView__GetCameraInfoClosure_typeof();
void CameraView__GetCameraInfoClosure__ctor_7_fn(CameraView__GetCameraInfoClosure* __this, ::g::Fuse::Controls::Android::CameraView* cameraView);
void CameraView__GetCameraInfoClosure__New5_fn(::g::Fuse::Controls::Android::CameraView* cameraView, CameraView__GetCameraInfoClosure** __retval);
void CameraView__GetCameraInfoClosure__OnReject_fn(CameraView__GetCameraInfoClosure* __this, ::g::Uno::Exception* e);
void CameraView__GetCameraInfoClosure__OnResolve_fn(CameraView__GetCameraInfoClosure* __this, ::g::Fuse::Controls::Android::Camera* camera);

struct CameraView__GetCameraInfoClosure : ::g::Uno::Threading::Promise
{
    uStrong< ::g::Fuse::Controls::Android::CameraView*> _cameraView;

    void ctor_7(::g::Fuse::Controls::Android::CameraView* cameraView);
    void OnReject(::g::Uno::Exception* e);
    void OnResolve(::g::Fuse::Controls::Android::Camera* camera);
    static CameraView__GetCameraInfoClosure* New5(::g::Fuse::Controls::Android::CameraView* cameraView);
};
// }

}}}} // ::g::Fuse::Controls::Android
