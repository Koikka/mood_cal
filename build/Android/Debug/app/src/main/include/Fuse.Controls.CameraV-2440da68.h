// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/CameraViewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraInfo.h>
#include <Fuse.Controls.CameraPromise-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase__GetCameraInfoPromise;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class CameraViewBase.GetCameraInfoPromise :138
// {
::g::Uno::Threading::Future_type* CameraViewBase__GetCameraInfoPromise_typeof();
void CameraViewBase__GetCameraInfoPromise__ctor_8_fn(CameraViewBase__GetCameraInfoPromise* __this);
void CameraViewBase__GetCameraInfoPromise__New6_fn(CameraViewBase__GetCameraInfoPromise** __retval);
void CameraViewBase__GetCameraInfoPromise__OnCameraLoaded_fn(CameraViewBase__GetCameraInfoPromise* __this, uObject* camera);

struct CameraViewBase__GetCameraInfoPromise : ::g::Fuse::Controls::CameraPromise
{
    void ctor_8();
    void OnCameraLoaded(uObject* camera);
    static CameraViewBase__GetCameraInfoPromise* New6();
};
// }

}}} // ::g::Fuse::Controls
