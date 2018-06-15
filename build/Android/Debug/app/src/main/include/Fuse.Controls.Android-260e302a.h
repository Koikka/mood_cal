// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CameraPromise-1.h>
#include <Fuse.Controls.Recording.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct AndroidRecordingSession__RecordingPromise;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// private sealed class AndroidRecordingSession.RecordingPromise :63
// {
::g::Uno::Threading::Future_type* AndroidRecordingSession__RecordingPromise_typeof();
void AndroidRecordingSession__RecordingPromise__ctor_8_fn(AndroidRecordingSession__RecordingPromise* __this);
void AndroidRecordingSession__RecordingPromise__New6_fn(AndroidRecordingSession__RecordingPromise** __retval);
void AndroidRecordingSession__RecordingPromise__OnReject_fn(AndroidRecordingSession__RecordingPromise* __this, uString* exceptionMessage);
void AndroidRecordingSession__RecordingPromise__OnResolve_fn(AndroidRecordingSession__RecordingPromise* __this, uString* outputFilePath);

struct AndroidRecordingSession__RecordingPromise : ::g::Fuse::Controls::CameraPromise
{
    void ctor_8();
    void OnReject(uString* exceptionMessage);
    void OnResolve(uString* outputFilePath);
    static AndroidRecordingSession__RecordingPromise* New6();
};
// }

}}}} // ::g::Fuse::Controls::Android
