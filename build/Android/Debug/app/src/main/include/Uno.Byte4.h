// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Source/Uno/Byte4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Byte4;}}

namespace g{
namespace Uno{

// public intrinsic struct Byte4
// {
uStructType* Byte4_typeof();
void Byte4__ctor_2_fn(Byte4* __this, uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w);
void Byte4__Equals_fn(Byte4* __this, uType* __type, uObject* o, bool* __retval);
void Byte4__GetHashCode_fn(Byte4* __this, uType* __type, int32_t* __retval);
void Byte4__New2_fn(uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w, Byte4* __retval);
void Byte4__ToString_fn(Byte4* __this, uType* __type, uString** __retval);

struct Byte4
{
    uint8_t X;
    uint8_t Y;
    uint8_t Z;
    uint8_t W;

    void ctor_2(uint8_t x, uint8_t y, uint8_t z, uint8_t w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Byte4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Byte4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Byte4__ToString_fn(this, __type, &__retval), __retval; }
};

Byte4 Byte4__New2(uint8_t x, uint8_t y, uint8_t z, uint8_t w);
// }

}} // ::g::Uno
