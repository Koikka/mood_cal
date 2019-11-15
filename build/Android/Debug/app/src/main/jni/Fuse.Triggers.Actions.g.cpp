// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IEvent-1effd56d.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.Play.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-12e39224.h>
#include <Fuse.Triggers.Actions-152cf163.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
#include <Fuse.Triggers.Actions-3e86c3ba.h>
#include <Fuse.Triggers.Actions-43f643d1.h>
#include <Fuse.Triggers.Actions-4d1a4aa2.h>
#include <Fuse.Triggers.Actions-55cc9448.h>
#include <Fuse.Triggers.Actions-56de3533.h>
#include <Fuse.Triggers.Actions-6840c184.h>
#include <Fuse.Triggers.Actions-7eb39129.h>
#include <Fuse.Triggers.Actions-91a76e2c.h>
#include <Fuse.Triggers.Actions-9ffa7d4d.h>
#include <Fuse.Triggers.Actions-a1deba7c.h>
#include <Fuse.Triggers.Actions-a73f808c.h>
#include <Fuse.Triggers.Actions-b616b804.h>
#include <Fuse.Triggers.Actions-b89b5028.h>
#include <Fuse.Triggers.Actions-c6d3094a.h>
#include <Fuse.Triggers.Actions-dceb929e.h>
#include <Fuse.Triggers.Actions-e1385512.h>
#include <Fuse.Triggers.Actions-e25d2f1f.h>
#include <Fuse.Triggers.Actions-e2754b23.h>
#include <Fuse.Triggers.Actions-e5a7c352.h>
#include <Fuse.Triggers.Actions-e9589b1e.h>
#include <Fuse.Triggers.Actions-ed395b9f.h>
#include <Fuse.Triggers.Actions-f4470978.h>
#include <Fuse.Triggers.Actions-f7217aa4.h>
#include <Fuse.Triggers.Actions-fbcb09ea.h>
#include <Fuse.Triggers.Actions-fd7e228.h>
#include <Fuse.Triggers.Actions-ffca709e.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutT-3bcc5640.h>
#include <Fuse.Triggers.LayoutT-7481130.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.CancelInt-62b399bf.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--132bd82f.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-20ee58c0.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property1-1.h>
static uString* STRINGS[21];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Elements/1.12.0/Triggers/Actions/BringIntoView.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class BringIntoView
// {
static void BringIntoView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->fp_build_ = BringIntoView_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls/1.12.0/Triggers/BringToFront.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class BringToFront
// {
static void BringToFront_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[2/*Fuse.Visual*/], offsetof(BringToFront, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->fp_build_ = BringToFront_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Visual get_Target()
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void BringToFront::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Callback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Callback
// {
static void Callback_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::Action_typeof(), offsetof(Callback, _Action), 0,
        ::TYPES[3/*Fuse.VisualEventHandler*/], offsetof(Callback, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->fp_build_ = Callback_build;
    type->fp_ctor_ = (void*)Callback__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Callback()
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// public generated Uno.Action get_Action()
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value)
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.VisualEventHandler value)
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value)
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New()
void Callback__New2_fn(Callback** __retval)
{
    *__retval = Callback::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
    {
        ::g::Fuse::Visual* visual = (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);
        uPtr(__this->Handler1)->Invoke(2, visual, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(visual));
    }
}

// public generated Callback() [instance]
void Callback::ctor_2()
{
    ctor_1();
}

