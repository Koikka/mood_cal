// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.CameraView/1.12.0/CameraViewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ICameraView
// {
uInterfaceType* ICameraView_typeof();

struct ICameraView
{
    void(*fp_set_PreviewStretchMode)(uObject*, int32_t*);
    static void PreviewStretchMode(const uInterface& __this, int32_t value) { __this.VTable<ICameraView>()->fp_set_PreviewStretchMode(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
