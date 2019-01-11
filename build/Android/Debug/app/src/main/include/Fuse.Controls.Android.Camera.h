// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class Camera :88
// {
::g::Fuse::Controls::Native::ViewHandle_type* Camera_typeof();
void Camera__ctor_4_fn(Camera* __this, ::g::Java::Object* cameraHandle, int32_t* cameraId, int32_t* facing);
void Camera__get_CameraHandle_fn(Camera* __this, ::g::Java::Object** __retval);
void Camera__set_CameraHandle_fn(Camera* __this, ::g::Java::Object* value);
void Camera__CapturePhoto_fn(Camera* __this, ::g::Uno::Threading::Future1** __retval);
void Camera__Create_fn(::g::Java::Object* camera, int32_t* cameraId, int32_t* maxWidth, int32_t* maxHeight, ::g::Java::Object** __retval);
void Camera__Dispose_fn(Camera* __this);
void Camera__Dispose1_fn(::g::Java::Object* handle);
void Camera__get_Facing_fn(Camera* __this, int32_t* __retval);
void Camera__set_Facing_fn(Camera* __this, int32_t* value);
void Camera__get_FlashMode_fn(Camera* __this, int32_t* __retval);
void Camera__set_FlashMode_fn(Camera* __this, int32_t* value);
void Camera__GetSupportedPictureSizes_fn(Camera* __this, ::g::Java::Object* camera, uArray* output);
void Camera__GetSupportedPictureSizesCount_fn(Camera* __this, ::g::Java::Object* camera, int32_t* __retval);
void Camera__New5_fn(::g::Java::Object* cameraHandle, int32_t* cameraId, int32_t* facing, Camera** __retval);
void Camera__get_PictureSizes_fn(Camera* __this, uArray** __retval);
void Camera__set_PreviewStretchMode_fn(Camera* __this, int32_t* value);
void Camera__Release_fn(::g::Java::Object* handle);
void Camera__RestoreParameters_fn(Camera* __this, uString* parameters);
void Camera__SaveParameters_fn(Camera* __this, uString** __retval);
void Camera__SetFlashMode_fn(Camera* __this, ::g::Java::Object* handle, uString* flashMode);
void Camera__SetPhotoOptions_fn(Camera* __this, uArray* options, ::g::Uno::Threading::Future1** __retval);
void Camera__SetPictureSize_fn(Camera* __this, int32_t* width, int32_t* height);
void Camera__SetRecordingSession_fn(Camera* __this, uObject* recordingSession);
void Camera__StartRecording_fn(Camera* __this, uDelegate* doneCallback, ::g::Uno::Threading::Future1** __retval);
void Camera__StartRecording1_fn(Camera* __this, uDelegate* resolve, uDelegate* reject);
void Camera__get_SupportedFlashModes_fn(Camera* __this, uArray** __retval);
void Camera__SupportsSize_fn(Camera* __this, ::g::Uno::Int2* size, bool* __retval);
void Camera__TakePicture_fn(Camera* __this, uDelegate* resolve, uDelegate* reject);
void Camera__UpdatePreviewStretchMode_fn(Camera* __this, bool* shouldFill);

struct Camera : ::g::Fuse::Controls::Native::ViewHandle
{
    int32_t _flashMode;
    uStrong<uObject*> _recordingSession;
    uStrong<uArray*> _pictureSizes;
    uStrong< ::g::Java::Object*> _CameraHandle;
    int32_t _Facing;

    void ctor_4(::g::Java::Object* cameraHandle, int32_t cameraId, int32_t facing);
    ::g::Java::Object* CameraHandle();
    void CameraHandle(::g::Java::Object* value);
    ::g::Uno::Threading::Future1* CapturePhoto();
    int32_t Facing();
    void Facing(int32_t value);
    int32_t FlashMode();
    void FlashMode(int32_t value);
    void GetSupportedPictureSizes(::g::Java::Object* camera, uArray* output);
    int32_t GetSupportedPictureSizesCount(::g::Java::Object* camera);
    uArray* PictureSizes();
    void PreviewStretchMode(int32_t value);
    void RestoreParameters(uString* parameters);
    uString* SaveParameters();
    void SetFlashMode(::g::Java::Object* handle, uString* flashMode);
    ::g::Uno::Threading::Future1* SetPhotoOptions(uArray* options);
    void SetPictureSize(int32_t width, int32_t height);
    void SetRecordingSession(uObject* recordingSession);
    ::g::Uno::Threading::Future1* StartRecording(uDelegate* doneCallback);
    void StartRecording1(uDelegate* resolve, uDelegate* reject);
    uArray* SupportedFlashModes();
    bool SupportsSize(::g::Uno::Int2 size);
    void TakePicture(uDelegate* resolve, uDelegate* reject);
    void UpdatePreviewStretchMode(bool shouldFill);
    static ::g::Java::Object* Create(::g::Java::Object* camera, int32_t cameraId, int32_t maxWidth, int32_t maxHeight);
    static void Dispose1(::g::Java::Object* handle);
    static Camera* New5(::g::Java::Object* cameraHandle, int32_t cameraId, int32_t facing);
    static void Release(::g::Java::Object* handle);
};
// }

}}}} // ::g::Fuse::Controls::Android
