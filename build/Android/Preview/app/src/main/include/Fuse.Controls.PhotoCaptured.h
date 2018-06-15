// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoCaptured.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct CameraViewBase;}}}
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoCaptured;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PhotoCaptured :6
// {
::g::Fuse::Triggers::Trigger_type* PhotoCaptured_typeof();
void PhotoCaptured__ctor_5_fn(PhotoCaptured* __this);
void PhotoCaptured__get_CameraView_fn(PhotoCaptured* __this, ::g::Fuse::Controls::CameraViewBase** __retval);
void PhotoCaptured__set_CameraView_fn(PhotoCaptured* __this, ::g::Fuse::Controls::CameraViewBase* value);
void PhotoCaptured__New2_fn(PhotoCaptured** __retval);
void PhotoCaptured__OnPhotoCaptured_fn(PhotoCaptured* __this, ::g::Fuse::Controls::Photo* photo);
void PhotoCaptured__OnRooted_fn(PhotoCaptured* __this);
void PhotoCaptured__OnUnrooted_fn(PhotoCaptured* __this);

struct PhotoCaptured : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Controls::CameraViewBase*> _cameraView;

    void ctor_5();
    ::g::Fuse::Controls::CameraViewBase* CameraView();
    void CameraView(::g::Fuse::Controls::CameraViewBase* value);
    void OnPhotoCaptured(::g::Fuse::Controls::Photo* photo);
    static PhotoCaptured* New2();
};
// }

}}} // ::g::Fuse::Controls
