// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/.uno/package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct UnoCore_bundle;}

namespace g{

// public static generated class UnoCore_bundle
// {
uClassType* UnoCore_bundle_typeof();

struct UnoCore_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> SpriteFontShader85af9040_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& SpriteFontShader85af9040() { return UnoCore_bundle_typeof()->Init(), SpriteFontShader85af9040_; }
};
// }

} // ::g
