// This file was generated based on '.uno/ux15/Hamburger.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Hamburger;}

namespace g{

// public partial sealed class Hamburger :2
// {
::g::Fuse::Controls::Shape_type* Hamburger_typeof();
void Hamburger__ctor_8_fn(Hamburger* __this);
void Hamburger__InitializeUX_fn(Hamburger* __this);
void Hamburger__get_IsOpen_fn(Hamburger* __this, bool* __retval);
void Hamburger__set_IsOpen_fn(Hamburger* __this, bool* value);
void Hamburger__New4_fn(Hamburger** __retval);
void Hamburger__SetIsOpen_fn(Hamburger* __this, bool* value, uObject* origin);

struct Hamburger : ::g::Fuse::Controls::Rectangle
{
    bool _field_IsOpen;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> top;
    uStrong< ::g::Fuse::Controls::Rectangle*> mid;
    uStrong< ::g::Fuse::Controls::Rectangle*> bot;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Hamburger_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Hamburger_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Hamburger_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Hamburger_typeof()->Init(), __selector3_; }

    void ctor_8();
    void InitializeUX();
    bool IsOpen();
    void IsOpen(bool value);
    void SetIsOpen(bool value, uObject* origin);
    static Hamburger* New4();
};
// }

} // ::g
