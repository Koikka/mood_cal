// This file was generated based on mood_calendar.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mood_calendar_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[11];

namespace g{

// public static generated class mood_calendar_bundle :0
// {
// static mood_calendar_bundle() :0
static void mood_calendar_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    mood_calendar_bundle::_12160064a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[1/*"1-087a686c....*/]);
    mood_calendar_bundle::_221600249_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[2/*"2-c80087d1....*/]);
    mood_calendar_bundle::_3215ffe48_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[3/*"3-1d8ea236....*/]);
    mood_calendar_bundle::_4215ff94f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[4/*"4-dd14c19b....*/]);
    mood_calendar_bundle::_5215ff54e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[5/*"5-9c9ae100....*/]);
    mood_calendar_bundle::_6215ff14d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[6/*"6-5c210065....*/]);
    mood_calendar_bundle::_7215fed4c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[7/*"7-b1af1aca....*/]);
    mood_calendar_bundle::_821602c53_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[8/*"8-9bac83df....*/]);
    mood_calendar_bundle::_921602852_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[9/*"9-5b32a344....*/]);
    mood_calendar_bundle::main85dc14ca_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mood_calendar"*/]))->GetFile(::STRINGS[10/*"main-c75bad...*/]);
}

static void mood_calendar_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("mood_calendar");
    ::STRINGS[1] = uString::Const("1-087a686c.png");
    ::STRINGS[2] = uString::Const("2-c80087d1.png");
    ::STRINGS[3] = uString::Const("3-1d8ea236.png");
    ::STRINGS[4] = uString::Const("4-dd14c19b.png");
    ::STRINGS[5] = uString::Const("5-9c9ae100.png");
    ::STRINGS[6] = uString::Const("6-5c210065.png");
    ::STRINGS[7] = uString::Const("7-b1af1aca.png");
    ::STRINGS[8] = uString::Const("8-9bac83df.png");
    ::STRINGS[9] = uString::Const("9-5b32a344.png");
    ::STRINGS[10] = uString::Const("main-c75badcc.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_12160064a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_221600249_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_3215ffe48_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_4215ff94f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_5215ff54e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_6215ff14d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_7215fed4c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_821602c53_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::_921602852_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&mood_calendar_bundle::main85dc14ca_, uFieldFlagsStatic);
}

uClassType* mood_calendar_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("mood_calendar_bundle", options);
    type->fp_build_ = mood_calendar_bundle_build;
    type->fp_cctor_ = mood_calendar_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_12160064a_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_221600249_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_3215ffe48_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_4215ff94f_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_5215ff54e_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_6215ff14d_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_7215fed4c_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_821602c53_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::_921602852_;
uSStrong< ::g::Uno::IO::BundleFile*> mood_calendar_bundle::main85dc14ca_;
// }

} // ::g
