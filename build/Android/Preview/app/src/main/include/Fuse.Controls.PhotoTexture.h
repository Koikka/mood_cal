// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Photo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoTexture;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract class PhotoTexture :8
// {
struct PhotoTexture_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Controls::PhotoTexture*);
    void(*fp_get_Orientation)(::g::Fuse::Controls::PhotoTexture*, int32_t*);
    void(*fp_get_Texture)(::g::Fuse::Controls::PhotoTexture*, ::g::Uno::Graphics::Texture2D**);
};

PhotoTexture_type* PhotoTexture_typeof();
void PhotoTexture__ctor__fn(PhotoTexture* __this);

struct PhotoTexture : uObject
{
    void ctor_();
    void Dispose() { (((PhotoTexture_type*)__type)->fp_Dispose)(this); }
    int32_t Orientation() { int32_t __retval; return (((PhotoTexture_type*)__type)->fp_get_Orientation)(this, &__retval), __retval; }
    ::g::Uno::Graphics::Texture2D* Texture() { ::g::Uno::Graphics::Texture2D* __retval; return (((PhotoTexture_type*)__type)->fp_get_Texture)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
