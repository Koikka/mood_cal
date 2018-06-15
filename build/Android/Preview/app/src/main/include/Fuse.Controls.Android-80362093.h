// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Android.Camera.h>
#include <Fuse.Controls.CameraPromise-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraView__InitialLoadClosure;}}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class CameraView.InitialLoadClosure :61
// {
::g::Uno::Threading::Future_type* CameraView__InitialLoadClosure_typeof();
void CameraView__InitialLoadClosure__ctor_8_fn(CameraView__InitialLoadClosure* __this, int32_t* facing);
void CameraView__InitialLoadClosure__New6_fn(int32_t* facing, CameraView__InitialLoadClosure** __retval);
void CameraView__InitialLoadClosure__OnPermissionsPerimtted_fn(CameraView__InitialLoadClosure* __this, uArray* permission);

struct CameraView__InitialLoadClosure : ::g::Fuse::Controls::CameraPromise
{
    int32_t _facing;

    void ctor_8(int32_t facing);
    void OnPermissionsPerimtted(uArray* permission);
    static CameraView__InitialLoadClosure* New6(int32_t facing);
};
// }

}}}} // ::g::Fuse::Controls::Android
