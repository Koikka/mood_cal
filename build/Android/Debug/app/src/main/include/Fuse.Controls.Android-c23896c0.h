// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/CameraView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraFacing.h>
#include <Fuse.Controls.CameraPromise-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraView__SetCameraFacingClosure;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class CameraView.SetCameraFacingClosure :196
// {
::g::Uno::Threading::Future_type* CameraView__SetCameraFacingClosure_typeof();
void CameraView__SetCameraFacingClosure__ctor_8_fn(CameraView__SetCameraFacingClosure* __this, int32_t* cameraFacing);
void CameraView__SetCameraFacingClosure__New6_fn(int32_t* cameraFacing, CameraView__SetCameraFacingClosure** __retval);
void CameraView__SetCameraFacingClosure__OnReject_fn(CameraView__SetCameraFacingClosure* __this, ::g::Uno::Exception* e);
void CameraView__SetCameraFacingClosure__OnResolve_fn(CameraView__SetCameraFacingClosure* __this, ::g::Fuse::Controls::Android::Camera* camera);

struct CameraView__SetCameraFacingClosure : ::g::Fuse::Controls::CameraPromise
{
    int32_t _cameraFacing;

    void ctor_8(int32_t cameraFacing);
    void OnReject(::g::Uno::Exception* e);
    void OnResolve(::g::Fuse::Controls::Android::Camera* camera);
    static CameraView__SetCameraFacingClosure* New6(int32_t cameraFacing);
};
// }

}}}} // ::g::Fuse::Controls::Android
