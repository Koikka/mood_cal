// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IHide
// {
uInterfaceType* IHide_typeof();

struct IHide
{
    void(*fp_Hide)(uObject*);
    static void Hide(const uInterface& __this) { __this.VTable<IHide>()->fp_Hide(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
