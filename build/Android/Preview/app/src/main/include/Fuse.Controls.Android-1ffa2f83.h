// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.RecordingSession.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct Camera__RecordingSessionPromise;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class Camera.RecordingSessionPromise :158
// {
::g::Uno::Threading::Future_type* Camera__RecordingSessionPromise_typeof();
void Camera__RecordingSessionPromise__ctor_7_fn(Camera__RecordingSessionPromise* __this, uDelegate* doneCallback, uDelegate* setRecordingSession);
void Camera__RecordingSessionPromise__New5_fn(uDelegate* doneCallback, uDelegate* setRecordingSession, Camera__RecordingSessionPromise** __retval);
void Camera__RecordingSessionPromise__OnReject_fn(Camera__RecordingSessionPromise* __this, uString* exceptionMessage);
void Camera__RecordingSessionPromise__OnResolve_fn(Camera__RecordingSessionPromise* __this, ::g::Java::Object* session);

struct Camera__RecordingSessionPromise : ::g::Uno::Threading::Promise
{
    uStrong<uDelegate*> _doneCallback;
    uStrong<uDelegate*> _setRecordingSession;

    void ctor_7(uDelegate* doneCallback, uDelegate* setRecordingSession);
    void OnReject(uString* exceptionMessage);
    void OnResolve(::g::Java::Object* session);
    static Camera__RecordingSessionPromise* New5(uDelegate* doneCallback, uDelegate* setRecordingSession);
};
// }

}}}} // ::g::Fuse::Controls::Android
