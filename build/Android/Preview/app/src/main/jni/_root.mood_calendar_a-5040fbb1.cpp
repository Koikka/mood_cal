// This file was generated based on /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/build/Android/Preview/cache/ux14/mood_calendar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MenuButton.h>
#include <_root.mood_calendar_a-5040fbb1.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class mood_calendar_accessor_MenuButton_Text :11
// {
// static generated mood_calendar_accessor_MenuButton_Text() :11
static void mood_calendar_accessor_MenuButton_Text__cctor__fn(uType* __type)
{
    mood_calendar_accessor_MenuButton_Text::Singleton_ = mood_calendar_accessor_MenuButton_Text::New1();
    mood_calendar_accessor_MenuButton_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void mood_calendar_accessor_MenuButton_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::MenuButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&mood_calendar_accessor_MenuButton_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mood_calendar_accessor_MenuButton_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* mood_calendar_accessor_MenuButton_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mood_calendar_accessor_MenuButton_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("mood_calendar_accessor_MenuButton_Text", options);
    type->fp_build_ = mood_calendar_accessor_MenuButton_Text_build;
    type->fp_ctor_ = (void*)mood_calendar_accessor_MenuButton_Text__New1_fn;
    type->fp_cctor_ = mood_calendar_accessor_MenuButton_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))mood_calendar_accessor_MenuButton_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))mood_calendar_accessor_MenuButton_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))mood_calendar_accessor_MenuButton_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))mood_calendar_accessor_MenuButton_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))mood_calendar_accessor_MenuButton_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated mood_calendar_accessor_MenuButton_Text() :11
void mood_calendar_accessor_MenuButton_Text__ctor_1_fn(mood_calendar_accessor_MenuButton_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void mood_calendar_accessor_MenuButton_Text__GetAsObject_fn(mood_calendar_accessor_MenuButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("mood_calendar_accessor_MenuButton_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::MenuButton*>(obj, ::TYPES[0/*MenuButton*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void mood_calendar_accessor_MenuButton_Text__get_Name_fn(mood_calendar_accessor_MenuButton_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = mood_calendar_accessor_MenuButton_Text::_name_, void();
}

// public generated mood_calendar_accessor_MenuButton_Text New() :11
void mood_calendar_accessor_MenuButton_Text__New1_fn(mood_calendar_accessor_MenuButton_Text** __retval)
{
    *__retval = mood_calendar_accessor_MenuButton_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void mood_calendar_accessor_MenuButton_Text__get_PropertyType_fn(mood_calendar_accessor_MenuButton_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void mood_calendar_accessor_MenuButton_Text__SetAsObject_fn(mood_calendar_accessor_MenuButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("mood_calendar_accessor_MenuButton_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::MenuButton*>(obj, ::TYPES[0/*MenuButton*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void mood_calendar_accessor_MenuButton_Text__get_SupportsOriginSetter_fn(mood_calendar_accessor_MenuButton_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> mood_calendar_accessor_MenuButton_Text::Singleton_;
::g::Uno::UX::Selector mood_calendar_accessor_MenuButton_Text::_name_;

// public generated mood_calendar_accessor_MenuButton_Text() [instance] :11
void mood_calendar_accessor_MenuButton_Text::ctor_1()
{
    ctor_();
}

// public generated mood_calendar_accessor_MenuButton_Text New() [static] :11
mood_calendar_accessor_MenuButton_Text* mood_calendar_accessor_MenuButton_Text::New1()
{
    mood_calendar_accessor_MenuButton_Text* obj1 = (mood_calendar_accessor_MenuButton_Text*)uNew(mood_calendar_accessor_MenuButton_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
