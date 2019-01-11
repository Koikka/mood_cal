// This file was generated based on /usr/local/share/uno/Packages/Fuse.UserEvents/1.9.0/RaiseUserEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class UserEventArg :132
// {
uType* UserEventArg_typeof();
void UserEventArg__ctor_1_fn(UserEventArg* __this, uString* name);
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value);
void UserEventArg__New2_fn(uString* name, UserEventArg** __retval);
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value);
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval);
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value);

struct UserEventArg : ::g::Uno::UX::PropertyObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    void ctor_1(uString* name);
    uString* Name();
    void Name(uString* value);
    uString* StringValue();
    void StringValue(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static UserEventArg* New2(uString* name);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
