// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/1.8.0/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Permissions{struct Permissions__Android;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{

// public static extern class Permissions.Android :120
// {
uClassType* Permissions__Android_typeof();
void Permissions__Android__get_CAMERA_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Permissions__Android__get_READ_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Permissions__Android__get_RECORD_AUDIO_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Permissions__Android__get_WRITE_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval);

struct Permissions__Android : uObject
{
    static ::g::Uno::Permissions::PlatformPermission CAMERA();
    static ::g::Uno::Permissions::PlatformPermission READ_EXTERNAL_STORAGE();
    static ::g::Uno::Permissions::PlatformPermission RECORD_AUDIO();
    static ::g::Uno::Permissions::PlatformPermission WRITE_EXTERNAL_STORAGE();
};
// }

}}} // ::g::Uno::Permissions
