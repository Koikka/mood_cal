// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/.uno/ux14/Fuse.Controls.CameraView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct CameraView;}}}
namespace g{namespace Fuse{namespace Controls{struct CameraView__Template2;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class CameraView.Template2 :45
// {
::g::Uno::UX::Template_type* CameraView__Template2_typeof();
void CameraView__Template2__ctor_1_fn(CameraView__Template2* __this, ::g::Fuse::Controls::CameraView* parent, ::g::Fuse::Controls::CameraView* parentInstance);
void CameraView__Template2__New1_fn(CameraView__Template2* __this, uObject** __retval);
void CameraView__Template2__New2_fn(::g::Fuse::Controls::CameraView* parent, ::g::Fuse::Controls::CameraView* parentInstance, CameraView__Template2** __retval);

struct CameraView__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::CameraView*> __parent1;
    uWeak< ::g::Fuse::Controls::CameraView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CameraView__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Fuse::Controls::CameraView* parent, ::g::Fuse::Controls::CameraView* parentInstance);
    static CameraView__Template2* New2(::g::Fuse::Controls::CameraView* parent, ::g::Fuse::Controls::CameraView* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
