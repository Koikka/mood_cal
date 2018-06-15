// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoOption.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PhotoOption.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{struct PhotoOptionPromise;}}}
namespace g{namespace Fuse{namespace Controls{struct PhotoResolution;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract class PhotoOptionPromise :52
// {
struct PhotoOptionPromise_type : ::g::Uno::Threading::Future_type
{
    void(*fp_Visit1)(::g::Fuse::Controls::PhotoOptionPromise*, ::g::Fuse::Controls::PhotoResolution*);
};

PhotoOptionPromise_type* PhotoOptionPromise_typeof();
void PhotoOptionPromise__ctor_7_fn(PhotoOptionPromise* __this);
void PhotoOptionPromise__Visit_fn(PhotoOptionPromise* __this, uArray* options, ::g::Uno::Threading::Promise** __retval);

struct PhotoOptionPromise : ::g::Uno::Threading::Promise
{
    void ctor_7();
    ::g::Uno::Threading::Promise* Visit(uArray* options);
    void Visit1(::g::Fuse::Controls::PhotoResolution* photoResolution) { (((PhotoOptionPromise_type*)__type)->fp_Visit1)(this, photoResolution); }
};
// }

}}} // ::g::Fuse::Controls
