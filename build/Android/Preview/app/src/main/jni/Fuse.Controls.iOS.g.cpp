// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.CameraView.h>
#include <Fuse.Controls.ICameraViewHost.h>
#include <Fuse.Controls.iOS.CameraView.h>
#include <Fuse.Controls.iOS.PhotoPreview.h>
#include <Fuse.Controls.IPhotoP-fef9e46.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/iOS/CameraView.uno
// -------------------------------------------------------------------------------

// internal sealed extern class CameraView :15
// {
static void CameraView_build(uType* type)
{
}

uType* CameraView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CameraView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.iOS.CameraView", options);
    type->fp_build_ = CameraView_build;
    return type;
}

// public CameraView(Fuse.Controls.ICameraViewHost host) :18
void CameraView__ctor__fn(CameraView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public CameraView New(Fuse.Controls.ICameraViewHost host) :18
void CameraView__New1_fn(uObject* host, CameraView** __retval)
{
    *__retval = CameraView::New1(host);
}

// public CameraView(Fuse.Controls.ICameraViewHost host) [instance] :18
void CameraView::ctor_(uObject* host)
{
}

// public CameraView New(Fuse.Controls.ICameraViewHost host) [static] :18
CameraView* CameraView::New1(uObject* host)
{
    CameraView* obj1 = (CameraView*)uNew(CameraView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/iOS/PhotoPreview.uno
// ---------------------------------------------------------------------------------

// public sealed extern class PhotoPreview :15
// {
static void PhotoPreview_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PhotoPreview__New1_fn, 0, true, type, 2, ::g::Fuse::Controls::IPhotoPreviewHost_typeof(), ::g::Fuse::Controls::CameraView_typeof()));
}

uType* PhotoPreview_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PhotoPreview);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.iOS.PhotoPreview", options);
    type->fp_build_ = PhotoPreview_build;
    return type;
}

// public PhotoPreview(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :18
void PhotoPreview__ctor__fn(PhotoPreview* __this, uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    __this->ctor_(host, cameraView);
}

// public PhotoPreview New(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :18
void PhotoPreview__New1_fn(uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval)
{
    *__retval = PhotoPreview::New1(host, cameraView);
}

// public PhotoPreview(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [instance] :18
void PhotoPreview::ctor_(uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
}

// public PhotoPreview New(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [static] :18
PhotoPreview* PhotoPreview::New1(uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    PhotoPreview* obj1 = (PhotoPreview*)uNew(PhotoPreview_typeof());
    obj1->ctor_(host, cameraView);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::iOS
