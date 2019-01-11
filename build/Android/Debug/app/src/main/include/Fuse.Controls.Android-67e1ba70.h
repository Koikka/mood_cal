// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/CameraLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraFacingExtension;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal static extern class CameraFacingExtension :68
// {
uClassType* CameraFacingExtension_typeof();
void CameraFacingExtension__GetCameraId_fn(int32_t* facing, int32_t* __retval);
void CameraFacingExtension__TryGetCameraId_fn(int32_t* cameraFacing, int32_t* cameraId, bool* __retval);

struct CameraFacingExtension : uObject
{
    static int32_t GetCameraId(int32_t facing);
    static bool TryGetCameraId(int32_t cameraFacing, int32_t* cameraId);
};
// }

}}}} // ::g::Fuse::Controls::Android
