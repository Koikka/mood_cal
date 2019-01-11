// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/Android/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Recording.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct AndroidRecording;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class AndroidRecording :14
// {
uType* AndroidRecording_typeof();
void AndroidRecording__ctor_1_fn(AndroidRecording* __this, uString* outputFilePath);
void AndroidRecording__New1_fn(uString* outputFilePath, AndroidRecording** __retval);

struct AndroidRecording : ::g::Fuse::Controls::Recording
{
    void ctor_1(uString* outputFilePath);
    static AndroidRecording* New1(uString* outputFilePath);
};
// }

}}}} // ::g::Fuse::Controls::Android
