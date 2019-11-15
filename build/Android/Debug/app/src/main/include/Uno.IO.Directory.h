// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Source/Uno/IO/Directory.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Directory;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Directory
// {
uClassType* Directory_typeof();
void Directory__CreateDirectory_fn(uString* dirName);
void Directory__Delete_fn(uString* dirName, bool* recursive);
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval);
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval);
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval);
void Directory__Exists_fn(uString* dirName, bool* __retval);
void Directory__GetCurrentDirectory_fn(uString** __retval);
void Directory__GetUserConfigDirectory_fn(uString** __retval);
void Directory__GetUserDataDirectory_fn(uString** __retval);
void Directory__GetUserDirectory_fn(int32_t* dir, uString** __retval);
void Directory__Move_fn(uString* oldName, uString* newName);

struct Directory : uObject
{
    static void CreateDirectory(uString* dirName);
    static void Delete(uString* dirName, bool recursive);
    static uObject* EnumerateDirectories(uString* dirName);
    static uObject* EnumerateFiles(uString* dirName);
    static uObject* EnumerateFileSystemEntries(uString* dirName);
    static bool Exists(uString* dirName);
    static uString* GetCurrentDirectory();
    static uString* GetUserConfigDirectory();
    static uString* GetUserDataDirectory();
    static uString* GetUserDirectory(int32_t dir);
    static void Move(uString* oldName, uString* newName);
};
// }

}}} // ::g::Uno::IO
