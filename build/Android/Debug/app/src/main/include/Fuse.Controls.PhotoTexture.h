// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Photo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoTexture;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract class PhotoTexture :8
// {
struct PhotoTexture_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Controls::PhotoTexture*);
};

PhotoTexture_type* PhotoTexture_typeof();

struct PhotoTexture : uObject
{
    void Dispose() { (((PhotoTexture_type*)__type)->fp_Dispose)(this); }
};
// }

}}} // ::g::Fuse::Controls
