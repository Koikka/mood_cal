// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/iOS/PhotoPreview.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace iOS{struct PhotoPreview;}}}}
namespace g{namespace Fuse{namespace Controls{struct CameraView;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace iOS{

// public sealed extern class PhotoPreview :15
// {
uType* PhotoPreview_typeof();
void PhotoPreview__ctor__fn(PhotoPreview* __this, uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
void PhotoPreview__New1_fn(uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval);

struct PhotoPreview : uObject
{
    void ctor_(uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
    static PhotoPreview* New1(uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
};
// }

}}}} // ::g::Fuse::Controls::iOS
