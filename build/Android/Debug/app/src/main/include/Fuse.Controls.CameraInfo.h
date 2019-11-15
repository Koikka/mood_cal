// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/CameraInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct CameraInfo;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class CameraInfo
// {
uType* CameraInfo_typeof();
void CameraInfo__ctor__fn(CameraInfo* __this, int32_t* flashMode, int32_t* cameraFacing, int32_t* captureMode, uArray* photoResolutions, uArray* supportedFlashModes);
void CameraInfo__New1_fn(int32_t* flashMode, int32_t* cameraFacing, int32_t* captureMode, uArray* photoResolutions, uArray* supportedFlashModes, CameraInfo** __retval);

struct CameraInfo : uObject
{
    int32_t FlashMode;
    int32_t CameraFacing;
    int32_t CaptureMode;
    uStrong<uArray*> PhotoResolutions;
    uStrong<uArray*> SupportedFlashModes;

    void ctor_(int32_t flashMode, int32_t cameraFacing, int32_t captureMode, uArray* photoResolutions, uArray* supportedFlashModes);
    static CameraInfo* New1(int32_t flashMode, int32_t cameraFacing, int32_t captureMode, uArray* photoResolutions, uArray* supportedFlashModes);
};
// }

}}} // ::g::Fuse::Controls
