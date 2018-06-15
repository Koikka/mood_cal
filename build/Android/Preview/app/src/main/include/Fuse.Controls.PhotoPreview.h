// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoPreview.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.IPhotoP-fef9e46.h>
#include <Fuse.Controls.PhotoPreviewBase.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct CameraView;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoPreview;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PhotoPreview :36
// {
::g::Fuse::Controls::PhotoPreviewBase_type* PhotoPreview_typeof();
void PhotoPreview__ctor_8_fn(PhotoPreview* __this, ::g::Fuse::Controls::CameraView* CameraView1);
void PhotoPreview__InitializeUX_fn(PhotoPreview* __this);
void PhotoPreview__New4_fn(::g::Fuse::Controls::CameraView* CameraView1, PhotoPreview** __retval);

struct PhotoPreview : ::g::Fuse::Controls::PhotoPreviewBase
{
    uStrong< ::g::Fuse::Controls::CameraView*> CameraView;

    void ctor_8(::g::Fuse::Controls::CameraView* CameraView1);
    void InitializeUX();
    static PhotoPreview* New4(::g::Fuse::Controls::CameraView* CameraView1);
};
// }

}}} // ::g::Fuse::Controls
