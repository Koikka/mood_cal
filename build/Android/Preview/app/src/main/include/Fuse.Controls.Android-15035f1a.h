// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/PhotoPreview.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IPhotoPreview.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Android{struct NativePhotoHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Android{struct PhotoPreview;}}}}
namespace g{namespace Fuse{namespace Controls{struct CameraView;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoHandle;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// internal sealed extern class PhotoPreview :21
// {
struct PhotoPreview_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::IPhotoPreview interface2;
};

PhotoPreview_type* PhotoPreview_typeof();
void PhotoPreview__ctor_7_fn(PhotoPreview* __this, uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
void PhotoPreview__ctor_8_fn(PhotoPreview* __this, ::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
void PhotoPreview__Dispose_fn(PhotoPreview* __this);
void PhotoPreview__FuseControlsIPhotoPreviewset_PreviewStretchMode_fn(PhotoPreview* __this, int32_t* value);
void PhotoPreview__New5_fn(uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval);
void PhotoPreview__New6_fn(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval);
void PhotoPreview__NewImageView_fn(::g::Java::Object** __retval);
void PhotoPreview__OnGotPhotoHandle_fn(PhotoPreview* __this, ::g::Fuse::Controls::PhotoHandle* photoHandle);
void PhotoPreview__OnPhotoCaptured_fn(PhotoPreview* __this, ::g::Fuse::Controls::Photo* photo);
void PhotoPreview__OnRejected_fn(PhotoPreview* __this, ::g::Uno::Exception* e);
void PhotoPreview__SetCenterCrop_fn(::g::Java::Object* imageView);
void PhotoPreview__SetCenterInside_fn(::g::Java::Object* imageView);
void PhotoPreview__SetImageBitmap_fn(::g::Java::Object* imageView, ::g::Java::Object* bitmap);

struct PhotoPreview : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _view;
    uStrong<uObject*> _host;
    uStrong< ::g::Fuse::Controls::CameraView*> _cameraView;
    uStrong< ::g::Fuse::Controls::Android::NativePhotoHandle*> _photoHandle;

    void ctor_7(uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
    void ctor_8(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
    void OnGotPhotoHandle(::g::Fuse::Controls::PhotoHandle* photoHandle);
    void OnPhotoCaptured(::g::Fuse::Controls::Photo* photo);
    void OnRejected(::g::Uno::Exception* e);
    static PhotoPreview* New5(uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
    static PhotoPreview* New6(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView);
    static ::g::Java::Object* NewImageView();
    static void SetCenterCrop(::g::Java::Object* imageView);
    static void SetCenterInside(::g::Java::Object* imageView);
    static void SetImageBitmap(::g::Java::Object* imageView, ::g::Java::Object* bitmap);
};
// }

}}}} // ::g::Fuse::Controls::Android
