// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.ActivityResultCallback.h>
#include <Android.ActivityUtils.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Camera.AndroidCamera.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.ResizeIma-56e3edfc.h>
#include <Fuse.Camera.TakePictu-e7e359aa.h>
#include <Fuse.Camera.TakePictureCommand.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.ImageTools.ResizeMode.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[6];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Camera{

// /usr/local/share/uno/Packages/Fuse.Camera/1.8.1/Android/AndroidCamera.uno
// -------------------------------------------------------------------------

// internal static extern class AndroidCamera :10
// {
static void AndroidCamera_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
}

uClassType* AndroidCamera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Camera.AndroidCamera", options);
    type->fp_build_ = AndroidCamera_build;
    return type;
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :12
void AndroidCamera__TakePicture_fn(::g::Uno::Threading::Promise* p)
{
    AndroidCamera::TakePicture(p);
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :12
void AndroidCamera::TakePicture(::g::Uno::Threading::Promise* p)
{
    uArray* array1;
    array1 = uArray::New(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], 3);
    uPtr(array1)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::CAMERA();
    uPtr(array1)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE();
    uPtr(array1)->Item< ::g::Uno::Permissions::PlatformPermission>(2) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE();
    uArray* permissions = array1;
    uPtr(::g::Uno::Permissions::Permissions::Request1(permissions))->Then1(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)::g::Fuse::Camera::TakePictureCommand__Execute_fn, ::g::Fuse::Camera::TakePictureCommand::New1(p)), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(p)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/1.8.1/Camera.uno
// ----------------------------------------------------------

// public sealed class Camera :32
// {
static void Camera_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Camera");
    ::STRINGS[1] = uString::Const("takePicture");
    ::STRINGS[2] = uString::Const("Negative image size values are not supported");
    ::TYPES[3] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(1/*ValueOrDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Camera::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Camera_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Camera);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Camera.Camera", options);
    type->fp_build_ = Camera_build;
    type->fp_ctor_ = (void*)Camera__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Camera() :35
void Camera__ctor_2_fn(Camera* __this)
{
    __this->ctor_2();
}

// public Camera New() :35
void Camera__New2_fn(Camera** __retval)
{
    *__retval = Camera::New2();
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture() :74
void Camera__TakePicture_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture();
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :79
void Camera__TakePicture1_fn(::g::Uno::Threading::Promise* p, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture1(p);
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args) :59
void Camera__TakePictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePictureInterface(args);
}

uSStrong<Camera*> Camera::_instance_;

// public Camera() [instance] :35
void Camera::ctor_2()
{
    ctor_1();

    if (Camera::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Camera::_instance_ = this, ::STRINGS[0/*"FuseJS/Camera"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[1/*"takePicture"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)Camera__TakePictureInterface_fn), uDelegate::New(::TYPES[5/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
}

// public Camera New() [static] :35
Camera* Camera::New2()
{
    Camera* obj1 = (Camera*)uNew(Camera_typeof());
    obj1->ctor_2();
    return obj1;
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture() [static] :74
::g::Uno::Threading::Future1* Camera::TakePicture()
{
    return Camera::TakePicture1((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :79
::g::Uno::Threading::Future1* Camera::TakePicture1(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::Camera::AndroidCamera::TakePicture(p);
    return p;
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args) [static] :59
::g::Uno::Threading::Future1* Camera::TakePictureInterface(uArray* args)
{
    int32_t ret2;
    int32_t ret3;

    if (uPtr(args)->Length() == 0)
        return Camera::TakePicture();

    int32_t width = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[7/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int32_t>(0), uCRef<int32_t>(0), &ret2), ret2);
    int32_t height = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[7/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int32_t>(1), uCRef<int32_t>(width), &ret3), ret3);
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);

    if ((width <= 0) || (height <= 0))
    {
        uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[2/*"Negative im...*/]));
        return p;
    }

    ::g::Fuse::Camera::ResizeImageCallback* cb = ::g::Fuse::Camera::ResizeImageCallback::New1(p, width, height);
    Camera::TakePicture1(cb->ImagePromise());
    return p;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/1.8.1/Camera.uno
// ----------------------------------------------------------

// internal sealed class ResizeImageCallback :92
// {
static void ResizeImageCallback_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(ResizeImageCallback, _promise), 0,
        ::g::Uno::Int_typeof(), offsetof(ResizeImageCallback, _width), 0,
        ::g::Uno::Int_typeof(), offsetof(ResizeImageCallback, _height), 0,
        ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(ResizeImageCallback, _ImagePromise), 0);
}

uType* ResizeImageCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ResizeImageCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.ResizeImageCallback", options);
    type->fp_build_ = ResizeImageCallback_build;
    return type;
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) :98
void ResizeImageCallback__ctor__fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* p, int32_t* width, int32_t* height)
{
    __this->ctor_(p, *width, *height);
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise() :94
void ResizeImageCallback__get_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise** __retval)
{
    *__retval = __this->ImagePromise();
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value) :94
void ResizeImageCallback__set_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* value)
{
    __this->ImagePromise(value);
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) :98
void ResizeImageCallback__New1_fn(::g::Uno::Threading::Promise* p, int32_t* width, int32_t* height, ResizeImageCallback** __retval)
{
    *__retval = ResizeImageCallback::New1(p, *width, *height);
}