// public generated Uno.Action get_Action() [instance]
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance]
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.VisualEventHandler value) [instance]
void Callback::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) [instance]
void Callback::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated Callback New() [static]
Callback* Callback::New2()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/CancelInteractions.uno
// --------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class CancelInteractions
// {
static void CancelInteractions_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Visual_typeof(), offsetof(CancelInteractions, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->fp_build_ = CancelInteractions_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Visual get_Target()
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void CancelInteractions::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Collapse
// {
static void Collapse_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Cannot find an Element/ICollapse");
    ::STRINGS[1] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.ICollapse>*/, ::g::Fuse::Triggers::Actions::ICollapse_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->fp_build_ = Collapse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[4/*Fuse.Node.FindByType<Fuse.Triggers.Actions.ICollapse>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr(t), ::TYPES[5/*Fuse.Triggers.Actions.ICollapse*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Cannot find...*/], __this, ::STRINGS[1/*"/Users/antt...*/], 110, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/DebugAction.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class DebugAction
// {
static void DebugAction_build(uType* type)
{
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL), offsetof(DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(DebugAction, _Message), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->fp_build_ = DebugAction_build;
    type->fp_ctor_ = (void*)DebugAction__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated DebugAction()
void DebugAction__ctor_2_fn(DebugAction* __this)
{
    __this->ctor_2();
}

// public generated string get_Message()
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value)
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// public generated DebugAction New()
void DebugAction__New2_fn(DebugAction** __retval)
{
    *__retval = DebugAction::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log2(__this->Message(), 0);

    if (__this->_props != NULL)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]))
                    {
                        uObject* prop = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
                        ::g::Uno::Diagnostics::Debug::Log2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/])), ::STRINGS[3/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/]))), 0);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            }
            __after_finally_0:;
        }
    }
}

// public generated DebugAction() [instance]
void DebugAction::ctor_2()
{
    ctor_1();
}

// public generated string get_Message() [instance]
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance]
void DebugAction::Message(uString* value)
{
    _Message = value;
}

// public generated DebugAction New() [static]
DebugAction* DebugAction::New2()
{
    DebugAction* obj2 = (DebugAction*)uNew(DebugAction_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class DebugProperty<T>
// {
static void DebugProperty_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(DebugProperty, _Value), 0);
}

DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->fp_build_ = DebugProperty_build;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    return type;
}

// public string GetStringValue()
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag()
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated string get_Tag()
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value)
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value()
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value)
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value)
{
    __this->Value(value);
}

// public string GetStringValue() [instance]
uString* DebugProperty::GetStringValue()
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return ::g::Uno::String::op_Addition1(::STRINGS[4/*""*/], uBoxPtr(__type->T(0), (::g::Uno::UX::Property1__Get_fn(uPtr(Value()), &ret2), ret2)));
}

// public string GetTag() [instance]
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance]
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance]
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance]
::g::Uno::UX::Property1* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance]
void DebugProperty::Value(::g::Uno::UX::Property1* value)
{
    _Value = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class EvaluateJS
// {
static void EvaluateJS_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.IWebView>*/, ::TYPES[8/*Fuse.Controls.IWebView*/], NULL);
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _rawSource), 0,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _processedSource), 0,
        ::TYPES[8/*Fuse.Controls.IWebView*/], offsetof(EvaluateJS, _target), 0,
        ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/], offsetof(EvaluateJS, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->fp_build_ = EvaluateJS_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// private void Execute(Fuse.Controls.IWebView webView)
void EvaluateJS__Execute_fn(EvaluateJS* __this, uObject* webView)
{
    __this->Execute(webView);
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value)
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value)
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected override sealed void Perform(Fuse.Node target)
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->_target;
    uObject* webView = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[10/*Fuse.Node.FindByType<Fuse.Controls.IWebView>*/]);

    if ((webView != NULL) && !::g::Uno::String::IsNullOrEmpty(__this->_rawSource))
        __this->Execute(webView);
}

// private void ResultHandler(string result)
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// private void Execute(Fuse.Controls.IWebView webView) [instance]
void EvaluateJS::Execute(uObject* webView)
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(webView), ::TYPES[8/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[9/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance]
void EvaluateJS::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance]
void EvaluateJS::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// private void ResultHandler(string result) [instance]
void EvaluateJS::ResultHandler(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Focus.uno
// -------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class GiveFocus
// {
// static generated GiveFocus()
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New2();
}

