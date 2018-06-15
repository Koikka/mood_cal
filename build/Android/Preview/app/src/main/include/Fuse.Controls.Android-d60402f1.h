// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct FlashModeExtensions;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal static extern class FlashModeExtensions :365
// {
uClassType* FlashModeExtensions_typeof();
void FlashModeExtensions__AsString_fn(int32_t* flashMode, uString** __retval);
void FlashModeExtensions__IsSupported_fn(int32_t* flashMode, ::g::Fuse::Controls::Android::Camera* camera, bool* __retval);
void FlashModeExtensions__IsSupported1_fn(uString* flashMode, ::g::Java::Object* cameraHandle, bool* __retval);

struct FlashModeExtensions : uObject
{
    static uString* AsString(int32_t flashMode);
    static bool IsSupported(int32_t flashMode, ::g::Fuse::Controls::Android::Camera* camera);
    static bool IsSupported1(uString* flashMode, ::g::Java::Object* cameraHandle);
};
// }

}}}} // ::g::Fuse::Controls::Android
