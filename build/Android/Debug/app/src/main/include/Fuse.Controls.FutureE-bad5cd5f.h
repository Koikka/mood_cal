// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/FutureExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct FutureExtensions__InterceptClosure;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class FutureExtensions.InterceptClosure<T> :8
// {
uType* FutureExtensions__InterceptClosure_typeof();
void FutureExtensions__InterceptClosure__ctor__fn(FutureExtensions__InterceptClosure* __this, uDelegate* callback);
void FutureExtensions__InterceptClosure__New1_fn(uType* __type, uDelegate* callback, FutureExtensions__InterceptClosure** __retval);
void FutureExtensions__InterceptClosure__OnReject_fn(FutureExtensions__InterceptClosure* __this, ::g::Uno::Exception* e);
void FutureExtensions__InterceptClosure__OnResolve_fn(FutureExtensions__InterceptClosure* __this, void* result);

struct FutureExtensions__InterceptClosure : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void OnReject(::g::Uno::Exception* e);
    template<class T>
    void OnResolve(T result) { FutureExtensions__InterceptClosure__OnResolve_fn(this, uConstrain(__type->T(0), result)); }
    static FutureExtensions__InterceptClosure* New1(uType* __type, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Controls