static void GiveFocus_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[2/*Fuse.Visual*/], offsetof(GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&GiveFocus::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->fp_build_ = GiveFocus_build;
    type->fp_ctor_ = (void*)GiveFocus__New2_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated GiveFocus()
void GiveFocus__ctor_2_fn(GiveFocus* __this)
{
    __this->ctor_2();
}

// public generated GiveFocus New()
void GiveFocus__New2_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[2/*Fuse.Visual*/])));
}

// public generated Fuse.Visual get_Target()
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance]
void GiveFocus::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void GiveFocus::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static]
GiveFocus* GiveFocus::New2()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Hide
// {
static void Hide_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Cannot find an Element/IHide");
    ::STRINGS[1] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[12] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IHide>*/, ::g::Fuse::Triggers::Actions::IHide_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->fp_build_ = Hide_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[12/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IHide>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr(t), ::TYPES[13/*Fuse.Triggers.Actions.IHide*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[5/*"Cannot find...*/], __this, ::STRINGS[1/*"/Users/antt...*/], 74, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract interface ICollapse
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    return type;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract interface IHide
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    return type;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract interface IShow
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    return type;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    return type;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Toggle.uno
// --------------------------------------------------------------------------------------------------------------------------------------------

// public abstract interface IToggleable
// {
uInterfaceType* IToggleable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IToggleable", 0, 0);
    return type;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class JSEventArgs
// {
static void JSEventArgs_build(uType* type)
{
    ::STRINGS[6] = uString::Const("json");
    ::TYPES[14] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(JSEventArgs, ResultJson), 0);
}

JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->fp_build_ = JSEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public JSEventArgs(string resultJson)
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s)
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[14/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[6/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson)
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance]
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static]
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args)
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class LoadHtml
// {
static void LoadHtml_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(LoadHtml_type, interface0),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface1));
    type->SetFields(10,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _Source), 0);
}

LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->fp_build_ = LoadHtml_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadHtml__Execute_fn;
    type->interface1.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface1.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated string get_BaseUrl()
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value)
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadHtml1(__this->Source(), __this->BaseUrl());
}

// public generated string get_Source()
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value)
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated string get_BaseUrl() [instance]
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance]
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated string get_Source() [instance]
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance]
void LoadHtml::Source(uString* value)
{
    _Source = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class LoadUrl
// {
static void LoadUrl_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::String_typeof(), offsetof(LoadUrl, _Url), 0);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->fp_build_ = LoadUrl_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadUrl__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadUrl(__this->Url());
}

// public generated string get_Url()
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value)
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated string get_Url() [instance]
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance]
void LoadUrl::Url(uString* value)
{
    _Url = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Pause
// {
static void Pause_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->fp_build_ = Pause_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Play
// {
static void Play_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Play);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Play", options);
    type->fp_build_ = Play_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Play__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public abstract class PlaybackAction
// {
static void PlaybackAction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(PlaybackAction, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->fp_build_ = PlaybackAction_build;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Fuse.Triggers.IPlayback get_Target()
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value)
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance]
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance]
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class PlayTo
// {
static void PlayTo_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::Double_typeof(), offsetof(PlayTo, _Progress), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->fp_build_ = PlayTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]), __this->Progress());
}

// public generated double get_Progress()
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value)
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public generated double get_Progress() [instance]
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance]
void PlayTo::Progress(double value)
{
    _Progress = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// -------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Pulse
// {
static void Pulse_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[17/*Fuse.Triggers.IPulseTrigger*/], offsetof(Pulse, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->fp_build_ = Pulse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPulseTrigger*/]));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target()
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value)
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance]
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance]
void Pulse::Target(uObject* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// -------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class PulseBackward
// {
static void PulseBackward_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseBackward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->fp_build_ = PulseBackward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward1();
}

