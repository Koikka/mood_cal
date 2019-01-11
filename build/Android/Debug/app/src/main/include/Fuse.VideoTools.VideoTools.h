// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/VideoTools.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace VideoTools{struct VideoTools;}}}

namespace g{
namespace Fuse{
namespace VideoTools{

// public sealed class VideoTools :27
// {
::g::Fuse::Scripting::NativeModule_type* VideoTools_typeof();
void VideoTools__ctor_2_fn(VideoTools* __this);
void VideoTools__CopyVideoToCameraRoll_fn(VideoTools* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void VideoTools__New2_fn(VideoTools** __retval);

struct VideoTools : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<VideoTools*> _instance_;
    static uSStrong<VideoTools*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* CopyVideoToCameraRoll(::g::Fuse::Scripting::Context* c, uArray* args);
    static VideoTools* New2();
};
// }

}}} // ::g::Fuse::VideoTools
