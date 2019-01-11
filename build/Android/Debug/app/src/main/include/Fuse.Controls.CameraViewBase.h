// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/CameraViewBase.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ICameraViewHost.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct CameraInfo;}}}
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase;}}}
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase__GetCameraInfoPromise;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class CameraViewBase :18
// {
struct CameraViewBase_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Controls::ICameraViewHost interface18;
};

CameraViewBase_type* CameraViewBase_typeof();
void CameraViewBase__get_Camera_fn(CameraViewBase* __this, uObject** __retval);
void CameraViewBase__get_CameraPromise_fn(CameraViewBase* __this, CameraViewBase__GetCameraInfoPromise** __retval);
void CameraViewBase__get_CameraView_fn(CameraViewBase* __this, uObject** __retval);
void CameraViewBase__capturePhoto_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__CapturePhoto_fn(CameraViewBase* __this, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__ConvertCameraFacing_fn(::g::Fuse::Scripting::Context* c, int32_t* cameraFacing, uObject** __retval);
void CameraViewBase__ConvertCameraInfo_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::CameraInfo* cameraInfo, uObject** __retval);
void CameraViewBase__ConvertCaptureMode_fn(::g::Fuse::Scripting::Context* c, int32_t* captureMode, uObject** __retval);
void CameraViewBase__ConvertFlashMode_fn(::g::Fuse::Scripting::Context* c, int32_t* flashMode, uObject** __retval);
void CameraViewBase__ConvertPhoto_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::Photo* pictureResult, uObject** __retval);
void CameraViewBase__ConvertPhotoOptions_fn(::g::Fuse::Scripting::Context* c, uArray* options, uObject** __retval);
void CameraViewBase__ConvertRecordingSession_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::RecordingSession* recordingSession, uObject** __retval);
void CameraViewBase__FuseControlsICameraViewHostOnCameraLoaded_fn(CameraViewBase* __this, uObject* camera);
void CameraViewBase__FuseControlsICameraViewHostOnError_fn(CameraViewBase* __this, ::g::Uno::Exception* e);
void CameraViewBase__getCameraInfo_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__GetCameraInfo_fn(CameraViewBase* __this, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__OnPhotoCaptured_fn(CameraViewBase* __this, ::g::Fuse::Controls::Photo* photo);
void CameraViewBase__OnPhotoCaptureStarted_fn(CameraViewBase* __this);
void CameraViewBase__OnUnrooted_fn(CameraViewBase* __this);
void CameraViewBase__add_PhotoCaptured_fn(CameraViewBase* __this, uDelegate* value);
void CameraViewBase__remove_PhotoCaptured_fn(CameraViewBase* __this, uDelegate* value);
void CameraViewBase__add_PhotoCaptureStarted_fn(CameraViewBase* __this, uDelegate* value);
void CameraViewBase__remove_PhotoCaptureStarted_fn(CameraViewBase* __this, uDelegate* value);
void CameraViewBase__get_PreviewStretchMode_fn(CameraViewBase* __this, int32_t* __retval);
void CameraViewBase__set_PreviewStretchMode_fn(CameraViewBase* __this, int32_t* value);
void CameraViewBase__PushPropertiesToNativeView_fn(CameraViewBase* __this);
void CameraViewBase__RejectNotRooted_fn(CameraViewBase* __this, uType* __type, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__setCameraFacing_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__SetCameraFacing_fn(CameraViewBase* __this, int32_t* facing, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__setCaptureMode_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__SetCaptureMode_fn(CameraViewBase* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__setFlashMode_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__SetFlashMode_fn(CameraViewBase* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__setPhotoOptions_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__SetPhotoOptions_fn(CameraViewBase* __this, uArray* options, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__startRecording_fn(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraViewBase__StartRecording_fn(CameraViewBase* __this, ::g::Uno::Threading::Future1** __retval);

struct CameraViewBase : ::g::Fuse::Controls::LayoutControl
{
    int32_t _previewStretchMode;
    uStrong<uObject*> _camera;
    uStrong<CameraViewBase__GetCameraInfoPromise*> _cameraPromise;
    uStrong<uDelegate*> PhotoCaptured1;
    uStrong<uDelegate*> PhotoCaptureStarted1;

    uObject* Camera();
    CameraViewBase__GetCameraInfoPromise* CameraPromise();
    uObject* CameraView();
    ::g::Uno::Threading::Future1* CapturePhoto();
    ::g::Uno::Threading::Future1* GetCameraInfo();
    void OnPhotoCaptured(::g::Fuse::Controls::Photo* photo);
    void OnPhotoCaptureStarted();
    void add_PhotoCaptured(uDelegate* value);
    void remove_PhotoCaptured(uDelegate* value);
    void add_PhotoCaptureStarted(uDelegate* value);
    void remove_PhotoCaptureStarted(uDelegate* value);
    int32_t PreviewStretchMode();
    void PreviewStretchMode(int32_t value);
    ::g::Uno::Threading::Future1* RejectNotRooted(uType* __type);
    ::g::Uno::Threading::Future1* SetCameraFacing(int32_t facing);
    ::g::Uno::Threading::Future1* SetCaptureMode(int32_t mode);
    ::g::Uno::Threading::Future1* SetFlashMode(int32_t mode);
    ::g::Uno::Threading::Future1* SetPhotoOptions(uArray* options);
    ::g::Uno::Threading::Future1* StartRecording();
    static ::g::Uno::Threading::Future1* capturePhoto(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static uObject* ConvertCameraFacing(::g::Fuse::Scripting::Context* c, int32_t cameraFacing);
    static uObject* ConvertCameraInfo(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::CameraInfo* cameraInfo);
    static uObject* ConvertCaptureMode(::g::Fuse::Scripting::Context* c, int32_t captureMode);
    static uObject* ConvertFlashMode(::g::Fuse::Scripting::Context* c, int32_t flashMode);
    static uObject* ConvertPhoto(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::Photo* pictureResult);
    static uObject* ConvertPhotoOptions(::g::Fuse::Scripting::Context* c, uArray* options);
    static uObject* ConvertRecordingSession(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::RecordingSession* recordingSession);
    static ::g::Uno::Threading::Future1* getCameraInfo(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static ::g::Uno::Threading::Future1* setCameraFacing(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static ::g::Uno::Threading::Future1* setCaptureMode(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static ::g::Uno::Threading::Future1* setFlashMode(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static ::g::Uno::Threading::Future1* setPhotoOptions(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
    static ::g::Uno::Threading::Future1* startRecording(::g::Fuse::Scripting::Context* context, CameraViewBase* self, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
