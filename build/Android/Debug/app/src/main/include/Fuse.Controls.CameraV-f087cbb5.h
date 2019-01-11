// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/CameraViewBase.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PhotoOption.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase;}}}
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase__SetPhotoOptionsClosure;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class CameraViewBase.SetPhotoOptionsClosure :218
// {
::g::Uno::Threading::Future_type* CameraViewBase__SetPhotoOptionsClosure_typeof();
void CameraViewBase__SetPhotoOptionsClosure__ctor_7_fn(CameraViewBase__SetPhotoOptionsClosure* __this, uArray* options, ::g::Fuse::Controls::CameraViewBase* cameraViewBase);
void CameraViewBase__SetPhotoOptionsClosure__Dispatch_fn(CameraViewBase__SetPhotoOptionsClosure* __this);
void CameraViewBase__SetPhotoOptionsClosure__New5_fn(uArray* options, ::g::Fuse::Controls::CameraViewBase* cameraViewBase, CameraViewBase__SetPhotoOptionsClosure** __retval);

struct CameraViewBase__SetPhotoOptionsClosure : ::g::Uno::Threading::Promise
{
    uStrong< ::g::Fuse::Controls::CameraViewBase*> _cameraViewBase;
    uStrong<uArray*> _options;

    void ctor_7(uArray* options, ::g::Fuse::Controls::CameraViewBase* cameraViewBase);
    void Dispatch();
    static CameraViewBase__SetPhotoOptionsClosure* New5(uArray* options, ::g::Fuse::Controls::CameraViewBase* cameraViewBase);
};
// }

}}} // ::g::Fuse::Controls
