// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/.uno/ux14/Fuse.Controls.CameraView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct CameraView__Template2;}}}
namespace g{namespace Fuse{namespace Controls{struct CameraView__Template2__Template3;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class CameraView.Template2.Template3 :55
// {
::g::Uno::UX::Template_type* CameraView__Template2__Template3_typeof();
void CameraView__Template2__Template3__ctor_1_fn(CameraView__Template2__Template3* __this, ::g::Fuse::Controls::CameraView__Template2* parent, ::g::Fuse::Controls::Panel* parentInstance);
void CameraView__Template2__Template3__New1_fn(CameraView__Template2__Template3* __this, uObject** __retval);
void CameraView__Template2__Template3__New2_fn(::g::Fuse::Controls::CameraView__Template2* parent, ::g::Fuse::Controls::Panel* parentInstance, CameraView__Template2__Template3** __retval);

struct CameraView__Template2__Template3 : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::CameraView__Template2*> __parent1;
    uWeak< ::g::Fuse::Controls::Panel*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CameraView__Template2__Template3_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Fuse::Controls::CameraView__Template2* parent, ::g::Fuse::Controls::Panel* parentInstance);
    static CameraView__Template2__Template3* New2(::g::Fuse::Controls::CameraView__Template2* parent, ::g::Fuse::Controls::Panel* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
