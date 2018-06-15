// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/PhotoPreviewBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface IPhotoPreviewHost :8
// {
uInterfaceType* IPhotoPreviewHost_typeof();

struct IPhotoPreviewHost
{
    void(*fp_OnPhotoLoaded)(uObject*);
    static void OnPhotoLoaded(const uInterface& __this) { __this.VTable<IPhotoPreviewHost>()->fp_OnPhotoLoaded(__this); }
};
// }

}}} // ::g::Fuse::Controls
