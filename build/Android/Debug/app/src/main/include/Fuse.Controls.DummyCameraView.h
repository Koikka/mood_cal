// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/CameraViewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ICamera.h>
#include <Fuse.Controls.ICameraView.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct CameraInfo;}}}
namespace g{namespace Fuse{namespace Controls{struct DummyCameraView;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class DummyCameraView :215
// {
struct DummyCameraView_type : uType
{
    ::g::Fuse::Controls::ICameraView interface0;
    ::g::Fuse::Controls::ICamera interface1;
};

DummyCameraView_type* DummyCameraView_typeof();
void DummyCameraView__ctor__fn(DummyCameraView* __this);
void DummyCameraView__CapturePhoto_fn(DummyCameraView* __this, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__GetCameraInfo_fn(DummyCameraView* __this, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__New1_fn(DummyCameraView** __retval);
void DummyCameraView__set_PreviewStretchMode_fn(DummyCameraView* __this, int32_t* value);
void DummyCameraView__Reject_fn(DummyCameraView* __this, uType* __type, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__SetCameraFacing_fn(DummyCameraView* __this, int32_t* facing, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__SetCaptureMode_fn(DummyCameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__SetFlashMode_fn(DummyCameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__SetPhotoOptions_fn(DummyCameraView* __this, uArray* options, ::g::Uno::Threading::Future1** __retval);
void DummyCameraView__StartRecording_fn(DummyCameraView* __this, ::g::Uno::Threading::Future1** __retval);

struct DummyCameraView : uObject
{
    static uSStrong<DummyCameraView*> Instance_;
    static uSStrong<DummyCameraView*>& Instance() { return DummyCameraView_typeof()->Init(), Instance_; }

    void ctor_();
    ::g::Uno::Threading::Future1* CapturePhoto();
    ::g::Uno::Threading::Future1* GetCameraInfo();
    void PreviewStretchMode(int32_t value);
    ::g::Uno::Threading::Future1* Reject(uType* __type);
    ::g::Uno::Threading::Future1* SetCameraFacing(int32_t facing);
    ::g::Uno::Threading::Future1* SetCaptureMode(int32_t mode);
    ::g::Uno::Threading::Future1* SetFlashMode(int32_t mode);
    ::g::Uno::Threading::Future1* SetPhotoOptions(uArray* options);
    ::g::Uno::Threading::Future1* StartRecording();
    static DummyCameraView* New1();
};
// }

}}} // ::g::Fuse::Controls