// private void ResolveResized(Fuse.ImageTools.Image img) :112
void ResizeImageCallback__ResolveResized_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveResized(img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img) :107
void ResizeImageCallback__ResolveTaken_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveTaken(img);
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [instance] :98
void ResizeImageCallback::ctor_(::g::Uno::Threading::Promise* p, int32_t width, int32_t height)
{
    _width = width;
    _height = height;
    _promise = p;
    ImagePromise((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[8/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveTaken_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise() [instance] :94
::g::Uno::Threading::Promise* ResizeImageCallback::ImagePromise()
{
    return _ImagePromise;
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value) [instance] :94
void ResizeImageCallback::ImagePromise(::g::Uno::Threading::Promise* value)
{
    _ImagePromise = value;
}

// private void ResolveResized(Fuse.ImageTools.Image img) [instance] :112
void ResizeImageCallback::ResolveResized(::g::Fuse::ImageTools::Image* img)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img) [instance] :107
void ResizeImageCallback::ResolveTaken(::g::Fuse::ImageTools::Image* img)
{
    ImagePromise(uCast< ::g::Uno::Threading::Promise*>(::g::Fuse::ImageTools::ImageTools::Resize(img, _width, _height, 1, true), ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[8/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveResized_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [static] :98
ResizeImageCallback* ResizeImageCallback::New1(::g::Uno::Threading::Promise* p, int32_t width, int32_t height)
{
    ResizeImageCallback* obj1 = (ResizeImageCallback*)uNew(ResizeImageCallback_typeof());
    obj1->ctor_(p, width, height);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/1.8.1/Android/AndroidCamera.uno
// -------------------------------------------------------------------------

// internal sealed extern class TakePictureCallback :79
// {
static void TakePictureCallback_build(uType* type)
{
    ::TYPES[9] = ::g::Java::Object_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), offsetof(TakePictureCallback, _p), 0);
}

uType* TakePictureCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TakePictureCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.TakePictureCallback", options);
    type->fp_build_ = TakePictureCallback_build;
    return type;
}

// public TakePictureCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :82
void TakePictureCallback__ctor__fn(TakePictureCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// private void HandleIntent(int resultCode, Java.Object intent, Java.Object photo, Uno.Action<string> onComplete, Uno.Action<string> onFail) :93
void TakePictureCallback__HandleIntent_fn(TakePictureCallback* __this, int32_t* resultCode, ::g::Java::Object* intent, ::g::Java::Object* photo, uDelegate* onComplete, uDelegate* onFail)
{
    __this->HandleIntent(*resultCode, intent, photo, onComplete, onFail);
}

// public TakePictureCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :82
void TakePictureCallback__New1_fn(::g::Uno::Threading::Promise* p, TakePictureCallback** __retval)
{
    *__retval = TakePictureCallback::New1(p);
}

// public void OnActivityResult(int resultCode, Java.Object intent, object info) :87
void TakePictureCallback__OnActivityResult_fn(TakePictureCallback* __this, int32_t* resultCode, ::g::Java::Object* intent, uObject* info)
{
    __this->OnActivityResult(*resultCode, intent, info);
}

// public void OnComplete(string path) :110
void TakePictureCallback__OnComplete_fn(TakePictureCallback* __this, uString* path)
{
    __this->OnComplete(path);
}

// public void OnFail(string reason) :115
void TakePictureCallback__OnFail_fn(TakePictureCallback* __this, uString* reason)
{
    __this->OnFail(reason);
}

// public TakePictureCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [instance] :82
void TakePictureCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// private void HandleIntent(int resultCode, Java.Object intent, Java.Object photo, Uno.Action<string> onComplete, Uno.Action<string> onFail) [instance] :93
void TakePictureCallback::HandleIntent(int32_t resultCode, ::g::Java::Object* intent, ::g::Java::Object* photo, uDelegate* onComplete, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HandleIntent419", "(Lcom/uno/UnoObject;ILjava/lang/Object;Ljava/lang/Object;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int32_t _uresultCode=resultCode;
        jint _resultCode = (jint)_uresultCode;
        ::g::Java::Object* _uintent=intent;
        jobject _intent = (_uintent==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uintent, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uphoto=photo;
        jobject _photo = (_uphoto==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uphoto, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonComplete=onComplete;
        jobject _onComplete = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonComplete, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_resultCode,_intent,_photo,_onComplete,_onFail);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        if (_intent!=NULL) { U_JNIVAR->DeleteLocalRef(_intent); }
        if (_photo!=NULL) { U_JNIVAR->DeleteLocalRef(_photo); }
        if (_onComplete!=NULL) { U_JNIVAR->DeleteLocalRef(_onComplete); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void OnActivityResult(int resultCode, Java.Object intent, object info) [instance] :87
void TakePictureCallback::OnActivityResult(int32_t resultCode, ::g::Java::Object* intent, uObject* info)
{
    HandleIntent(resultCode, intent, uCast< ::g::Java::Object*>(info, ::TYPES[9/*Java.Object*/]), uDelegate::New(::TYPES[10/*Uno.Action<string>*/], (void*)TakePictureCallback__OnComplete_fn, this), uDelegate::New(::TYPES[10/*Uno.Action<string>*/], (void*)TakePictureCallback__OnFail_fn, this));
}

// public void OnComplete(string path) [instance] :110
void TakePictureCallback::OnComplete(uString* path)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), ::g::Fuse::ImageTools::Image::New2(path));
}

// public void OnFail(string reason) [instance] :115
void TakePictureCallback::OnFail(uString* reason)
{
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public TakePictureCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :82
TakePictureCallback* TakePictureCallback::New1(::g::Uno::Threading::Promise* p)
{
    TakePictureCallback* obj1 = (TakePictureCallback*)uNew(TakePictureCallback_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/1.8.1/Android/AndroidCamera.uno
// -------------------------------------------------------------------------

// internal sealed extern class TakePictureCommand :26
// {
static void TakePictureCommand_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Required permissions were not granted.");
    ::STRINGS[4] = uString::Const("Couldn't create temporary Image");
    ::STRINGS[5] = uString::Const("Couldn't create Image capture intent");
    ::TYPES[11] = ::g::Android::ActivityResultCallback_typeof();
    type->SetDependencies(
        ::g::Android::ActivityUtils_typeof());
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), offsetof(TakePictureCommand, _promise), 0);
}

uType* TakePictureCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TakePictureCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.TakePictureCommand", options);
    type->fp_build_ = TakePictureCommand_build;
    return type;
}

// public TakePictureCommand(Uno.Threading.Promise<Fuse.ImageTools.Image> promise) :29
void TakePictureCommand__ctor__fn(TakePictureCommand* __this, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(promise);
}

// private static Java.Object CreateImage() :67
void TakePictureCommand__CreateImage_fn(::g::Java::Object** __retval)
{
    *__retval = TakePictureCommand::CreateImage();
}

// private static Java.Object CreateIntent(Java.Object photo) :53
void TakePictureCommand__CreateIntent_fn(::g::Java::Object* photo, ::g::Java::Object** __retval)
{
    *__retval = TakePictureCommand::CreateIntent(photo);
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) :33
void TakePictureCommand__Execute_fn(TakePictureCommand* __this, uArray* grantedPermissions)
{
    __this->Execute(grantedPermissions);
}

// public TakePictureCommand New(Uno.Threading.Promise<Fuse.ImageTools.Image> promise) :29
void TakePictureCommand__New1_fn(::g::Uno::Threading::Promise* promise, TakePictureCommand** __retval)
{
    *__retval = TakePictureCommand::New1(promise);
}

// public TakePictureCommand(Uno.Threading.Promise<Fuse.ImageTools.Image> promise) [instance] :29
void TakePictureCommand::ctor_(::g::Uno::Threading::Promise* promise)
{
    _promise = promise;
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance] :33
void TakePictureCommand::Execute(uArray* grantedPermissions)
{
    if (uPtr(grantedPermissions)->Length() < 3)
    {
        uPtr(_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[3/*"Required pe...*/]));
        return;
    }

    ::g::Java::Object* photo = TakePictureCommand::CreateImage();

    if (photo == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Couldn't cr...*/]));

    ::g::Java::Object* intent = TakePictureCommand::CreateIntent(photo);

    if (intent == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Couldn't cr...*/]));

    ::g::Android::ActivityUtils::StartActivity2(intent, uDelegate::New(::TYPES[11/*Android.ActivityResultCallback*/], (void*)::g::Fuse::Camera::TakePictureCallback__OnActivityResult_fn, ::g::Fuse::Camera::TakePictureCallback::New1(_promise)), photo);
}

// private static Java.Object CreateImage() [static] :67
::g::Java::Object* TakePictureCommand::CreateImage()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateImage420", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateIntent(Java.Object photo) [static] :53
::g::Java::Object* TakePictureCommand::CreateIntent(::g::Java::Object* photo)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateIntent421", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uphoto=photo;
        jobject _photo = (_uphoto==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uphoto, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_photo);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_photo!=NULL) { U_JNIVAR->DeleteLocalRef(_photo); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TakePictureCommand New(Uno.Threading.Promise<Fuse.ImageTools.Image> promise) [static] :29
TakePictureCommand* TakePictureCommand::New1(::g::Uno::Threading::Promise* promise)
{
    TakePictureCommand* obj1 = (TakePictureCommand*)uNew(TakePictureCommand_typeof());
    obj1->ctor_(promise);
    return obj1;
}
// }

}}} // ::g::Fuse::Camera
