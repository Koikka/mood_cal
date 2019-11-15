// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Inter-dfc90df9.h>
#include <Uno.Permissions.Platf-c2400e03.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/Uno.Permissions/1.12.3/AndroidPermissionsInternal.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed extern class Android
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.CAMERA");
    ::STRINGS[1] = uString::Const("android.permission.READ_EXTERNAL_STORAGE");
    ::STRINGS[2] = uString::Const("android.permission.READ_PHONE_STATE");
    ::STRINGS[3] = uString::Const("android.permission.WRITE_EXTERNAL_STORAGE");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _camera()
void Android___camera_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_camera();
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage()
void Android___read_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _read_phone_state()
void Android___read_phone_state_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_phone_state();
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage()
void Android___write_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_write_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _camera() [static]
::g::Uno::Permissions::PlatformPermission Android::_camera()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() [static]
::g::Uno::Permissions::PlatformPermission Android::_read_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[1/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _read_phone_state() [static]
::g::Uno::Permissions::PlatformPermission Android::_read_phone_state()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[2/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() [static]
::g::Uno::Permissions::PlatformPermission Android::_write_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[3/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
