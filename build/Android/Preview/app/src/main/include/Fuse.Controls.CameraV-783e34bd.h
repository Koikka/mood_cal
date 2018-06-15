// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/CameraView.PhotoCaptureImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Controls{struct CameraView__PhotoCaptureImageSource;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoTexture;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class CameraView.PhotoCaptureImageSource :9
// {
::g::Fuse::Resources::ImageSource_type* CameraView__PhotoCaptureImageSource_typeof();
void CameraView__PhotoCaptureImageSource__GetTexture_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void CameraView__PhotoCaptureImageSource__get_Orientation_fn(CameraView__PhotoCaptureImageSource* __this, int32_t* __retval);
void CameraView__PhotoCaptureImageSource__get_PhotoTexture_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Fuse::Controls::PhotoTexture** __retval);
void CameraView__PhotoCaptureImageSource__set_PhotoTexture_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Fuse::Controls::PhotoTexture* value);
void CameraView__PhotoCaptureImageSource__get_PixelSize_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Uno::Int2* __retval);
void CameraView__PhotoCaptureImageSource__get_Size_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Uno::Float2* __retval);
void CameraView__PhotoCaptureImageSource__get_SizeDensity_fn(CameraView__PhotoCaptureImageSource* __this, float* __retval);
void CameraView__PhotoCaptureImageSource__get_State_fn(CameraView__PhotoCaptureImageSource* __this, int32_t* __retval);
void CameraView__PhotoCaptureImageSource__get_Texture_fn(CameraView__PhotoCaptureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);

struct CameraView__PhotoCaptureImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Controls::PhotoTexture*> _photoTexture;

    ::g::Fuse::Controls::PhotoTexture* PhotoTexture();
    void PhotoTexture(::g::Fuse::Controls::PhotoTexture* value);
    ::g::Uno::Graphics::Texture2D* Texture();
};
// }

}}} // ::g::Fuse::Controls
