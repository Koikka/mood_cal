// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/.uno/ux14/Fuse.Controls.PhotoPreview.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoPreview;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoPreview__Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PhotoPreview.Template :8
// {
::g::Uno::UX::Template_type* PhotoPreview__Template_typeof();
void PhotoPreview__Template__ctor_1_fn(PhotoPreview__Template* __this, ::g::Fuse::Controls::PhotoPreview* parent, ::g::Fuse::Controls::PhotoPreview* parentInstance);
void PhotoPreview__Template__New1_fn(PhotoPreview__Template* __this, uObject** __retval);
void PhotoPreview__Template__New2_fn(::g::Fuse::Controls::PhotoPreview* parent, ::g::Fuse::Controls::PhotoPreview* parentInstance, PhotoPreview__Template** __retval);

struct PhotoPreview__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::PhotoPreview*> __parent1;
    uWeak< ::g::Fuse::Controls::PhotoPreview*> __parentInstance1;

    void ctor_1(::g::Fuse::Controls::PhotoPreview* parent, ::g::Fuse::Controls::PhotoPreview* parentInstance);
    static PhotoPreview__Template* New2(::g::Fuse::Controls::PhotoPreview* parent, ::g::Fuse::Controls::PhotoPreview* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
