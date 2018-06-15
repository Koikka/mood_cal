// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Photo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ThumbnailSizeHint;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class ThumbnailSizeHint :23
// {
uType* ThumbnailSizeHint_typeof();
void ThumbnailSizeHint__ctor__fn(ThumbnailSizeHint* __this, float* width, float* height);
void ThumbnailSizeHint__New1_fn(float* width, float* height, ThumbnailSizeHint** __retval);

struct ThumbnailSizeHint : uObject
{
    float Width;
    float Height;

    void ctor_(float width, float height);
    static ThumbnailSizeHint* New1(float width, float height);
};
// }

}}} // ::g::Fuse::Controls
