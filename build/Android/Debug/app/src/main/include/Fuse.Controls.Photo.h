// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Photo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Photo;}}}
namespace g{namespace Fuse{namespace Controls{struct ThumbnailSizeHint;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class Photo :35
// {
struct Photo_type : uType
{
    void(*fp_Release)(::g::Fuse::Controls::Photo*);
    void(*fp_Save)(::g::Fuse::Controls::Photo*, ::g::Uno::Threading::Future1**);
    void(*fp_SaveThumbnail)(::g::Fuse::Controls::Photo*, ::g::Fuse::Controls::ThumbnailSizeHint*, ::g::Uno::Threading::Future1**);
};

Photo_type* Photo_typeof();
void Photo__ctor__fn(Photo* __this);
void Photo__release_fn(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args);
void Photo__save_fn(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args, ::g::Uno::Threading::Future1** __retval);
void Photo__saveThumbnail_fn(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Photo : uObject
{
    void ctor_();
    void Release() { (((Photo_type*)__type)->fp_Release)(this); }
    ::g::Uno::Threading::Future1* Save() { ::g::Uno::Threading::Future1* __retval; return (((Photo_type*)__type)->fp_Save)(this, &__retval), __retval; }
    ::g::Uno::Threading::Future1* SaveThumbnail(::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint) { ::g::Uno::Threading::Future1* __retval; return (((Photo_type*)__type)->fp_SaveThumbnail)(this, thumbnailSizeHint, &__retval), __retval; }
    static void release(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args);
    static ::g::Uno::Threading::Future1* save(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args);
    static ::g::Uno::Threading::Future1* saveThumbnail(::g::Fuse::Scripting::Context* context, Photo* photo, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
