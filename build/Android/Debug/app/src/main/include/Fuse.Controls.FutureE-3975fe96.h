// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/FutureExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct FutureExtensions__OnRejectedClosure;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class FutureExtensions.OnRejectedClosure :24
// {
uType* FutureExtensions__OnRejectedClosure_typeof();
void FutureExtensions__OnRejectedClosure__ctor__fn(FutureExtensions__OnRejectedClosure* __this, uDelegate* callback);
void FutureExtensions__OnRejectedClosure__New1_fn(uDelegate* callback, FutureExtensions__OnRejectedClosure** __retval);
void FutureExtensions__OnRejectedClosure__OnReject_fn(FutureExtensions__OnRejectedClosure* __this, ::g::Uno::Exception* e);

struct FutureExtensions__OnRejectedClosure : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void OnReject(::g::Uno::Exception* e);
    static FutureExtensions__OnRejectedClosure* New1(uDelegate* callback);
};
// }

}}} // ::g::Fuse::Controls