// public generated Fuse.Triggers.Timeline get_Target()
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// -------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class PulseForward
// {
static void PulseForward_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseForward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->fp_build_ = PulseForward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target()
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class RaiseUserEvent
// {
static void RaiseUserEvent_build(uType* type)
{
    ::STRINGS[7] = uString::Const("no UserEvent found: ");
    ::STRINGS[8] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::IDisposable_typeof();
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::UserEvent_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::UX::Selector_typeof(), offsetof(RaiseUserEvent, _eventName), 0,
        ::g::Fuse::Node_typeof(), offsetof(RaiseUserEvent, _eventTarget), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(RaiseUserEvent, _event), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), offsetof(RaiseUserEvent, _args), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->fp_build_ = RaiseUserEvent_build;
    type->fp_ctor_ = (void*)RaiseUserEvent__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated RaiseUserEvent()
void RaiseUserEvent__ctor_2_fn(RaiseUserEvent* __this)
{
    __this->ctor_2();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList()
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval)
{
    *__retval = __this->ArgList();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs()
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public Uno.UX.Selector get_EventName()
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public void set_EventName(Uno.UX.Selector value)
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public generated RaiseUserEvent New()
void RaiseUserEvent__New2_fn(RaiseUserEvent** __retval)
{
    *__retval = RaiseUserEvent::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    if ((__this->_event == NULL) || (__this->_eventTarget != target))
    {
        ::g::Fuse::Visual* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(target, __this->EventName(), &n);
        __this->_eventTarget = target;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[7/*"no UserEven...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->EventName())), __this, ::STRINGS[8/*"/Users/antt...*/], 86, ::STRINGS[2/*"Perform"*/], NULL);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// public generated RaiseUserEvent() [instance]
void RaiseUserEvent::ctor_2()
{
    ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() [instance]
uObject* RaiseUserEvent::ArgList()
{
    if (_args == NULL)
        _args = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Fuse.Triggers.Actions.UserEventArg>*/]));

    return _args;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance]
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<string, object>*/]);
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::TYPES[20/*Uno.Collections.IEnumerable<Fuse.Triggers.Actions.UserEventArg>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[21/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
                    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[23/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[23/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    return d;
}

// public Uno.UX.Selector get_EventName() [instance]
::g::Uno::UX::Selector RaiseUserEvent::EventName()
{
    return _eventName;
}

// public void set_EventName(Uno.UX.Selector value) [instance]
void RaiseUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _eventName = value;
    _event = NULL;
}

// public generated RaiseUserEvent New() [static]
RaiseUserEvent* RaiseUserEvent::New2()
{
    RaiseUserEvent* obj2 = (RaiseUserEvent*)uNew(RaiseUserEvent_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Focus.uno
// -------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class ReleaseFocus
// {
static void ReleaseFocus_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->fp_build_ = ReleaseFocus_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Navigation/1.12.0/NavigationActions.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class ReleasePage
// {
static void ReleasePage_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Requires a Visual and Navigator parent");
    ::STRINGS[10] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Navigation/1.12.0/NavigationActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Visual_typeof(), offsetof(ReleasePage, _pendVisual), 0,
        ::TYPES[25/*Fuse.Controls.Navigator*/], offsetof(ReleasePage, _pendNavigator), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleasePage);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleasePage", options);
    type->fp_build_ = ReleasePage_build;
    type->fp_ctor_ = (void*)ReleasePage__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleasePage__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ReleasePage()
void ReleasePage__ctor_2_fn(ReleasePage* __this)
{
    __this->ctor_2();
}

// private void DeferredRelease()
void ReleasePage__DeferredRelease_fn(ReleasePage* __this)
{
    __this->DeferredRelease();
}

// public generated ReleasePage New()
void ReleasePage__New2_fn(ReleasePage** __retval)
{
    *__retval = ReleasePage::New2();
}

