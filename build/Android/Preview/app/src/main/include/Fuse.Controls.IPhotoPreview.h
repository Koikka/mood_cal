// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoPreviewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface IPhotoPreview :13
// {
uInterfaceType* IPhotoPreview_typeof();

struct IPhotoPreview
{
    void(*fp_set_PreviewStretchMode)(uObject*, int32_t*);
    static void PreviewStretchMode(const uInterface& __this, int32_t value) { __this.VTable<IPhotoPreview>()->fp_set_PreviewStretchMode(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
