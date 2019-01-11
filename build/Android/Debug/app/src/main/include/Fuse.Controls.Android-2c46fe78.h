// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.RecordingSession.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct AndroidRecordingSession;}}}}
namespace g{namespace Fuse{namespace Controls{struct Recording;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class AndroidRecordingSession :24
// {
struct AndroidRecordingSession_type : ::g::Fuse::Controls::RecordingSession_type
{
    ::g::Uno::IDisposable interface0;
};

AndroidRecordingSession_type* AndroidRecordingSession_typeof();
void AndroidRecordingSession__ctor_1_fn(AndroidRecordingSession* __this, ::g::Java::Object* session, uDelegate* doneCallback);
void AndroidRecordingSession__InternalStop_fn(AndroidRecordingSession* __this, ::g::Uno::Threading::Future1** __retval);
void AndroidRecordingSession__New1_fn(::g::Java::Object* session, uDelegate* doneCallback, AndroidRecordingSession** __retval);
void AndroidRecordingSession__Stop_fn(AndroidRecordingSession* __this, ::g::Uno::Threading::Future1** __retval);
void AndroidRecordingSession__Stop1_fn(::g::Java::Object* session, uDelegate* resolve, uDelegate* reject);
void AndroidRecordingSession__UnoIDisposableDispose_fn(AndroidRecordingSession* __this);

struct AndroidRecordingSession : ::g::Fuse::Controls::RecordingSession
{
    uStrong< ::g::Java::Object*> _session;
    uStrong<uDelegate*> _doneCallback;
    bool _stopped;

    void ctor_1(::g::Java::Object* session, uDelegate* doneCallback);
    ::g::Uno::Threading::Future1* InternalStop();
    static AndroidRecordingSession* New1(::g::Java::Object* session, uDelegate* doneCallback);
    static void Stop1(::g::Java::Object* session, uDelegate* resolve, uDelegate* reject);
};
// }

}}}} // ::g::Fuse::Controls::Android