// protected override sealed void Perform(Fuse.Node n)
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n)
{
    __this->_pendVisual = ((::g::Fuse::Visual*)uPtr(n)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]));
    __this->_pendNavigator = ((__this->_pendVisual == NULL) ? uCast< ::g::Fuse::Controls::Navigator*>(NULL, ::TYPES[25/*Fuse.Controls.Navigator*/]) : uAs< ::g::Fuse::Controls::Navigator*>(uPtr(__this->_pendVisual)->Parent(), ::TYPES[25/*Fuse.Controls.Navigator*/]));

    if ((__this->_pendVisual == NULL) || (__this->_pendNavigator == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"Requires a ...*/], __this, ::STRINGS[10/*"/Users/antt...*/], 26, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)ReleasePage__DeferredRelease_fn, __this), -1, 2);
}

// public generated ReleasePage() [instance]
void ReleasePage::ctor_2()
{
    ctor_1();
}

// private void DeferredRelease() [instance]
void ReleasePage::DeferredRelease()
{
    if ((_pendNavigator == NULL) || (_pendVisual == NULL))
        return;

    uPtr(_pendNavigator)->ReleasePage(_pendVisual);
    _pendNavigator = NULL;
    _pendVisual = NULL;
}

// public generated ReleasePage New() [static]
ReleasePage* ReleasePage::New2()
{
    ReleasePage* obj1 = (ReleasePage*)uNew(ReleasePage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Reload
// {
static void Reload_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->fp_build_ = Reload_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))Reload__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Reload();
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls/1.12.0/Triggers/BringToFront.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class SendToBack
// {
static void SendToBack_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[2/*Fuse.Visual*/], offsetof(SendToBack, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->fp_build_ = SendToBack_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Visual get_Target()
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void SendToBack::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Set.uno
// -----------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Set<T>
// {
static void Set_build(uType* type)
{
    ::STRINGS[11] = uString::Const("target");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(Set, _hasIncrement), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _blender), 0,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Expression), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 16;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->fp_build_ = Set_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public Set(Uno.UX.Property<T> target)
void Set__ctor_2_fn(Set* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_2(target);
}

// public generated Uno.UX.Expression<T> get_Expression()
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value)
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public Set New(Uno.UX.Property<T> target)
void Set__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Set** __retval)
{
    *__retval = Set::New2(__type, target);
}

// protected override sealed void Perform(Fuse.Node target)
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target()
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value)
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Update(T value)
void Set__Update_fn(Set* __this, void* value)
{
    ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Target()), value, NULL);
}

// public generated T get_Value()
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value)
void Set__set_Value_fn(Set* __this, void* value)
{
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance]
void Set::ctor_2(::g::Uno::UX::Property1* target)
{
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance]
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance]
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance]
::g::Uno::UX::Property1* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance]
void Set::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Set New(Uno.UX.Property<T> target) [static]
Set* Set::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_2(target);
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Show
// {
static void Show_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Cannot find an Element/IShow");
    ::STRINGS[1] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[27] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IShow>*/, ::g::Fuse::Triggers::Actions::IShow_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->fp_build_ = Show_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[27/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IShow>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr(t), ::TYPES[28/*Fuse.Triggers.Actions.IShow*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Cannot find...*/], __this, ::STRINGS[1/*"/Users/antt...*/], 38, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Stop
// {
static void Stop_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->fp_build_ = Stop_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class StopLoading
// {
static void StopLoading_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(10);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->fp_build_ = StopLoading_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))StopLoading__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Stop();
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class TimelineAction
// {
static void TimelineAction_build(uType* type)
{
    ::STRINGS[13] = uString::Const("`TimelineAction` called without a `Timeline` `Target`");
    ::STRINGS[14] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), offsetof(TimelineAction, _How), 0,
        ::g::Uno::Double_typeof(), offsetof(TimelineAction, _Progress), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(TimelineAction, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TimelineAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TimelineAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TimelineAction", options);
    type->fp_build_ = TimelineAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TimelineAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How()
void TimelineAction__get_How_fn(TimelineAction* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value)
void TimelineAction__set_How_fn(TimelineAction* __this, int32_t* value)
{
    __this->How(*value);
}

// protected override sealed void Perform(Fuse.Node target)
void TimelineAction__Perform_fn(TimelineAction* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"`TimelineAc...*/], __this, ::STRINGS[14/*"/Users/antt...*/], 48, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->How())
    {
        case 0:
        {
            uPtr(t)->Pause();
            break;
        }
        case 2:
        {
            uPtr(t)->PlayTo1(__this->Progress());
            break;
        }
        case 3:
        {
            uPtr(t)->Pulse1();
            break;
        }
        case 4:
        {
            uPtr(t)->PulseBackward1();
            break;
        }
        case 5:
        {
            uPtr(t)->PulseForward();
            break;
        }
        case 1:
        case 6:
        {
            uPtr(t)->Resume();
            break;
        }
        case 7:
        {
            uPtr(t)->Progress1(__this->Progress());
            break;
        }
        case 8:
        {
            uPtr(t)->Stop1();
            break;
        }
    }
}

