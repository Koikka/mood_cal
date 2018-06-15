// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/CameraPromise.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{struct CameraPromise;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal class CameraPromise<T> :13
// {
::g::Uno::Threading::Future_type* CameraPromise_typeof();
void CameraPromise__ctor_7_fn(CameraPromise* __this);
void CameraPromise__New5_fn(uType* __type, CameraPromise** __retval);

struct CameraPromise : ::g::Uno::Threading::Promise
{
    void ctor_7();
    static CameraPromise* New5(uType* __type);
};
// }

}}} // ::g::Fuse::Controls
