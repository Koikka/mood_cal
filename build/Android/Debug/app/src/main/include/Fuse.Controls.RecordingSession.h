// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/RecordingSession.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Recording;}}}
namespace g{namespace Fuse{namespace Controls{struct RecordingSession;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class RecordingSession :7
// {
struct RecordingSession_type : uType
{
    void(*fp_Stop)(::g::Fuse::Controls::RecordingSession*, ::g::Uno::Threading::Future1**);
};

RecordingSession_type* RecordingSession_typeof();
void RecordingSession__ctor__fn(RecordingSession* __this);
void RecordingSession__ConvertRecording_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::Recording* recording, uObject** __retval);
void RecordingSession__stop_fn(::g::Fuse::Scripting::Context* context, RecordingSession* recordingSession, uArray* args, ::g::Uno::Threading::Future1** __retval);

struct RecordingSession : uObject
{
    void ctor_();
    ::g::Uno::Threading::Future1* Stop() { ::g::Uno::Threading::Future1* __retval; return (((RecordingSession_type*)__type)->fp_Stop)(this, &__retval), __retval; }
    static uObject* ConvertRecording(::g::Fuse::Scripting::Context* c, ::g::Fuse::Controls::Recording* recording);
    static ::g::Uno::Threading::Future1* stop(::g::Fuse::Scripting::Context* context, RecordingSession* recordingSession, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