// public generated double get_Progress()
void TimelineAction__get_Progress_fn(TimelineAction* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value)
void TimelineAction__set_Progress_fn(TimelineAction* __this, double* value)
{
    __this->Progress(*value);
}

// public generated Fuse.Triggers.Timeline get_Target()
void TimelineAction__get_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void TimelineAction__set_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() [instance]
int32_t TimelineAction::How()
{
    return _How;
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) [instance]
void TimelineAction::How(int32_t value)
{
    _How = value;
}

// public generated double get_Progress() [instance]
double TimelineAction::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance]
void TimelineAction::Progress(double value)
{
    _Progress = value;
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* TimelineAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void TimelineAction::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------------

// public enum TimelineActionHow
uEnumType* TimelineActionHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TimelineActionHow", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Pause", 0LL,
        "Play", 1LL,
        "PlayTo", 2LL,
        "Pulse", 3LL,
        "PulseBackward", 4LL,
        "PulseForward", 5LL,
        "Resume", 6LL,
        "Seek", 7LL,
        "Stop", 8LL);
    return type;
}

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Toggle.uno
// --------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Toggle
// {
static void Toggle_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Could not find `IToggleable` target");
    ::STRINGS[16] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Toggle.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[29] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IToggleable>*/, ::g::Fuse::Triggers::Actions::IToggleable_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Triggers::Actions::IToggleable_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[30/*Fuse.Triggers.Actions.IToggleable*/], offsetof(Toggle, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Toggle", options);
    type->fp_build_ = Toggle_build;
    type->fp_ctor_ = (void*)Toggle__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Toggle()
void Toggle__ctor_2_fn(Toggle* __this)
{
    __this->ctor_2();
}

// public generated Toggle New()
void Toggle__New2_fn(Toggle** __retval)
{
    *__retval = Toggle::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[29/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IToggleable>*/]);

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"Could not f...*/], __this, ::STRINGS[16/*"/Users/antt...*/], 41, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::Triggers::Actions::IToggleable::Toggle(uInterface(uPtr(t), ::TYPES[30/*Fuse.Triggers.Actions.IToggleable*/]));
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target()
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value)
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance]
void Toggle::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() [instance]
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) [instance]
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static]
Toggle* Toggle::New2()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class TransitionLayout
// {
static void TransitionLayout_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Missing `From` or cannot find `Element` target");
    ::STRINGS[18] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _perform), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _From), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->fp_build_ = TransitionLayout_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Fuse.Elements.Element get_From()
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value)
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// protected override sealed void Perform(Fuse.Node target)
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* ind1;
    __this->_perform = (ind1 = __this->Target(), ((ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/])));

    if ((__this->_perform == NULL) || (__this->From() == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[17/*"Missing `Fr...*/], __this, ::STRINGS[18/*"/Users/antt...*/], 355, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 1, 3);
}

