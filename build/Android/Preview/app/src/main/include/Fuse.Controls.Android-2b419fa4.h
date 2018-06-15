// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Android.Camera.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct CameraLoader__CameraPromise;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class CameraLoader.CameraPromise :9
// {
::g::Uno::Threading::Future_type* CameraLoader__CameraPromise_typeof();
void CameraLoader__CameraPromise__ctor_7_fn(CameraLoader__CameraPromise* __this, int32_t* facing, int32_t* cameraId);
void CameraLoader__CameraPromise__Cancel_fn(CameraLoader__CameraPromise* __this, bool* shutdownGracefully);
void CameraLoader__CameraPromise__New5_fn(int32_t* facing, int32_t* cameraId, CameraLoader__CameraPromise** __retval);
void CameraLoader__CameraPromise__OnLoaded_fn(CameraLoader__CameraPromise* __this, ::g::Java::Object* camera);
void CameraLoader__CameraPromise__OnRejected_fn(CameraLoader__CameraPromise* __this, uString* msg);

struct CameraLoader__CameraPromise : ::g::Uno::Threading::Promise
{
    int32_t _facing;
    int32_t _cameraId;
    bool _cancelled;

    void ctor_7(int32_t facing, int32_t cameraId);
    void OnLoaded(::g::Java::Object* camera);
    void OnRejected(uString* msg);
    static CameraLoader__CameraPromise* New5(int32_t facing, int32_t cameraId);
};
// }

}}}} // ::g::Fuse::Controls::Android
