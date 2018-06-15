// This file was generated based on '.uno/ux14/Hamburger.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hamburger.h>
#include <_root.mood_calendar_a-b505a898.h>
#include <_root.mood_calendar_F-9275aa33.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public partial sealed class Hamburger :2
// {
// static Hamburger() :23
static void Hamburger__cctor_5_fn(uType* __type)
{
    Hamburger::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Hamburger::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"top"*/]);
    Hamburger::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"mid"*/]);
    Hamburger::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"bot"*/]);
}

static void Hamburger_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("top");
    ::STRINGS[2] = uString::Const("mid");
    ::STRINGS[3] = uString::Const("bot");
    ::STRINGS[4] = uString::Const("IsOpen");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::mood_calendar_accessor_Hamburger_IsOpen_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18));
    type->SetFields(116,
        ::g::Uno::Bool_typeof(), offsetof(Hamburger, _field_IsOpen), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Hamburger, temp_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Hamburger, top), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Hamburger, mid), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Hamburger, bot), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Hamburger::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Hamburger::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Hamburger::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Hamburger::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Shape_type* Hamburger_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 125;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Hamburger);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("Hamburger", options);
    type->fp_build_ = Hamburger_build;
    type->fp_ctor_ = (void*)Hamburger__New4_fn;
    type->fp_cctor_ = Hamburger__cctor_5_fn;
    type->interface18.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface18.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface18.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Hamburger() :27
void Hamburger__ctor_8_fn(Hamburger* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :31
void Hamburger__InitializeUX_fn(Hamburger* __this)
{
    __this->InitializeUX();
}

// public bool get_IsOpen() :8
void Hamburger__get_IsOpen_fn(Hamburger* __this, bool* __retval)
{
    *__retval = __this->IsOpen();
}

// public void set_IsOpen(bool value) :9
void Hamburger__set_IsOpen_fn(Hamburger* __this, bool* value)
{
    __this->IsOpen(*value);
}

// public Hamburger New() :27
void Hamburger__New4_fn(Hamburger** __retval)
{
    *__retval = Hamburger::New4();
}

// public void SetIsOpen(bool value, Uno.UX.IPropertyListener origin) :11
void Hamburger__SetIsOpen_fn(Hamburger* __this, bool* value, uObject* origin)
{
    __this->SetIsOpen(*value, origin);
}

::g::Uno::UX::Selector Hamburger::__selector0_;
::g::Uno::UX::Selector Hamburger::__selector1_;
::g::Uno::UX::Selector Hamburger::__selector2_;
::g::Uno::UX::Selector Hamburger::__selector3_;

// public Hamburger() [instance] :27
void Hamburger::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :31
void Hamburger::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp, Hamburger::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::mood_calendar_accessor_Hamburger_IsOpen::Singleton());
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp4 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Rotate* temp5 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp6 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    top = ::g::Fuse::Controls::Rectangle::New3();
    mid = ::g::Fuse::Controls::Rectangle::New3();
    bot = ::g::Fuse::Controls::Rectangle::New3();
    HitTestMode(2);
    Width(::g::Uno::UX::Size__New1(56.0f, 1));
    Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp3->Y(6.0f);
    temp3->Duration(0.6);
    temp3->DelayBack(0.0);
    temp3->Delay(0.1);
    temp3->Target(top);
    temp3->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp4->Y(-6.0f);
    temp4->Duration(0.6);
    temp4->DelayBack(0.0);
    temp4->Delay(0.1);
    temp4->Target(bot);
    temp4->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp5->Degrees(135.0f);
    temp5->Duration(0.6);
    temp5->DelayBack(0.0);
    temp5->Delay(0.1);
    temp5->Target(top);
    temp5->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp6->Degrees(45.0f);
    temp6->Duration(0.6);
    temp6->DelayBack(0.0);
    temp6->Delay(0.1);
    temp6->Target(bot);
    temp6->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp7->X(0.0f);
    temp7->Duration(0.5);
    temp7->Target(mid);
    temp7->Easing(::g::Fuse::Animations::Easing::QuarticInOut());
    temp9->ItemSpacing(4.0f);
    temp9->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp9->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), top);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), bot);
    uPtr(top)->CornerRadius(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(top)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(top)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(top)->Name(Hamburger::__selector1_);
    uPtr(mid)->CornerRadius(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(mid)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(mid)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(mid)->Name(Hamburger::__selector2_);
    uPtr(bot)->CornerRadius(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(bot)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(bot)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(bot)->Name(Hamburger::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
}

// public bool get_IsOpen() [instance] :8
bool Hamburger::IsOpen()
{
    return _field_IsOpen;
}

// public void set_IsOpen(bool value) [instance] :9
void Hamburger::IsOpen(bool value)
{
    SetIsOpen(value, NULL);
}

// public void SetIsOpen(bool value, Uno.UX.IPropertyListener origin) [instance] :11
void Hamburger::SetIsOpen(bool value, uObject* origin)
{
    if (value != _field_IsOpen)
    {
        _field_IsOpen = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"IsOpen"*/]), origin);
    }
}

// public Hamburger New() [static] :27
Hamburger* Hamburger::New4()
{
    Hamburger* obj1 = (Hamburger*)uNew(Hamburger_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
