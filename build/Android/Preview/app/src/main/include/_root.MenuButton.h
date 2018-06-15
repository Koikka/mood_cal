// This file was generated based on /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/build/Android/Preview/cache/ux14/MenuButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <_root.MenuItem.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
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
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MenuButton;}

namespace g{

// public partial sealed class MenuButton :2
// {
::g::Fuse::Controls::Panel_type* MenuButton_typeof();
void MenuButton__ctor_8_fn(MenuButton* __this);
void MenuButton__InitializeUX1_fn(MenuButton* __this);
void MenuButton__New5_fn(MenuButton** __retval);
void MenuButton__SetText_fn(MenuButton* __this, uString* value, uObject* origin);
void MenuButton__get_Text_fn(MenuButton* __this, uString** __retval);
void MenuButton__set_Text_fn(MenuButton* __this, uString* value);

struct MenuButton : ::g::MenuItem
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> label_Value_inst;
    uStrong< ::g::Fuse::Controls::Text*> label;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MenuButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MenuButton_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX1();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static MenuButton* New5();
};
// }

} // ::g
