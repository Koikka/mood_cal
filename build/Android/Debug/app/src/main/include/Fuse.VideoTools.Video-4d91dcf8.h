// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/VideoTools.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace VideoTools{struct VideoTools__AndroidVideoTools;}}}

namespace g{
namespace Fuse{
namespace VideoTools{

// internal sealed extern class VideoTools.AndroidVideoTools :97
// {
uType* VideoTools__AndroidVideoTools_typeof();
void VideoTools__AndroidVideoTools__SaveVideo_fn(uString* outputFileURL, bool* __retval);

struct VideoTools__AndroidVideoTools : uObject
{
    static bool SaveVideo(uString* outputFileURL);
};
// }

}}} // ::g::Fuse::VideoTools
