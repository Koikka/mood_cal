// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Source/Uno/Enum.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public abstract class Enum
// {
uType* Enum_typeof();
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval);
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval);
void Enum__ToString_fn(uObject* __this, uString** __retval);
void Enum__TryParse_fn(uType* __type, uString* str, bool* ignoreCase, uTRef result, bool* __retval);

struct Enum
{
    static uObject* Parse(uType* type, uString* str);
    static uObject* Parse1(uType* type, uString* str, bool ignoreCase);
    template<class TEnum>
    static bool TryParse(uType* __type, uString* str, bool ignoreCase, TEnum* result) { bool __retval; return Enum__TryParse_fn(__type, str, &ignoreCase, uConstrain(__type->U(0), result), &__retval), __retval; }
};
// }

}} // ::g::Uno
