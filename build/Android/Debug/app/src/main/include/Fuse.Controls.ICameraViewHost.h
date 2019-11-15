// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/CameraViewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ICameraViewHost
// {
uInterfaceType* ICameraViewHost_typeof();

struct ICameraViewHost
{
    void(*fp_OnCameraLoaded)(uObject*, uObject*);
    void(*fp_OnError)(uObject*, ::g::Uno::Exception*);
    static void OnCameraLoaded(const uInterface& __this, uObject* camera) { __this.VTable<ICameraViewHost>()->fp_OnCameraLoaded(__this, camera); }
    static void OnError(const uInterface& __this, ::g::Uno::Exception* e) { __this.VTable<ICameraViewHost>()->fp_OnError(__this, e); }
};
// }

}}} // ::g::Fuse::Controls
