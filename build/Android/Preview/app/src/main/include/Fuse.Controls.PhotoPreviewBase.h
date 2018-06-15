// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoPreviewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.IPhotoP-fef9e46.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{namespace Controls{struct PhotoPreviewBase;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class PhotoPreviewBase :18
// {
struct PhotoPreviewBase_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Controls::IPhotoPreviewHost interface18;
};

PhotoPreviewBase_type* PhotoPreviewBase_typeof();
void PhotoPreviewBase__ctor_7_fn(PhotoPreviewBase* __this);
void PhotoPreviewBase__FuseControlsIPhotoPreviewHostOnPhotoLoaded_fn(PhotoPreviewBase* __this);
void PhotoPreviewBase__OnPhotoLoaded_fn(PhotoPreviewBase* __this);
void PhotoPreviewBase__OnPreviewStretchModeChanged_fn(PhotoPreviewBase* __this);
void PhotoPreviewBase__add_PhotoLoaded_fn(PhotoPreviewBase* __this, uDelegate* value);
void PhotoPreviewBase__remove_PhotoLoaded_fn(PhotoPreviewBase* __this, uDelegate* value);
void PhotoPreviewBase__get_PhotoPreview_fn(PhotoPreviewBase* __this, uObject** __retval);
void PhotoPreviewBase__get_PreviewStretchMode_fn(PhotoPreviewBase* __this, int32_t* __retval);
void PhotoPreviewBase__set_PreviewStretchMode_fn(PhotoPreviewBase* __this, int32_t* value);
void PhotoPreviewBase__PushPropertiesToNativeView_fn(PhotoPreviewBase* __this);

struct PhotoPreviewBase : ::g::Fuse::Controls::Panel
{
    int32_t _previewStretchMode;
    uStrong<uDelegate*> PhotoLoaded1;

    void ctor_7();
    void OnPhotoLoaded();
    void OnPreviewStretchModeChanged();
    void add_PhotoLoaded(uDelegate* value);
    void remove_PhotoLoaded(uDelegate* value);
    uObject* PhotoPreview();
    int32_t PreviewStretchMode();
    void PreviewStretchMode(int32_t value);
};
// }

}}} // ::g::Fuse::Controls
