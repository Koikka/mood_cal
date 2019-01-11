// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/CameraLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraLoader;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal static extern class CameraLoader :7
// {
uClassType* CameraLoader_typeof();
void CameraLoader__Load_fn(int32_t* facing, ::g::Uno::Threading::Future1** __retval);
void CameraLoader__Load1_fn(int32_t* cameraId, uDelegate* resolve, uDelegate* reject);

struct CameraLoader : uObject
{
    static ::g::Uno::Threading::Future1* Load(int32_t facing);
    static void Load1(int32_t cameraId, uDelegate* resolve, uDelegate* reject);
};
// }

}}}} // ::g::Fuse::Controls::Android
