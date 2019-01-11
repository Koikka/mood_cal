// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/FutureExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct FutureExtensions;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class FutureExtensions :6
// {
uClassType* FutureExtensions_typeof();
void FutureExtensions__Intercept_fn(uType* __type, ::g::Uno::Threading::Future1* future, uDelegate* callback, ::g::Uno::Threading::Future1** __retval);
void FutureExtensions__InvokeOnRejected_fn(uType* __type, ::g::Uno::Threading::Future1* future, uDelegate* callback, ::g::Uno::Threading::Future1** __retval);

struct FutureExtensions : uObject
{
    static ::g::Uno::Threading::Future1* Intercept(uType* __type, ::g::Uno::Threading::Future1* future, uDelegate* callback);
    static ::g::Uno::Threading::Future1* InvokeOnRejected(uType* __type, ::g::Uno::Threading::Future1* future, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Controls
