// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Reactive.Expressions/1.12.0/PlatformFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct PlatformFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class PlatformFunction
// {
struct PlatformFunction_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_GetResult)(::g::Fuse::Reactive::PlatformFunction*, bool*);
};

PlatformFunction_type* PlatformFunction_typeof();
void PlatformFunction__Subscribe_fn(PlatformFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void PlatformFunction__ToString_fn(PlatformFunction* __this, uString** __retval);

struct PlatformFunction : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _name;

    bool GetResult() { bool __retval; return (((PlatformFunction_type*)__type)->fp_GetResult)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
