// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.VideoTools.Video-4d91dcf8.h>
#include <Fuse.VideoTools.VideoTools.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace VideoTools{

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/VideoTools.uno
// ---------------------------------------------------------------------------

// internal sealed extern class VideoTools.AndroidVideoTools :97
// {
static void VideoTools__AndroidVideoTools_build(uType* type)
{
}

uType* VideoTools__AndroidVideoTools_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoTools__AndroidVideoTools);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.VideoTools.VideoTools.AndroidVideoTools", options);
    type->fp_build_ = VideoTools__AndroidVideoTools_build;
    return type;
}

// public static bool SaveVideo(string outputFileURL) :100
void VideoTools__AndroidVideoTools__SaveVideo_fn(uString* outputFileURL, bool* __retval)
{
    *__retval = VideoTools__AndroidVideoTools::SaveVideo(outputFileURL);
}

// public static bool SaveVideo(string outputFileURL) [static] :100
bool VideoTools__AndroidVideoTools::SaveVideo(uString* outputFileURL)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SaveVideo418", "(Ljava/lang/String;)Z");
        uString* _uoutputFileURL=outputFileURL;
        jstring _outputFileURL = JniHelper::UnoToJavaString(_uoutputFileURL);
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_outputFileURL);
        bool __result = (bool)__jresult;
        if (_outputFileURL!=NULL) { U_JNIVAR->DeleteLocalRef(_outputFileURL); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/VideoTools.uno
// ---------------------------------------------------------------------------

// public sealed class VideoTools :27
// {
static void VideoTools_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&VideoTools::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* VideoTools_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(VideoTools);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.VideoTools.VideoTools", options);
    type->fp_build_ = VideoTools_build;
    type->fp_ctor_ = (void*)VideoTools__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public VideoTools() :32
void VideoTools__ctor_2_fn(VideoTools* __this)
{
    __this->ctor_2();
}

// private object CopyVideoToCameraRoll(Fuse.Scripting.Context c, object[] args) :42
void VideoTools__CopyVideoToCameraRoll_fn(VideoTools* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->CopyVideoToCameraRoll(c, args);
}

// public VideoTools New() :32
void VideoTools__New2_fn(VideoTools** __retval)
{
    *__retval = VideoTools::New2();
}

uSStrong<VideoTools*> VideoTools::_instance_;

// public VideoTools() [instance] :32
void VideoTools::ctor_2()
{
    ctor_1();

    if (VideoTools::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(VideoTools::_instance_ = this, uString::Const("FuseJS/VideoTools"));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("copyVideoToCameraRoll"), uDelegate::New(::g::Fuse::Scripting::NativeCallback_typeof(), (void*)VideoTools__CopyVideoToCameraRoll_fn, this)));
}

// private object CopyVideoToCameraRoll(Fuse.Scripting.Context c, object[] args) [instance] :42
uObject* VideoTools::CopyVideoToCameraRoll(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        return uBox(::g::Uno::Bool_typeof(), false);

    return uBox(::g::Uno::Bool_typeof(), VideoTools__AndroidVideoTools::SaveVideo(::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)))));
}

// public VideoTools New() [static] :32
VideoTools* VideoTools::New2()
{
    VideoTools* obj1 = (VideoTools*)uNew(VideoTools_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::VideoTools
