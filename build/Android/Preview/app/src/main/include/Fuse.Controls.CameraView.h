// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/CameraView.PhotoCaptureImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.CameraViewBase.h>
#include <Fuse.Controls.ICameraViewHost.h>
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

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class CameraView :7
// {
::g::Fuse::Controls::CameraViewBase_type* CameraView_typeof();
void CameraView__ctor_7_fn(CameraView* __this);
void CameraView__InitializeUX_fn(CameraView* __this);
void CameraView__New3_fn(CameraView** __retval);

struct CameraView : ::g::Fuse::Controls::CameraViewBase
{
    void ctor_7();
    void InitializeUX();
    static CameraView* New3();
};
// }

}}} // ::g::Fuse::Controls
