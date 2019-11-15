// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/Photo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoTexture;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract class PhotoTexture
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
