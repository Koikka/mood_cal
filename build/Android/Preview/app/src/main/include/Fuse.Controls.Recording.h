// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Recording.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Recording;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class Recording :7
// {
uType* Recording_typeof();
void Recording__ctor__fn(Recording* __this, uString* filePath1);
void Recording__filePath_fn(::g::Fuse::Scripting::Context* context, Recording* self, uArray* args, uObject** __retval);
void Recording__get_FilePath_fn(Recording* __this, uString** __retval);

struct Recording : uObject
{
    uStrong<uString*> _filePath;

    void ctor_(uString* filePath1);
    uString* FilePath();
    static uObject* filePath(::g::Fuse::Scripting::Context* context, Recording* self, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
