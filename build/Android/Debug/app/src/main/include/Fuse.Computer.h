// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Marshal/1.12.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Computer;}}

namespace g{
namespace Fuse{

// internal abstract class Computer
// {
struct Computer_type : uType
{
    void(*fp_TryOp1)(::g::Fuse::Computer*, int32_t*, uObject*, uObject*, uObject**, bool*);
};

Computer_type* Computer_typeof();
void Computer__ctor__fn(Computer* __this);

struct Computer : uObject
{
    void ctor_();
    bool TryOp1(int32_t op, uObject* a, uObject* b, uObject** result) { bool __retval; return (((Computer_type*)__type)->fp_TryOp1)(this, &op, a, b, result, &__retval), __retval; }
};
// }

}} // ::g::Fuse
