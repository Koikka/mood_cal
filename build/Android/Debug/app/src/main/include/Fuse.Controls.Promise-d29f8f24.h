// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/1.9.0/PromiseExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct PromiseExtensions;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class PromiseExtensions :6
// {
uClassType* PromiseExtensions_typeof();
void PromiseExtensions__RejectWithMessage_fn(uType* __type, ::g::Uno::Threading::Promise* promise, uString* message, ::g::Uno::Threading::Future1** __retval);

struct PromiseExtensions : uObject
{
    static ::g::Uno::Threading::Future1* RejectWithMessage(uType* __type, ::g::Uno::Threading::Promise* promise, uString* message);
};
// }

}}} // ::g::Fuse::Controls
