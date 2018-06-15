// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ICamera.h>
#include <Fuse.Controls.ICameraView.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraView;}}}}
namespace g{namespace Fuse{namespace Controls{struct CameraInfo;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class CameraView :21
// {
struct CameraView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::ICameraView interface2;
    ::g::Fuse::Controls::ICamera interface3;
};

CameraView_type* CameraView_typeof();
void CameraView__CleanupCamera_fn(CameraView* __this);
void CameraView__Dispose_fn(CameraView* __this);
void CameraView__FuseControlsICameraCapturePhoto_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraGetCameraInfo_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraSetCameraFacing_fn(CameraView* __this, int32_t* facing, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraSetCaptureMode_fn(CameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraSetFlashMode_fn(CameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraSetPhotoOptions_fn(CameraView* __this, uArray* options, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraStartRecording_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval);
void CameraView__FuseControlsICameraViewset_PreviewStretchMode_fn(CameraView* __this, int32_t* value);
void CameraView__LoadCamera_fn(CameraView* __this, int32_t* facing);
void CameraView__OnCameraLoaded_fn(CameraView* __this, ::g::Fuse::Controls::Android::Camera* camera);
void CameraView__OnCameraRejected_fn(CameraView* __this, ::g::Uno::Exception* e);
void CameraView__OnEnteringBackground_fn(CameraView* __this, int32_t* s);
void CameraView__OnEnteringForeground_fn(CameraView* __this, int32_t* s);
void CameraView__Reject_fn(CameraView* __this, uType* __type, uString* message, ::g::Uno::Threading::Future1** __retval);
void CameraView__ResetCaptureState_fn(CameraView* __this);

struct CameraView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong<uObject*> _host;
    bool _inForeground;
    uStrong< ::g::Uno::Threading::Future1*> _cameraFuture;
    bool _isLoading;
    int32_t _lastCameraFacing;
    uStrong< ::g::Fuse::Controls::Android::Camera*> _camera;
    int32_t _previewStretchMode;
    int32_t _captureState;
    int32_t _captureMode;
    bool _isDisposed;

    void CleanupCamera();
    void LoadCamera(int32_t facing);
    void OnCameraLoaded(::g::Fuse::Controls::Android::Camera* camera);
    void OnCameraRejected(::g::Uno::Exception* e);
    void OnEnteringBackground(int32_t s);
    void OnEnteringForeground(int32_t s);
    ::g::Uno::Threading::Future1* Reject(uType* __type, uString* message);
    void ResetCaptureState();
};
// }

}}}} // ::g::Fuse::Controls::Android