// public generated Fuse.Elements.Element get_Target()
void TransitionLayout__get_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Elements.Element value)
void TransitionLayout__set_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// private void Transition()
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated Fuse.Elements.Element get_From() [instance]
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance]
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// public generated Fuse.Elements.Element get_Target() [instance]
::g::Fuse::Elements::Element* TransitionLayout::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Elements.Element value) [instance]
void TransitionLayout::Target(::g::Fuse::Elements::Element* value)
{
    _Target = value;
}

// private void Transition() [instance]
void TransitionLayout::Transition()
{
    ::g::Uno::Float4x4 ind2;
    ind2 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind2.M41, ind2.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/StateTransition.uno
// -----------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class TransitionState
// {
static void TransitionState_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Missing `Target`");
    ::STRINGS[20] = uString::Const("/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/StateTransition.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(TransitionState, _Type), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->fp_build_ = TransitionState_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"Missing `Ta...*/], __this, ::STRINGS[20/*"/Users/antt...*/], 24, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target()
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value)
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type()
void TransitionState__get_Type_fn(TransitionState* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value)
void TransitionState__set_Type_fn(TransitionState* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance]
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance]
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance]
int32_t TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance]
void TransitionState::Type(int32_t value)
{
    _Type = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/StateTransition.uno
// -----------------------------------------------------------------------------------------------------------------------------------------------------

// public enum TransitionStateType
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/TriggerAction.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract class TriggerAction
// {
static void TriggerAction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(TriggerAction_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), offsetof(TriggerAction, _when), 0,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _delay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _isActive), 0,
        ::g::Uno::String_typeof(), offsetof(TriggerAction, _SourceFileName), 0,
        ::g::Uno::Int_typeof(), offsetof(TriggerAction, _SourceLineNumber), 0,
        ::g::Fuse::Node_typeof(), offsetof(TriggerAction, _TargetNode), 0);
}

TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->fp_build_ = TriggerAction_build;
    type->fp_OnUnrooted = TriggerAction__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected generated TriggerAction()
void TriggerAction__ctor_1_fn(TriggerAction* __this)
{
    __this->ctor_1();
}

// public float get_AtProgress()
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->AtProgress();
}

// public void set_AtProgress(float value)
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value)
{
    __this->AtProgress(*value);
}

// public float get_Delay()
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value)
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// private Fuse.ISourceLocation Fuse.ISourceLocation.get_SourceNearest()
void TriggerAction__FuseISourceLocationget_SourceNearest_fn(TriggerAction* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// public bool get_IsActive()
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered()
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// protected virtual void OnUnrooted()
void TriggerAction__OnUnrooted_fn(TriggerAction* __this)
{
}

// public void PerformFromNode(Fuse.Node target)
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration)
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated string get_SourceFileName()
void TriggerAction__get_SourceFileName_fn(TriggerAction* __this, uString** __retval)
{
    *__retval = __this->SourceFileName();
}

// public generated void set_SourceFileName(string value)
void TriggerAction__set_SourceFileName_fn(TriggerAction* __this, uString* value)
{
    __this->SourceFileName(value);
}

// public generated int get_SourceLineNumber()
void TriggerAction__get_SourceLineNumber_fn(TriggerAction* __this, int32_t* __retval)
{
    *__retval = __this->SourceLineNumber();
}

// public generated void set_SourceLineNumber(int value)
void TriggerAction__set_SourceLineNumber_fn(TriggerAction* __this, int32_t* value)
{
    __this->SourceLineNumber(*value);
}

// public generated Fuse.Node get_TargetNode()
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value)
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// public void Unroot()
void TriggerAction__Unroot_fn(TriggerAction* __this)
{
    __this->Unroot();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When()
void TriggerAction__get_When_fn(TriggerAction* __this, int32_t* __retval)
{
    *__retval = __this->When();
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value)
void TriggerAction__set_When_fn(TriggerAction* __this, int32_t* value)
{
    __this->When(*value);
}

// protected generated TriggerAction() [instance]
void TriggerAction::ctor_1()
{
    _isActive = true;
    ctor_();
}

// public float get_AtProgress() [instance]
float TriggerAction::AtProgress()
{
    return _progress;
}

// public void set_AtProgress(float value) [instance]
void TriggerAction::AtProgress(float value)
{
    _hasProgress = true;
    _progress = value;
}

// public float get_Delay() [instance]
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance]
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public bool get_IsActive() [instance]
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance]
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance]
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance]
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance]
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated string get_SourceFileName() [instance]
uString* TriggerAction::SourceFileName()
{
    return _SourceFileName;
}

// public generated void set_SourceFileName(string value) [instance]
void TriggerAction::SourceFileName(uString* value)
{
    _SourceFileName = value;
}

// public generated int get_SourceLineNumber() [instance]
int32_t TriggerAction::SourceLineNumber()
{
    return _SourceLineNumber;
}

// public generated void set_SourceLineNumber(int value) [instance]
void TriggerAction::SourceLineNumber(int32_t value)
{
    _SourceLineNumber = value;
}

// public generated Fuse.Node get_TargetNode() [instance]
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance]
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}

// public void Unroot() [instance]
void TriggerAction::Unroot()
{
    OnUnrooted();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() [instance]
int32_t TriggerAction::When()
{
    return _when;
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) [instance]
void TriggerAction::When(int32_t value)
{
    _when = value;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/TriggerAction.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public enum TriggerWhen
uEnumType* TriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerWhen", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "ForwardAndBackward", 2LL,
        "Start", 3LL,
        "Stop", 4LL,
        "Both", 2LL);
    return type;
}

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class UserEventArg
// {
static void UserEventArg_build(uType* type)
{
    ::TYPES[31] = ::g::Uno::String_typeof();
    type->SetFields(1,
        ::TYPES[31/*string*/], offsetof(UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(UserEventArg, _Value), 0);
}

uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->fp_build_ = UserEventArg_build;
    return type;
}

// public UserEventArg(string name)
void UserEventArg__ctor_1_fn(UserEventArg* __this, uString* name)
{
    __this->ctor_1(name);
}

// public generated string get_Name()
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value)
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public UserEventArg New(string name)
void UserEventArg__New2_fn(uString* name, UserEventArg** __retval)
{
    *__retval = UserEventArg::New2(name);
}

// public string get_StringValue()
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->StringValue();
}

// public void set_StringValue(string value)
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value)
{
    __this->StringValue(value);
}

// public generated object get_Value()
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value)
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public UserEventArg(string name) [instance]
void UserEventArg::ctor_1(uString* name)
{
    ctor_();
    Name(name);
}

// public generated string get_Name() [instance]
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance]
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public string get_StringValue() [instance]
uString* UserEventArg::StringValue()
{
    return uCast<uString*>(Value(), ::TYPES[31/*string*/]);
}

// public void set_StringValue(string value) [instance]
void UserEventArg::StringValue(uString* value)
{
    Value(value);
}

// public generated object get_Value() [instance]
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance]
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}

// public UserEventArg New(string name) [static]
UserEventArg* UserEventArg::New2(uString* name)
{
    UserEventArg* obj1 = (UserEventArg*)uNew(UserEventArg_typeof());
    obj1->ctor_1(name);
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public abstract class WebViewNavAction
// {
static void WebViewNavAction_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.WebView>*/, ::g::Fuse::Controls::WebView_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WebViewNavAction_type, interface0));
    type->SetFields(10);
}

WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->fp_build_ = WebViewNavAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Controls::WebView* webView = (::g::Fuse::Controls::WebView*)uPtr(target)->FindByType(::TYPES[32/*Fuse.Node.FindByType<Fuse.Controls.WebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}
// }

}}}} // ::g::Fuse::Triggers::Actions
