// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/CameraViewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct CameraInfo;}}}
namespace g{namespace Fuse{namespace Controls{struct Nothing;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoOption;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ICamera
// {
uInterfaceType* ICamera_typeof();

struct ICamera
{
    void(*fp_CapturePhoto)(uObject*, ::g::Uno::Threading::Future1**);
    void(*fp_GetCameraInfo)(uObject*, ::g::Uno::Threading::Future1**);
    void(*fp_SetCameraFacing)(uObject*, int32_t*, ::g::Uno::Threading::Future1**);
    void(*fp_SetCameraFocusPoint)(uObject*, double*, double*, int32_t*, int32_t*, int32_t*, ::g::Uno::Threading::Future1**);
    void(*fp_SetCaptureMode)(uObject*, int32_t*, ::g::Uno::Threading::Future1**);
    void(*fp_SetFlashMode)(uObject*, int32_t*, ::g::Uno::Threading::Future1**);
    void(*fp_SetPhotoOptions)(uObject*, uArray*, ::g::Uno::Threading::Future1**);
    void(*fp_StartRecording)(uObject*, ::g::Uno::Threading::Future1**);
    static ::g::Uno::Threading::Future1* CapturePhoto(const uInterface& __this) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_CapturePhoto(__this, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* GetCameraInfo(const uInterface& __this) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_GetCameraInfo(__this, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* SetCameraFacing(const uInterface& __this, int32_t facing) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_SetCameraFacing(__this, &facing, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* SetCameraFocusPoint(const uInterface& __this, double x, double y, int32_t cameraWidth, int32_t cameraHeight, int32_t isFocusLocked) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_SetCameraFocusPoint(__this, &x, &y, &cameraWidth, &cameraHeight, &isFocusLocked, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* SetCaptureMode(const uInterface& __this, int32_t mode) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_SetCaptureMode(__this, &mode, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* SetFlashMode(const uInterface& __this, int32_t mode) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_SetFlashMode(__this, &mode, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* SetPhotoOptions(const uInterface& __this, uArray* options) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_SetPhotoOptions(__this, options, &__retval), __retval; }
    static ::g::Uno::Threading::Future1* StartRecording(const uInterface& __this) { ::g::Uno::Threading::Future1* __retval; return __this.VTable<ICamera>()->fp_StartRecording(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
