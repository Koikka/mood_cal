// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Android.Camera.h>
#include <Fuse.Controls.Android-12f45a9d.h>
#include <Fuse.Controls.Android-15035f1a.h>
#include <Fuse.Controls.Android-1ffa2f83.h>
#include <Fuse.Controls.Android-229fab30.h>
#include <Fuse.Controls.Android-260e302a.h>
#include <Fuse.Controls.Android-2b419fa4.h>
#include <Fuse.Controls.Android-2c46fe78.h>
#include <Fuse.Controls.Android-42d70571.h>
#include <Fuse.Controls.Android-45123f0a.h>
#include <Fuse.Controls.Android-67e1ba70.h>
#include <Fuse.Controls.Android-6b08c636.h>
#include <Fuse.Controls.Android-7bb61c95.h>
#include <Fuse.Controls.Android-80362093.h>
#include <Fuse.Controls.Android-88053cee.h>
#include <Fuse.Controls.Android-8c75f20.h>
#include <Fuse.Controls.Android-9923da69.h>
#include <Fuse.Controls.Android-9b6546b3.h>
#include <Fuse.Controls.Android-b44da6e4.h>
#include <Fuse.Controls.Android-c23896c0.h>
#include <Fuse.Controls.Android-d60402f1.h>
#include <Fuse.Controls.Android-dcb46cf6.h>
#include <Fuse.Controls.CameraFacing.h>
#include <Fuse.Controls.CameraInfo.h>
#include <Fuse.Controls.CameraV-66a5bfa2.h>
#include <Fuse.Controls.CameraView.h>
#include <Fuse.Controls.CameraViewBase.h>
#include <Fuse.Controls.CaptureMode.h>
#include <Fuse.Controls.FlashMode.h>
#include <Fuse.Controls.FutureExtensions.h>
#include <Fuse.Controls.ICameraViewHost.h>
#include <Fuse.Controls.IPhotoP-fef9e46.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Photo.h>
#include <Fuse.Controls.PhotoHandle.h>
#include <Fuse.Controls.PhotoOp-ba14e671.h>
#include <Fuse.Controls.PhotoOption.h>
#include <Fuse.Controls.PhotoResolution.h>
#include <Fuse.Controls.Preview-84366df.h>
#include <Fuse.Controls.Recording.h>
#include <Fuse.Controls.RecordingSession.h>
#include <Fuse.Controls.Thumbna-e42a42ff.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.I-cf73dc79.h>
#include <Fuse.RootViewport.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float3x3.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[13];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Controls{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// private sealed class Camera.AndroidPhotoOptionPromise :129
// {
static void Camera__AndroidPhotoOptionPromise_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Resolution not supported: ");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::PhotoOptionPromise_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::Android::Camera_typeof(), offsetof(Camera__AndroidPhotoOptionPromise, _camera), 0,
        ::g::Uno::String_typeof(), offsetof(Camera__AndroidPhotoOptionPromise, _parameters), 0);
}

::g::Fuse::Controls::PhotoOptionPromise_type* Camera__AndroidPhotoOptionPromise_typeof()
{
    static uSStrong< ::g::Fuse::Controls::PhotoOptionPromise_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::PhotoOptionPromise_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Camera__AndroidPhotoOptionPromise);
    options.TypeSize = sizeof(::g::Fuse::Controls::PhotoOptionPromise_type);
    type = (::g::Fuse::Controls::PhotoOptionPromise_type*)uClassType::New("Fuse.Controls.Android.Camera.AndroidPhotoOptionPromise", options);
    type->fp_build_ = Camera__AndroidPhotoOptionPromise_build;
    type->fp_Visit1 = (void(*)(::g::Fuse::Controls::PhotoOptionPromise*, ::g::Fuse::Controls::PhotoResolution*))Camera__AndroidPhotoOptionPromise__Visit1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public AndroidPhotoOptionPromise(Fuse.Controls.Android.Camera camera) :134
void Camera__AndroidPhotoOptionPromise__ctor_8_fn(Camera__AndroidPhotoOptionPromise* __this, ::g::Fuse::Controls::Android::Camera* camera)
{
    __this->ctor_8(camera);
}

// public AndroidPhotoOptionPromise New(Fuse.Controls.Android.Camera camera) :134
void Camera__AndroidPhotoOptionPromise__New5_fn(::g::Fuse::Controls::Android::Camera* camera, Camera__AndroidPhotoOptionPromise** __retval)
{
    *__retval = Camera__AndroidPhotoOptionPromise::New5(camera);
}

// protected override sealed void Visit(Fuse.Controls.PhotoResolution photoResolution) :140
void Camera__AndroidPhotoOptionPromise__Visit1_fn(Camera__AndroidPhotoOptionPromise* __this, ::g::Fuse::Controls::PhotoResolution* photoResolution)
{
    uStackFrame __("Fuse.Controls.Android.Camera.AndroidPhotoOptionPromise", "Visit(Fuse.Controls.PhotoResolution)");
    ::g::Uno::Int2 size = ::g::Uno::Int2__New2(uPtr(photoResolution)->Width, uPtr(photoResolution)->Height);

    if (uPtr(__this->_camera)->SupportsSize(size))
        uPtr(__this->_camera)->SetPictureSize(size.X, size.Y);
    else
    {
        uPtr(__this->_camera)->RestoreParameters(__this->_parameters);
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Resolution ...*/], uBox(::g::Uno::Int2_typeof(), size))));
    }
}

// public AndroidPhotoOptionPromise(Fuse.Controls.Android.Camera camera) [instance] :134
void Camera__AndroidPhotoOptionPromise::ctor_8(::g::Fuse::Controls::Android::Camera* camera)
{
    uStackFrame __("Fuse.Controls.Android.Camera.AndroidPhotoOptionPromise", ".ctor(Fuse.Controls.Android.Camera)");
    ctor_7();
    _camera = camera;
    _parameters = uPtr(_camera)->SaveParameters();
}

// public AndroidPhotoOptionPromise New(Fuse.Controls.Android.Camera camera) [static] :134
Camera__AndroidPhotoOptionPromise* Camera__AndroidPhotoOptionPromise::New5(::g::Fuse::Controls::Android::Camera* camera)
{
    Camera__AndroidPhotoOptionPromise* obj1 = (Camera__AndroidPhotoOptionPromise*)uNew(Camera__AndroidPhotoOptionPromise_typeof());
    obj1->ctor_8(camera);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// internal sealed extern class AndroidRecording :14
// {
static void AndroidRecording_build(uType* type)
{
    type->SetFields(1);
}

uType* AndroidRecording_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Recording_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(AndroidRecording);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Android.AndroidRecording", options);
    type->fp_build_ = AndroidRecording_build;
    return type;
}

// public AndroidRecording(string outputFilePath) :16
void AndroidRecording__ctor_1_fn(AndroidRecording* __this, uString* outputFilePath)
{
    __this->ctor_1(outputFilePath);
}

// public AndroidRecording New(string outputFilePath) :16
void AndroidRecording__New1_fn(uString* outputFilePath, AndroidRecording** __retval)
{
    *__retval = AndroidRecording::New1(outputFilePath);
}

// public AndroidRecording(string outputFilePath) [instance] :16
void AndroidRecording::ctor_1(uString* outputFilePath)
{
    ctor_(outputFilePath);
}

// public AndroidRecording New(string outputFilePath) [static] :16
AndroidRecording* AndroidRecording::New1(uString* outputFilePath)
{
    AndroidRecording* obj1 = (AndroidRecording*)uNew(AndroidRecording_typeof());
    obj1->ctor_1(outputFilePath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// internal sealed extern class AndroidRecordingSession :24
// {
static void AndroidRecordingSession_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AndroidRecordingSession_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(AndroidRecordingSession, _session), 0,
        ::g::Uno::Action_typeof(), offsetof(AndroidRecordingSession, _doneCallback), 0,
        ::g::Uno::Bool_typeof(), offsetof(AndroidRecordingSession, _stopped), 0);
}

AndroidRecordingSession_type* AndroidRecordingSession_typeof()
{
    static uSStrong<AndroidRecordingSession_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::RecordingSession_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AndroidRecordingSession);
    options.TypeSize = sizeof(AndroidRecordingSession_type);
    type = (AndroidRecordingSession_type*)uClassType::New("Fuse.Controls.Android.AndroidRecordingSession", options);
    type->fp_build_ = AndroidRecordingSession_build;
    type->fp_Stop = (void(*)(::g::Fuse::Controls::RecordingSession*, ::g::Uno::Threading::Future1**))AndroidRecordingSession__Stop_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))AndroidRecordingSession__UnoIDisposableDispose_fn;
    return type;
}

// public AndroidRecordingSession(Java.Object session, Uno.Action doneCallback) :29
void AndroidRecordingSession__ctor_1_fn(AndroidRecordingSession* __this, ::g::Java::Object* session, uDelegate* doneCallback)
{
    __this->ctor_1(session, doneCallback);
}

// private Uno.Threading.Future<Fuse.Controls.Recording> InternalStop() :41
void AndroidRecordingSession__InternalStop_fn(AndroidRecordingSession* __this, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->InternalStop();
}

// public AndroidRecordingSession New(Java.Object session, Uno.Action doneCallback) :29
void AndroidRecordingSession__New1_fn(::g::Java::Object* session, uDelegate* doneCallback, AndroidRecordingSession** __retval)
{
    *__retval = AndroidRecordingSession::New1(session, doneCallback);
}

// public override sealed Uno.Threading.Future<Fuse.Controls.Recording> Stop() :36
void AndroidRecordingSession__Stop_fn(AndroidRecordingSession* __this, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.AndroidRecordingSession", "Stop()");
    return *__retval = (::g::Uno::Threading::Future1*)::g::Fuse::Controls::FutureExtensions::Intercept(::g::Fuse::Controls::FutureExtensions_typeof()->MakeMethod(0/*Intercept<Fuse.Controls.Recording>*/, ::g::Fuse::Controls::Recording_typeof(), NULL), __this->InternalStop(), __this->_doneCallback), void();
}

// private static void Stop(Java.Object session, Uno.Action<string> resolve, Uno.Action<string> reject) :70
void AndroidRecordingSession__Stop1_fn(::g::Java::Object* session, uDelegate* resolve, uDelegate* reject)
{
    AndroidRecordingSession::Stop1(session, resolve, reject);
}

// private void Uno.IDisposable.Dispose() :58
void AndroidRecordingSession__UnoIDisposableDispose_fn(AndroidRecordingSession* __this)
{
    uStackFrame __("Fuse.Controls.Android.AndroidRecordingSession", "Uno.IDisposable.Dispose()");
    __this->InternalStop();
}

// public AndroidRecordingSession(Java.Object session, Uno.Action doneCallback) [instance] :29
void AndroidRecordingSession::ctor_1(::g::Java::Object* session, uDelegate* doneCallback)
{
    ctor_();
    _session = session;
    _doneCallback = doneCallback;
}

// private Uno.Threading.Future<Fuse.Controls.Recording> InternalStop() [instance] :41
::g::Uno::Threading::Future1* AndroidRecordingSession::InternalStop()
{
    uStackFrame __("Fuse.Controls.Android.AndroidRecordingSession", "InternalStop()");

    if (!_stopped)
    {
        _stopped = true;
        AndroidRecordingSession__RecordingPromise* p = AndroidRecordingSession__RecordingPromise::New6();
        AndroidRecordingSession::Stop1(_session, uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)AndroidRecordingSession__RecordingPromise__OnResolve_fn, p), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)AndroidRecordingSession__RecordingPromise__OnReject_fn, p));
        return p;
    }
    else
    {
        ::g::Uno::Threading::Promise* p1 = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Recording_typeof(), NULL));
        p1->Reject(::g::Uno::Exception::New2(uString::Const("Recording already stopped!")));
        return p1;
    }
}

// public AndroidRecordingSession New(Java.Object session, Uno.Action doneCallback) [static] :29
AndroidRecordingSession* AndroidRecordingSession::New1(::g::Java::Object* session, uDelegate* doneCallback)
{
    AndroidRecordingSession* obj1 = (AndroidRecordingSession*)uNew(AndroidRecordingSession_typeof());
    obj1->ctor_1(session, doneCallback);
    return obj1;
}

// private static void Stop(Java.Object session, Uno.Action<string> resolve, Uno.Action<string> reject) [static] :70
void AndroidRecordingSession::Stop1(::g::Java::Object* session, uDelegate* resolve, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Stop1289", "(Ljava/lang/Object;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        ::g::Java::Object* _usession=session;
        jobject _session = (_usession==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usession, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_String");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_session,_resolve,_reject);
        
        if (_session!=NULL) { U_JNIVAR->DeleteLocalRef(_session); }
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// internal sealed extern class Camera :88
// {
static void Camera_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Controls::FlashMode_typeof(), offsetof(Camera, _flashMode), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(Camera, _recordingSession), 0,
        ::g::Uno::Int2_typeof()->Array(), offsetof(Camera, _pictureSizes), 0,
        ::g::Java::Object_typeof(), offsetof(Camera, _CameraHandle), 0,
        ::g::Fuse::Controls::CameraFacing_typeof(), offsetof(Camera, _Facing), 0);
}

::g::Fuse::Controls::Native::ViewHandle_type* Camera_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::ViewHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Camera);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::ViewHandle_type);
    type = (::g::Fuse::Controls::Native::ViewHandle_type*)uClassType::New("Fuse.Controls.Android.Camera", options);
    type->fp_build_ = Camera_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Camera__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Camera__Dispose_fn;
    return type;
}

// public Camera(Java.Object cameraHandle, int cameraId, Fuse.Controls.CameraFacing facing) :205
void Camera__ctor_4_fn(Camera* __this, ::g::Java::Object* cameraHandle, int32_t* cameraId, int32_t* facing)
{
    __this->ctor_4(cameraHandle, *cameraId, *facing);
}

// public generated Java.Object get_CameraHandle() :90
void Camera__get_CameraHandle_fn(Camera* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->CameraHandle();
}

// private generated void set_CameraHandle(Java.Object value) :90
void Camera__set_CameraHandle_fn(Camera* __this, ::g::Java::Object* value)
{
    __this->CameraHandle(value);
}

// public Uno.Threading.Future<Fuse.Controls.Photo> CapturePhoto() :122
void Camera__CapturePhoto_fn(Camera* __this, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CapturePhoto();
}

// private static Java.Object Create(Java.Object camera, int cameraId, int maxWidth, int maxHeight) :357
void Camera__Create_fn(::g::Java::Object* camera, int32_t* cameraId, int32_t* maxWidth, int32_t* maxHeight, ::g::Java::Object** __retval)
{
    *__retval = Camera::Create(camera, *cameraId, *maxWidth, *maxHeight);
}

// public override sealed void Dispose() :214
void Camera__Dispose_fn(Camera* __this)
{
    uStackFrame __("Fuse.Controls.Android.Camera", "Dispose()");

    if (__this->_recordingSession != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_recordingSession), ::g::Uno::IDisposable_typeof()));
        __this->_recordingSession = NULL;
    }

    Camera::Dispose1(__this->NativeHandle);
    Camera::Release(__this->CameraHandle());
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void Dispose(Java.Object handle) :351
void Camera__Dispose1_fn(::g::Java::Object* handle)
{
    Camera::Dispose1(handle);
}

// public generated Fuse.Controls.CameraFacing get_Facing() :91
void Camera__get_Facing_fn(Camera* __this, int32_t* __retval)
{
    *__retval = __this->Facing();
}

// private generated void set_Facing(Fuse.Controls.CameraFacing value) :91
void Camera__set_Facing_fn(Camera* __this, int32_t* value)
{
    __this->Facing(*value);
}

// public Fuse.Controls.FlashMode get_FlashMode() :96
void Camera__get_FlashMode_fn(Camera* __this, int32_t* __retval)
{
    *__retval = __this->FlashMode();
}

// public void set_FlashMode(Fuse.Controls.FlashMode value) :97
void Camera__set_FlashMode_fn(Camera* __this, int32_t* value)
{
    __this->FlashMode(*value);
}

// private void GetSupportedPictureSizes(Java.Object camera, int[] output) :273
void Camera__GetSupportedPictureSizes_fn(Camera* __this, ::g::Java::Object* camera, uArray* output)
{
    __this->GetSupportedPictureSizes(camera, output);
}

// private int GetSupportedPictureSizesCount(Java.Object camera) :283
void Camera__GetSupportedPictureSizesCount_fn(Camera* __this, ::g::Java::Object* camera, int32_t* __retval)
{
    *__retval = __this->GetSupportedPictureSizesCount(camera);
}

// public Camera New(Java.Object cameraHandle, int cameraId, Fuse.Controls.CameraFacing facing) :205
void Camera__New5_fn(::g::Java::Object* cameraHandle, int32_t* cameraId, int32_t* facing, Camera** __retval)
{
    *__retval = Camera::New5(cameraHandle, *cameraId, *facing);
}

// public int2[] get_PictureSizes() :230
void Camera__get_PictureSizes_fn(Camera* __this, uArray** __retval)
{
    *__retval = __this->PictureSizes();
}

// public void set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode value) :202
void Camera__set_PreviewStretchMode_fn(Camera* __this, int32_t* value)
{
    __this->PreviewStretchMode(*value);
}

// private static void Release(Java.Object handle) :345
void Camera__Release_fn(::g::Java::Object* handle)
{
    Camera::Release(handle);
}

// private void RestoreParameters(string parameters) :333
void Camera__RestoreParameters_fn(Camera* __this, uString* parameters)
{
    __this->RestoreParameters(parameters);
}

// private string SaveParameters() :327
void Camera__SaveParameters_fn(Camera* __this, uString** __retval)
{
    *__retval = __this->SaveParameters();
}

// private void SetFlashMode(Java.Object handle, string flashMode) :295
void Camera__SetFlashMode_fn(Camera* __this, ::g::Java::Object* handle, uString* flashMode)
{
    __this->SetFlashMode(handle, flashMode);
}

// public Uno.Threading.Future<Fuse.Controls.PhotoOption[]> SetPhotoOptions(Fuse.Controls.PhotoOption[] options) :153
void Camera__SetPhotoOptions_fn(Camera* __this, uArray* options, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->SetPhotoOptions(options);
}

// private void SetPictureSize(int width, int height) :339
void Camera__SetPictureSize_fn(Camera* __this, int32_t* width, int32_t* height)
{
    __this->SetPictureSize(*width, *height);
}

// private void SetRecordingSession(Uno.IDisposable recordingSession) :188
void Camera__SetRecordingSession_fn(Camera* __this, uObject* recordingSession)
{
    __this->SetRecordingSession(recordingSession);
}

// public Uno.Threading.Future<Fuse.Controls.RecordingSession> StartRecording(Uno.Action doneCallback) :193
void Camera__StartRecording_fn(Camera* __this, uDelegate* doneCallback, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->StartRecording(doneCallback);
}

// private void StartRecording(Uno.Action<Java.Object> resolve, Uno.Action<string> reject) :314
void Camera__StartRecording1_fn(Camera* __this, uDelegate* resolve, uDelegate* reject)
{
    __this->StartRecording1(resolve, reject);
}

// public Fuse.Controls.FlashMode[] get_SupportedFlashModes() :247
void Camera__get_SupportedFlashModes_fn(Camera* __this, uArray** __retval)
{
    *__retval = __this->SupportedFlashModes();
}

// private bool SupportsSize(int2 size) :264
void Camera__SupportsSize_fn(Camera* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->SupportsSize(*size);
}

// private void TakePicture(Uno.Action<Java.Object> resolve, Uno.Action<string> reject) :301
void Camera__TakePicture_fn(Camera* __this, uDelegate* resolve, uDelegate* reject)
{
    __this->TakePicture(resolve, reject);
}

// private void UpdatePreviewStretchMode(bool shouldFill) :289
void Camera__UpdatePreviewStretchMode_fn(Camera* __this, bool* shouldFill)
{
    __this->UpdatePreviewStretchMode(*shouldFill);
}

// public Camera(Java.Object cameraHandle, int cameraId, Fuse.Controls.CameraFacing facing) [instance] :205
void Camera::ctor_4(::g::Java::Object* cameraHandle, int32_t cameraId, int32_t facing)
{
    uStackFrame __("Fuse.Controls.Android.Camera", ".ctor(Java.Object,int,Fuse.Controls.CameraFacing)");
    _flashMode = 2;
    ctor_(Camera::Create(cameraHandle, cameraId, ::g::Uno::Graphics::Texture2D::MaxSize(), ::g::Uno::Graphics::Texture2D::MaxSize()));
    CameraHandle(cameraHandle);
    Facing(facing);
    uArray* supportedFlashModes = SupportedFlashModes();

    if (uPtr(supportedFlashModes)->Length() > 0)
        FlashMode(uPtr(supportedFlashModes)->Item<int32_t>(0));
}

// public generated Java.Object get_CameraHandle() [instance] :90
::g::Java::Object* Camera::CameraHandle()
{
    return _CameraHandle;
}

// private generated void set_CameraHandle(Java.Object value) [instance] :90
void Camera::CameraHandle(::g::Java::Object* value)
{
    _CameraHandle = value;
}

// public Uno.Threading.Future<Fuse.Controls.Photo> CapturePhoto() [instance] :122
::g::Uno::Threading::Future1* Camera::CapturePhoto()
{
    Camera__PicturePromise* picturePromise = Camera__PicturePromise::New6();
    TakePicture(uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)Camera__PicturePromise__OnResolve_fn, picturePromise), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)Camera__PicturePromise__OnReject_fn, picturePromise));
    return picturePromise;
}

// public generated Fuse.Controls.CameraFacing get_Facing() [instance] :91
int32_t Camera::Facing()
{
    return _Facing;
}

// private generated void set_Facing(Fuse.Controls.CameraFacing value) [instance] :91
void Camera::Facing(int32_t value)
{
    _Facing = value;
}

// public Fuse.Controls.FlashMode get_FlashMode() [instance] :96
int32_t Camera::FlashMode()
{
    return _flashMode;
}

// public void set_FlashMode(Fuse.Controls.FlashMode value) [instance] :97
void Camera::FlashMode(int32_t value)
{
    uStackFrame __("Fuse.Controls.Android.Camera", "set_FlashMode(Fuse.Controls.FlashMode)");

    if (::g::Fuse::Controls::Android::FlashModeExtensions::IsSupported(value, this))
    {
        SetFlashMode(CameraHandle(), ::g::Fuse::Controls::Android::FlashModeExtensions::AsString(value));
        _flashMode = value;
    }
}

// private void GetSupportedPictureSizes(Java.Object camera, int[] output) [instance] :273
void Camera::GetSupportedPictureSizes(::g::Java::Object* camera, uArray* output)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSupportedPictureSizes292", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/uno/IntArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _ucamera=camera;
        jobject _camera = (_ucamera==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucamera, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uoutput=output;
        jobject _output = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uoutput);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_camera,_output);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_camera!=NULL) { U_JNIVAR->DeleteLocalRef(_camera); }
        if (_output!=NULL) { U_JNIVAR->DeleteLocalRef(_output); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private int GetSupportedPictureSizesCount(Java.Object camera) [instance] :283
int32_t Camera::GetSupportedPictureSizesCount(::g::Java::Object* camera)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSupportedPictureSizesCount293", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _ucamera=camera;
        jobject _camera = (_ucamera==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucamera, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_camera);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_camera!=NULL) { U_JNIVAR->DeleteLocalRef(_camera); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int2[] get_PictureSizes() [instance] :230
uArray* Camera::PictureSizes()
{
    uStackFrame __("Fuse.Controls.Android.Camera", "get_PictureSizes()");

    if (_pictureSizes != NULL)
        return _pictureSizes;

    int32_t count = GetSupportedPictureSizesCount(CameraHandle());
    uArray* sizes = uArray::New(::g::Uno::Int_typeof()->Array(), count * 2);
    GetSupportedPictureSizes(CameraHandle(), sizes);
    uArray* result = uArray::New(::g::Uno::Int2_typeof()->Array(), count);

    for (int32_t i = 0; i < result->Length(); i++)
        uPtr(result)->Item< ::g::Uno::Int2>(i) = ::g::Uno::Int2__New2(uPtr(sizes)->Item<int32_t>(i * 2), uPtr(sizes)->Item<int32_t>((i * 2) + 1));

    return _pictureSizes = result;
}

// public void set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode value) [instance] :202
void Camera::PreviewStretchMode(int32_t value)
{
    UpdatePreviewStretchMode(value == 1);
}

// private void RestoreParameters(string parameters) [instance] :333
void Camera::RestoreParameters(uString* parameters)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RestoreParameters295", "(Lcom/uno/UnoObject;Ljava/lang/String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uString* _uparameters=parameters;
        jstring _parameters = JniHelper::UnoToJavaString(_uparameters);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_parameters);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_parameters!=NULL) { U_JNIVAR->DeleteLocalRef(_parameters); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private string SaveParameters() [instance] :327
uString* Camera::SaveParameters()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SaveParameters296", "(Lcom/uno/UnoObject;)Ljava/lang/String;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private void SetFlashMode(Java.Object handle, string flashMode) [instance] :295
void Camera::SetFlashMode(::g::Java::Object* handle, uString* flashMode)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFlashMode297", "(Lcom/uno/UnoObject;Ljava/lang/Object;Ljava/lang/String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uflashMode=flashMode;
        jstring _flashMode = JniHelper::UnoToJavaString(_uflashMode);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_flashMode);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_flashMode!=NULL) { U_JNIVAR->DeleteLocalRef(_flashMode); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Uno.Threading.Future<Fuse.Controls.PhotoOption[]> SetPhotoOptions(Fuse.Controls.PhotoOption[] options) [instance] :153
::g::Uno::Threading::Future1* Camera::SetPhotoOptions(uArray* options)
{
    uStackFrame __("Fuse.Controls.Android.Camera", "SetPhotoOptions(Fuse.Controls.PhotoOption[])");
    return Camera__AndroidPhotoOptionPromise::New5(this)->Visit(options);
}

// private void SetPictureSize(int width, int height) [instance] :339
void Camera::SetPictureSize(int32_t width, int32_t height)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPictureSize298", "(Lcom/uno/UnoObject;II)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int32_t _uwidth=width;
        jint _width = (jint)_uwidth;
        int32_t _uheight=height;
        jint _height = (jint)_uheight;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_width,_height);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetRecordingSession(Uno.IDisposable recordingSession) [instance] :188
void Camera::SetRecordingSession(uObject* recordingSession)
{
    _recordingSession = recordingSession;
}

// public Uno.Threading.Future<Fuse.Controls.RecordingSession> StartRecording(Uno.Action doneCallback) [instance] :193
::g::Uno::Threading::Future1* Camera::StartRecording(uDelegate* doneCallback)
{
    uStackFrame __("Fuse.Controls.Android.Camera", "StartRecording(Uno.Action)");
    Camera__RecordingSessionPromise* recordingPromise = Camera__RecordingSessionPromise::New5(doneCallback, uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL), (void*)Camera__SetRecordingSession_fn, this));
    StartRecording1(uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)Camera__RecordingSessionPromise__OnResolve_fn, recordingPromise), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)Camera__RecordingSessionPromise__OnReject_fn, recordingPromise));
    return recordingPromise;
}

// private void StartRecording(Uno.Action<Java.Object> resolve, Uno.Action<string> reject) [instance] :314
void Camera::StartRecording1(uDelegate* resolve, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StartRecording1299", "(Lcom/uno/UnoObject;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_Object");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_resolve,_reject);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Fuse.Controls.FlashMode[] get_SupportedFlashModes() [instance] :247
uArray* Camera::SupportedFlashModes()
{
    uStackFrame __("Fuse.Controls.Android.Camera", "get_SupportedFlashModes()");
    ::g::Uno::Collections::List* m = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FlashMode_typeof(), NULL));

    if (::g::Fuse::Controls::Android::FlashModeExtensions::IsSupported(0, this))
        ::g::Uno::Collections::List__Add_fn(uPtr(m), uCRef<int32_t>(0));

    if (::g::Fuse::Controls::Android::FlashModeExtensions::IsSupported(1, this))
        ::g::Uno::Collections::List__Add_fn(uPtr(m), uCRef<int32_t>(1));

    if (::g::Fuse::Controls::Android::FlashModeExtensions::IsSupported(2, this))
        ::g::Uno::Collections::List__Add_fn(uPtr(m), uCRef<int32_t>(2));

    return (uArray*)m->ToArray();
}

// private bool SupportsSize(int2 size) [instance] :264
bool Camera::SupportsSize(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Controls.Android.Camera", "SupportsSize(int2)");
    uArray* array1;
    int32_t index2;
    int32_t length3;

    for (array1 = PictureSizes(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Uno::Int2 s = uPtr(array1)->Item< ::g::Uno::Int2>(index2);

        if (::g::Uno::Int2__op_Equality(s, size))
            return true;
    }

    return false;
}

// private void TakePicture(Uno.Action<Java.Object> resolve, Uno.Action<string> reject) [instance] :301
void Camera::TakePicture(uDelegate* resolve, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "TakePicture300", "(Lcom/uno/UnoObject;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_Object");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_resolve,_reject);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdatePreviewStretchMode(bool shouldFill) [instance] :289
void Camera::UpdatePreviewStretchMode(bool shouldFill)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdatePreviewStretchMode301", "(Lcom/uno/UnoObject;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        bool _ushouldFill=shouldFill;
        jboolean _shouldFill = (jboolean)_ushouldFill;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_shouldFill);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object camera, int cameraId, int maxWidth, int maxHeight) [static] :357
::g::Java::Object* Camera::Create(::g::Java::Object* camera, int32_t cameraId, int32_t maxWidth, int32_t maxHeight)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create290", "(Ljava/lang/Object;III)Ljava/lang/Object;");
        ::g::Java::Object* _ucamera=camera;
        jobject _camera = (_ucamera==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucamera, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucameraId=cameraId;
        jint _cameraId = (jint)_ucameraId;
        int32_t _umaxWidth=maxWidth;
        jint _maxWidth = (jint)_umaxWidth;
        int32_t _umaxHeight=maxHeight;
        jint _maxHeight = (jint)_umaxHeight;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_camera,_cameraId,_maxWidth,_maxHeight);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_camera!=NULL) { U_JNIVAR->DeleteLocalRef(_camera); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Dispose(Java.Object handle) [static] :351
void Camera::Dispose1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Dispose1291", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Camera New(Java.Object cameraHandle, int cameraId, Fuse.Controls.CameraFacing facing) [static] :205
Camera* Camera::New5(::g::Java::Object* cameraHandle, int32_t cameraId, int32_t facing)
{
    Camera* obj4 = (Camera*)uNew(Camera_typeof());
    obj4->ctor_4(cameraHandle, cameraId, facing);
    return obj4;
}

// private static void Release(Java.Object handle) [static] :345
void Camera::Release(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Release294", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraLoader.uno
// -------------------------------------------------------------------------------------

// internal static extern class CameraFacingExtension :68
// {
static void CameraFacingExtension_build(uType* type)
{
}

uClassType* CameraFacingExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Android.CameraFacingExtension", options);
    type->fp_build_ = CameraFacingExtension_build;
    return type;
}

// private static int GetCameraId(int facing) :77
void CameraFacingExtension__GetCameraId_fn(int32_t* facing, int32_t* __retval)
{
    *__retval = CameraFacingExtension::GetCameraId(*facing);
}

// public static bool TryGetCameraId(Fuse.Controls.CameraFacing cameraFacing, int& cameraId) :70
void CameraFacingExtension__TryGetCameraId_fn(int32_t* cameraFacing, int32_t* cameraId, bool* __retval)
{
    *__retval = CameraFacingExtension::TryGetCameraId(*cameraFacing, cameraId);
}

// private static int GetCameraId(int facing) [static] :77
int32_t CameraFacingExtension::GetCameraId(int32_t facing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCameraId302", "(I)I");
        int32_t _ufacing=facing;
        jint _facing = (jint)_ufacing;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_facing);
        int32_t __result = (int32_t)__jresult;
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool TryGetCameraId(Fuse.Controls.CameraFacing cameraFacing, int& cameraId) [static] :70
bool CameraFacingExtension::TryGetCameraId(int32_t cameraFacing, int32_t* cameraId)
{
    *cameraId = CameraFacingExtension::GetCameraId(cameraFacing);
    return *cameraId > -1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraLoader.uno
// -------------------------------------------------------------------------------------

// internal static extern class CameraLoader :7
// {
static void CameraLoader_build(uType* type)
{
}

uClassType* CameraLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Android.CameraLoader", options);
    type->fp_build_ = CameraLoader_build;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.Android.Camera> Load(Fuse.Controls.CameraFacing facing) :43
void CameraLoader__Load_fn(int32_t* facing, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraLoader::Load(*facing);
}

// private static void Load(int cameraId, Uno.Action<Java.Object> resolve, Uno.Action<string> reject) :57
void CameraLoader__Load1_fn(int32_t* cameraId, uDelegate* resolve, uDelegate* reject)
{
    CameraLoader::Load1(*cameraId, resolve, reject);
}

// public static Uno.Threading.Future<Fuse.Controls.Android.Camera> Load(Fuse.Controls.CameraFacing facing) [static] :43
::g::Uno::Threading::Future1* CameraLoader::Load(int32_t facing)
{
    uStackFrame __("Fuse.Controls.Android.CameraLoader", "Load(Fuse.Controls.CameraFacing)");
    int32_t cameraId;

    if (::g::Fuse::Controls::Android::CameraFacingExtension::TryGetCameraId(facing, &cameraId))
        return CameraLoader__CameraPromise::New5(facing, cameraId);
    else
    {
        ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL));
        p->Reject(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Unsupported camerafacing: "), ::g::Uno::Int::ToString(facing, ::g::Uno::Int_typeof()))));
        return p;
    }
}

// private static void Load(int cameraId, Uno.Action<Java.Object> resolve, Uno.Action<string> reject) [static] :57
void CameraLoader::Load1(int32_t cameraId, uDelegate* resolve, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Load1303", "(ILcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        int32_t _ucameraId=cameraId;
        jint _cameraId = (jint)_ucameraId;
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_Object");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cameraId,_resolve,_reject);
        
        
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraLoader.uno
// -------------------------------------------------------------------------------------

// private sealed class CameraLoader.CameraPromise :9
// {
static void CameraLoader__CameraPromise_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::CameraFacing_typeof(), offsetof(CameraLoader__CameraPromise, _facing), 0,
        ::g::Uno::Int_typeof(), offsetof(CameraLoader__CameraPromise, _cameraId), 0,
        ::g::Uno::Bool_typeof(), offsetof(CameraLoader__CameraPromise, _cancelled), 0);
}

::g::Uno::Threading::Future_type* CameraLoader__CameraPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CameraLoader__CameraPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.CameraLoader.CameraPromise", options);
    type->fp_build_ = CameraLoader__CameraPromise_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))CameraLoader__CameraPromise__Cancel_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public CameraPromise(Fuse.Controls.CameraFacing facing, int cameraId) :14
void CameraLoader__CameraPromise__ctor_7_fn(CameraLoader__CameraPromise* __this, int32_t* facing, int32_t* cameraId)
{
    __this->ctor_7(*facing, *cameraId);
}

// public override sealed void Cancel([bool shutdownGracefully]) :37
void CameraLoader__CameraPromise__Cancel_fn(CameraLoader__CameraPromise* __this, bool* shutdownGracefully)
{
    __this->_cancelled = true;
}

// public CameraPromise New(Fuse.Controls.CameraFacing facing, int cameraId) :14
void CameraLoader__CameraPromise__New5_fn(int32_t* facing, int32_t* cameraId, CameraLoader__CameraPromise** __retval)
{
    *__retval = CameraLoader__CameraPromise::New5(*facing, *cameraId);
}

// private void OnLoaded(Java.Object camera) :21
void CameraLoader__CameraPromise__OnLoaded_fn(CameraLoader__CameraPromise* __this, ::g::Java::Object* camera)
{
    __this->OnLoaded(camera);
}

// private void OnRejected(string msg) :30
void CameraLoader__CameraPromise__OnRejected_fn(CameraLoader__CameraPromise* __this, uString* msg)
{
    __this->OnRejected(msg);
}

// public CameraPromise(Fuse.Controls.CameraFacing facing, int cameraId) [instance] :14
void CameraLoader__CameraPromise::ctor_7(int32_t facing, int32_t cameraId)
{
    uStackFrame __("Fuse.Controls.Android.CameraLoader.CameraPromise", ".ctor(Fuse.Controls.CameraFacing,int)");
    ctor_3();
    _facing = facing;
    _cameraId = cameraId;
    ::g::Fuse::Controls::Android::CameraLoader::Load1(cameraId, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)CameraLoader__CameraPromise__OnLoaded_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)CameraLoader__CameraPromise__OnRejected_fn, this));
}

// private void OnLoaded(Java.Object camera) [instance] :21
void CameraLoader__CameraPromise::OnLoaded(::g::Java::Object* camera)
{
    uStackFrame __("Fuse.Controls.Android.CameraLoader.CameraPromise", "OnLoaded(Java.Object)");
    ::g::Fuse::Controls::Android::Camera* c = ::g::Fuse::Controls::Android::Camera::New5(camera, _cameraId, _facing);

    if (!_cancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, c);
    else
        uPtr(c)->Dispose();
}

// private void OnRejected(string msg) [instance] :30
void CameraLoader__CameraPromise::OnRejected(uString* msg)
{
    uStackFrame __("Fuse.Controls.Android.CameraLoader.CameraPromise", "OnRejected(string)");

    if (!_cancelled)
        Reject(::g::Uno::Exception::New2(msg));
}

// public CameraPromise New(Fuse.Controls.CameraFacing facing, int cameraId) [static] :14
CameraLoader__CameraPromise* CameraLoader__CameraPromise::New5(int32_t facing, int32_t cameraId)
{
    CameraLoader__CameraPromise* obj1 = (CameraLoader__CameraPromise*)uNew(CameraLoader__CameraPromise_typeof());
    obj1->ctor_7(facing, cameraId);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class CameraView :21
// {
static void CameraView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CameraView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(CameraView_type, interface1),
        ::g::Fuse::Controls::ICameraView_typeof(), offsetof(CameraView_type, interface2),
        ::g::Fuse::Controls::ICamera_typeof(), offsetof(CameraView_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::ICameraViewHost_typeof(), offsetof(CameraView, _host), 0,
        ::g::Uno::Bool_typeof(), offsetof(CameraView, _inForeground), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL), offsetof(CameraView, _cameraFuture), 0,
        ::g::Uno::Bool_typeof(), offsetof(CameraView, _isLoading), 0,
        ::g::Fuse::Controls::CameraFacing_typeof(), offsetof(CameraView, _lastCameraFacing), 0,
        ::g::Fuse::Controls::Android::Camera_typeof(), offsetof(CameraView, _camera), 0,
        ::g::Fuse::Controls::PreviewStretchMode_typeof(), offsetof(CameraView, _previewStretchMode), 0,
        CameraView__CaptureState_typeof(), offsetof(CameraView, _captureState), 0,
        ::g::Fuse::Controls::CaptureMode_typeof(), offsetof(CameraView, _captureMode), 0,
        ::g::Uno::Bool_typeof(), offsetof(CameraView, _isDisposed), 0);
}

CameraView_type* CameraView_typeof()
{
    static uSStrong<CameraView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CameraView);
    options.TypeSize = sizeof(CameraView_type);
    type = (CameraView_type*)uClassType::New("Fuse.Controls.Android.CameraView", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = CameraView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CameraView__Dispose_fn;
    type->interface3.fp_CapturePhoto = (void(*)(uObject*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraCapturePhoto_fn;
    type->interface3.fp_StartRecording = (void(*)(uObject*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraStartRecording_fn;
    type->interface3.fp_SetCaptureMode = (void(*)(uObject*, int32_t*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraSetCaptureMode_fn;
    type->interface3.fp_SetPhotoOptions = (void(*)(uObject*, uArray*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraSetPhotoOptions_fn;
    type->interface3.fp_SetCameraFacing = (void(*)(uObject*, int32_t*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraSetCameraFacing_fn;
    type->interface3.fp_SetFlashMode = (void(*)(uObject*, int32_t*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraSetFlashMode_fn;
    type->interface3.fp_GetCameraInfo = (void(*)(uObject*, ::g::Uno::Threading::Future1**))CameraView__FuseControlsICameraGetCameraInfo_fn;
    type->interface2.fp_set_PreviewStretchMode = (void(*)(uObject*, int32_t*))CameraView__FuseControlsICameraViewset_PreviewStretchMode_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CameraView__Dispose_fn;
    return type;
}

// public CameraView(Fuse.Controls.ICameraViewHost host) :33
void CameraView__ctor_7_fn(CameraView* __this, uObject* host)
{
    __this->ctor_7(host);
}

// private void CleanupCamera() :273
void CameraView__CleanupCamera_fn(CameraView* __this)
{
    __this->CleanupCamera();
}

// private static Java.Object Create() :295
void CameraView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = CameraView::Create();
}

// public override sealed void Dispose() :284
void CameraView__Dispose_fn(CameraView* __this)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Dispose()");
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)CameraView__OnEnteringForeground_fn, __this));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringBackground(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)CameraView__OnEnteringBackground_fn, __this));
    __this->CleanupCamera();
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_host = NULL;
    __this->_isDisposed = true;
}

// private Uno.Threading.Future<Fuse.Controls.Photo> Fuse.Controls.ICamera.CapturePhoto() :144
void CameraView__FuseControlsICameraCapturePhoto_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.CapturePhoto()");

    if (__this->_camera == NULL)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.Photo>*/, ::g::Fuse::Controls::Photo_typeof(), NULL), uString::Const("Camera busy or misconfigured")), void();

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.Photo>*/, ::g::Fuse::Controls::Photo_typeof(), NULL), uString::Const("Cannot capture photo while already capturing photo or video")), void();

    if (__this->_captureMode != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.Photo>*/, ::g::Fuse::Controls::Photo_typeof(), NULL), uString::Const("Cannot capture photo, CaptureMode not set to photo")), void();

    __this->_captureState = 1;
    return *__retval = (::g::Uno::Threading::Future1*)::g::Fuse::Controls::FutureExtensions::Intercept(::g::Fuse::Controls::FutureExtensions_typeof()->MakeMethod(0/*Intercept<Fuse.Controls.Photo>*/, ::g::Fuse::Controls::Photo_typeof(), NULL), uPtr(__this->_camera)->CapturePhoto(), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)CameraView__ResetCaptureState_fn, __this)), void();
}

// private Uno.Threading.Future<Fuse.Controls.CameraInfo> Fuse.Controls.ICamera.GetCameraInfo() :261
void CameraView__FuseControlsICameraGetCameraInfo_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.GetCameraInfo()");
    return *__retval = CameraView__GetCameraInfoClosure::New5(__this), void();
}

// private Uno.Threading.Future<Fuse.Controls.CameraFacing> Fuse.Controls.ICamera.SetCameraFacing(Fuse.Controls.CameraFacing facing) :216
void CameraView__FuseControlsICameraSetCameraFacing_fn(CameraView* __this, int32_t* facing, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.SetCameraFacing(Fuse.Controls.CameraFacing)");
    int32_t facing_ = *facing;
    ::g::Uno::Threading::Promise* ret2;

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.CameraFacing>*/, ::g::Fuse::Controls::CameraFacing_typeof(), NULL), uString::Const("Cannot set CameraFacing while capturing photo or video")), void();

    if (uPtr(__this->_cameraFuture)->State() != 1)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.CameraFacing>*/, ::g::Fuse::Controls::CameraFacing_typeof(), NULL), uString::Const("Camera busy or misconfigured")), void();

    if ((__this->_camera != NULL) && (uPtr(__this->_camera)->Facing() == facing_))
        return *__retval = (::g::Uno::Threading::Promise__New2_fn(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::CameraFacing_typeof(), NULL), uCRef<int32_t>(facing_), &ret2), ret2), void();

    CameraView__SetCameraFacingClosure* p = CameraView__SetCameraFacingClosure::New6(facing_);
    __this->LoadCamera(facing_);
    uPtr(__this->_cameraFuture)->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Android.Camera>*/], (void*)CameraView__SetCameraFacingClosure__OnResolve_fn, p), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)CameraView__SetCameraFacingClosure__OnReject_fn, p));
    return *__retval = p, void();
}

// private Uno.Threading.Future<Fuse.Controls.CaptureMode> Fuse.Controls.ICamera.SetCaptureMode(Fuse.Controls.CaptureMode mode) :176
void CameraView__FuseControlsICameraSetCaptureMode_fn(CameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.SetCaptureMode(Fuse.Controls.CaptureMode)");
    int32_t mode_ = *mode;
    ::g::Uno::Threading::Promise* ret3;

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.CaptureMode>*/, ::g::Fuse::Controls::CaptureMode_typeof(), NULL), uString::Const("Cannot set CaptureMode while capturing photo or video")), void();

    __this->_captureMode = mode_;
    return *__retval = (::g::Uno::Threading::Promise__New2_fn(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::CaptureMode_typeof(), NULL), uCRef<int32_t>(mode_), &ret3), ret3), void();
}

// private Uno.Threading.Future<Fuse.Controls.FlashMode> Fuse.Controls.ICamera.SetFlashMode(Fuse.Controls.FlashMode mode) :233
void CameraView__FuseControlsICameraSetFlashMode_fn(CameraView* __this, int32_t* mode, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.SetFlashMode(Fuse.Controls.FlashMode)");
    int32_t mode_ = *mode;
    ::g::Uno::Threading::Promise* ret4;

    if (__this->_camera == NULL)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.FlashMode>*/, ::g::Fuse::Controls::FlashMode_typeof(), NULL), uString::Const("Camera busy or misconfigured")), void();

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.FlashMode>*/, ::g::Fuse::Controls::FlashMode_typeof(), NULL), uString::Const("Cannot set FlashMode while capturing photo or video")), void();

    if (!::g::Fuse::Controls::Android::FlashModeExtensions::IsSupported(mode_, __this->_camera))
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.FlashMode>*/, ::g::Fuse::Controls::FlashMode_typeof(), NULL), ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("FlashMode."), uBox<int32_t>(::g::Fuse::Controls::FlashMode_typeof(), mode_)), uString::Const(" not supported for CameraFacing.")), uBox<int32_t>(::g::Fuse::Controls::CameraFacing_typeof(), uPtr(__this->_camera)->Facing()))), void();

    return *__retval = (::g::Uno::Threading::Promise__New2_fn(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::FlashMode_typeof(), NULL), uCRef<int32_t>((uPtr(__this->_camera)->FlashMode(mode_), mode_)), &ret4), ret4), void();
}

// private Uno.Threading.Future<Fuse.Controls.PhotoOption[]> Fuse.Controls.ICamera.SetPhotoOptions(Fuse.Controls.PhotoOption[] options) :185
void CameraView__FuseControlsICameraSetPhotoOptions_fn(CameraView* __this, uArray* options, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.SetPhotoOptions(Fuse.Controls.PhotoOption[])");

    if (__this->_camera == NULL)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.PhotoOption[]>*/, ::g::Fuse::Controls::PhotoOption_typeof()->Array(), NULL), uString::Const("Camera busy or misconfigured")), void();

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.PhotoOption[]>*/, ::g::Fuse::Controls::PhotoOption_typeof()->Array(), NULL), uString::Const("Cannot set photo options while capturing photo or video")), void();

    return *__retval = uPtr(__this->_camera)->SetPhotoOptions(options), void();
}

// private Uno.Threading.Future<Fuse.Controls.RecordingSession> Fuse.Controls.ICamera.StartRecording() :160
void CameraView__FuseControlsICameraStartRecording_fn(CameraView* __this, ::g::Uno::Threading::Future1** __retval)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICamera.StartRecording()");

    if (__this->_camera == NULL)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.RecordingSession>*/, ::g::Fuse::Controls::RecordingSession_typeof(), NULL), uString::Const("Camera busy or misconfigured")), void();

    if (__this->_captureState != 0)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.RecordingSession>*/, ::g::Fuse::Controls::RecordingSession_typeof(), NULL), uString::Const("Cannot start recording while already capturing photo or video")), void();

    if (__this->_captureMode != 1)
        return *__retval = (::g::Uno::Threading::Future1*)__this->Reject(__this->__type->MakeMethod(0/*Reject<Fuse.Controls.RecordingSession>*/, ::g::Fuse::Controls::RecordingSession_typeof(), NULL), uString::Const("Cannot start recording, CaptureMode not set to video")), void();

    __this->_captureState = 2;
    return *__retval = (::g::Uno::Threading::Future1*)::g::Fuse::Controls::FutureExtensions::InvokeOnRejected(::g::Fuse::Controls::FutureExtensions_typeof()->MakeMethod(1/*InvokeOnRejected<Fuse.Controls.RecordingSession>*/, ::g::Fuse::Controls::RecordingSession_typeof(), NULL), uPtr(__this->_camera)->StartRecording(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)CameraView__ResetCaptureState_fn, __this)), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)CameraView__ResetCaptureState_fn, __this)), void();
}

// private void Fuse.Controls.ICameraView.set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode value) :131
void CameraView__FuseControlsICameraViewset_PreviewStretchMode_fn(CameraView* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "Fuse.Controls.ICameraView.set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode)");
    int32_t value_ = *value;
    __this->_previewStretchMode = value_;

    if (__this->_camera != NULL)
        uPtr(__this->_camera)->PreviewStretchMode(__this->_previewStretchMode);
}

// private void LoadCamera(Fuse.Controls.CameraFacing facing) :84
void CameraView__LoadCamera_fn(CameraView* __this, int32_t* facing)
{
    __this->LoadCamera(*facing);
}

// public CameraView New(Fuse.Controls.ICameraViewHost host) :33
void CameraView__New5_fn(uObject* host, CameraView** __retval)
{
    *__retval = CameraView::New5(host);
}

// private void OnCameraLoaded(Fuse.Controls.Android.Camera camera) :113
void CameraView__OnCameraLoaded_fn(CameraView* __this, ::g::Fuse::Controls::Android::Camera* camera)
{
    __this->OnCameraLoaded(camera);
}

// private void OnCameraRejected(Uno.Exception e) :104
void CameraView__OnCameraRejected_fn(CameraView* __this, ::g::Uno::Exception* e)
{
    __this->OnCameraRejected(e);
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) :44
void CameraView__OnEnteringBackground_fn(CameraView* __this, int32_t* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState s) :52
void CameraView__OnEnteringForeground_fn(CameraView* __this, int32_t* s)
{
    __this->OnEnteringForeground(*s);
}

// private Uno.Threading.Future<T> Reject<T>(string message) :266
void CameraView__Reject_fn(CameraView* __this, uType* __type, uString* message, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Reject(__type, message);
}

// private void ResetCaptureState() :142
void CameraView__ResetCaptureState_fn(CameraView* __this)
{
    __this->ResetCaptureState();
}

// public CameraView(Fuse.Controls.ICameraViewHost host) [instance] :33
void CameraView::ctor_7(uObject* host)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", ".ctor(Fuse.Controls.ICameraViewHost)");
    _inForeground = true;
    _isLoading = true;
    ctor_4(CameraView::Create());
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)CameraView__OnEnteringForeground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)CameraView__OnEnteringBackground_fn, this));
    _host = host;
    _cameraFuture = CameraView__InitialLoadClosure::New6(0);
    uPtr(_cameraFuture)->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Android.Camera>*/], (void*)CameraView__OnCameraLoaded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)CameraView__OnCameraRejected_fn, this));
}

// private void CleanupCamera() [instance] :273
void CameraView::CleanupCamera()
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "CleanupCamera()");

    if (_camera != NULL)
    {
        RemoveChild(_camera);
        uPtr(_camera)->Dispose();
        _camera = NULL;
    }
}

// private void LoadCamera(Fuse.Controls.CameraFacing facing) [instance] :84
void CameraView::LoadCamera(int32_t facing)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "LoadCamera(Fuse.Controls.CameraFacing)");
    _isLoading = true;

    try
    {
        {
            if (_camera != NULL)
                CleanupCamera();

            uPtr(_cameraFuture)->Cancel(false);
            _lastCameraFacing = facing;
            _cameraFuture = ::g::Fuse::Controls::Android::CameraLoader::Load(facing);
            uPtr(_cameraFuture)->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Android.Camera>*/], (void*)CameraView__OnCameraLoaded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)CameraView__OnCameraRejected_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _isLoading = false;
        U_THROW(e);
    }
}

// private void OnCameraLoaded(Fuse.Controls.Android.Camera camera) [instance] :113
void CameraView::OnCameraLoaded(::g::Fuse::Controls::Android::Camera* camera)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "OnCameraLoaded(Fuse.Controls.Android.Camera)");

    if (_isDisposed)
    {
        uPtr(camera)->Dispose();
        return;
    }

    _isLoading = false;
    _camera = camera;
    InsertChild(_camera);
    uPtr(_camera)->PreviewStretchMode(_previewStretchMode);
    ::g::Fuse::Controls::ICameraViewHost::OnCameraLoaded(uInterface(uPtr(_host), ::g::Fuse::Controls::ICameraViewHost_typeof()), (uObject*)this);
}

// private void OnCameraRejected(Uno.Exception e) [instance] :104
void CameraView::OnCameraRejected(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "OnCameraRejected(Uno.Exception)");

    if (_isDisposed)
        return;

    _isLoading = false;
    ::g::Fuse::Controls::ICameraViewHost::OnError(uInterface(uPtr(_host), ::g::Fuse::Controls::ICameraViewHost_typeof()), e);
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) [instance] :44
void CameraView::OnEnteringBackground(int32_t s)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "OnEnteringBackground(Fuse.Platform.ApplicationState)");

    if (!_inForeground)
        return;

    _inForeground = false;
    CleanupCamera();
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState s) [instance] :52
void CameraView::OnEnteringForeground(int32_t s)
{
    uStackFrame __("Fuse.Controls.Android.CameraView", "OnEnteringForeground(Fuse.Platform.ApplicationState)");

    if (_inForeground)
        return;

    _inForeground = true;

    if (!_isLoading)
        LoadCamera(_lastCameraFacing);
}

// private Uno.Threading.Future<T> Reject<T>(string message) [instance] :266
::g::Uno::Threading::Future1* CameraView::Reject(uType* __type, uString* message)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };
    uStackFrame __("Fuse.Controls.Android.CameraView", "Reject`1(string)");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    p->Reject(::g::Uno::Exception::New2(message));
    return p;
}

// private void ResetCaptureState() [instance] :142
void CameraView::ResetCaptureState()
{
    _captureState = 0;
}

// private static Java.Object Create() [static] :295
::g::Java::Object* CameraView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create304", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public CameraView New(Fuse.Controls.ICameraViewHost host) [static] :33
CameraView* CameraView::New5(uObject* host)
{
    CameraView* obj1 = (CameraView*)uNew(CameraView_typeof());
    obj1->ctor_7(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno
// -----------------------------------------------------------------------------------

// private enum CameraView.CaptureState :23
uEnumType* CameraView__CaptureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Android.CameraView.CaptureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Idle", 0LL,
        "CapturingPhoto", 1LL,
        "CapturingVideo", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// internal static extern class FlashModeExtensions :365
// {
static void FlashModeExtensions_build(uType* type)
{
    ::STRINGS[1] = uString::Const("auto");
    ::STRINGS[2] = uString::Const("on");
    ::STRINGS[3] = uString::Const("off");
    ::STRINGS[4] = uString::Const("Unexpected FlashMode: ");
}

uClassType* FlashModeExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Android.FlashModeExtensions", options);
    type->fp_build_ = FlashModeExtensions_build;
    return type;
}

// public static string AsString(Fuse.Controls.FlashMode flashMode) :387
void FlashModeExtensions__AsString_fn(int32_t* flashMode, uString** __retval)
{
    *__retval = FlashModeExtensions::AsString(*flashMode);
}

// public static bool IsSupported(Fuse.Controls.FlashMode flashMode, Fuse.Controls.Android.Camera camera) :367
void FlashModeExtensions__IsSupported_fn(int32_t* flashMode, ::g::Fuse::Controls::Android::Camera* camera, bool* __retval)
{
    *__retval = FlashModeExtensions::IsSupported(*flashMode, camera);
}

// private static bool IsSupported(string flashMode, Java.Object cameraHandle) :373
void FlashModeExtensions__IsSupported1_fn(uString* flashMode, ::g::Java::Object* cameraHandle, bool* __retval)
{
    *__retval = FlashModeExtensions::IsSupported1(flashMode, cameraHandle);
}

// public static string AsString(Fuse.Controls.FlashMode flashMode) [static] :387
uString* FlashModeExtensions::AsString(int32_t flashMode)
{
    uStackFrame __("Fuse.Controls.Android.FlashModeExtensions", "AsString(Fuse.Controls.FlashMode)");

    switch (flashMode)
    {
        case 0:
            return ::STRINGS[1/*"auto"*/];
        case 1:
            return ::STRINGS[2/*"on"*/];
        case 2:
            return ::STRINGS[3/*"off"*/];
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unexpected ...*/], uBox<int32_t>(::g::Fuse::Controls::FlashMode_typeof(), flashMode))));
    }
}

// public static bool IsSupported(Fuse.Controls.FlashMode flashMode, Fuse.Controls.Android.Camera camera) [static] :367
bool FlashModeExtensions::IsSupported(int32_t flashMode, ::g::Fuse::Controls::Android::Camera* camera)
{
    uStackFrame __("Fuse.Controls.Android.FlashModeExtensions", "IsSupported(Fuse.Controls.FlashMode,Fuse.Controls.Android.Camera)");
    return FlashModeExtensions::IsSupported1(FlashModeExtensions::AsString(flashMode), uPtr(camera)->CameraHandle());
}

// private static bool IsSupported(string flashMode, Java.Object cameraHandle) [static] :373
bool FlashModeExtensions::IsSupported1(uString* flashMode, ::g::Java::Object* cameraHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IsSupported1305", "(Ljava/lang/String;Ljava/lang/Object;)Z");
        uString* _uflashMode=flashMode;
        jstring _flashMode = JniHelper::UnoToJavaString(_uflashMode);
        ::g::Java::Object* _ucameraHandle=cameraHandle;
        jobject _cameraHandle = (_ucameraHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucameraHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_flashMode,_cameraHandle);
        bool __result = (bool)__jresult;
        if (_flashMode!=NULL) { U_JNIVAR->DeleteLocalRef(_flashMode); }
        if (_cameraHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_cameraHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno
// -----------------------------------------------------------------------------------

// private sealed class CameraView.GetCameraInfoClosure :247
// {
static void CameraView__GetCameraInfoClosure_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Failed to get camera info: ");
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::CameraInfo_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::Android::CameraView_typeof(), offsetof(CameraView__GetCameraInfoClosure, _cameraView), 0);
}

::g::Uno::Threading::Future_type* CameraView__GetCameraInfoClosure_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CameraView__GetCameraInfoClosure);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.CameraView.GetCameraInfoClosure", options);
    type->fp_build_ = CameraView__GetCameraInfoClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public GetCameraInfoClosure(Fuse.Controls.Android.CameraView cameraView) :251
void CameraView__GetCameraInfoClosure__ctor_7_fn(CameraView__GetCameraInfoClosure* __this, ::g::Fuse::Controls::Android::CameraView* cameraView)
{
    __this->ctor_7(cameraView);
}

// public GetCameraInfoClosure New(Fuse.Controls.Android.CameraView cameraView) :251
void CameraView__GetCameraInfoClosure__New5_fn(::g::Fuse::Controls::Android::CameraView* cameraView, CameraView__GetCameraInfoClosure** __retval)
{
    *__retval = CameraView__GetCameraInfoClosure::New5(cameraView);
}

// private void OnReject(Uno.Exception e) :258
void CameraView__GetCameraInfoClosure__OnReject_fn(CameraView__GetCameraInfoClosure* __this, ::g::Uno::Exception* e)
{
    __this->OnReject(e);
}

// private void OnResolve(Fuse.Controls.Android.Camera camera) :257
void CameraView__GetCameraInfoClosure__OnResolve_fn(CameraView__GetCameraInfoClosure* __this, ::g::Fuse::Controls::Android::Camera* camera)
{
    __this->OnResolve(camera);
}

// public GetCameraInfoClosure(Fuse.Controls.Android.CameraView cameraView) [instance] :251
void CameraView__GetCameraInfoClosure::ctor_7(::g::Fuse::Controls::Android::CameraView* cameraView)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.GetCameraInfoClosure", ".ctor(Fuse.Controls.Android.CameraView)");
    ctor_3();
    _cameraView = cameraView;
    uPtr(uPtr(_cameraView)->_cameraFuture)->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Android.Camera>*/], (void*)CameraView__GetCameraInfoClosure__OnResolve_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)CameraView__GetCameraInfoClosure__OnReject_fn, this));
}

// private void OnReject(Uno.Exception e) [instance] :258
void CameraView__GetCameraInfoClosure::OnReject(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.GetCameraInfoClosure", "OnReject(Uno.Exception)");
    Reject(::g::Uno::Exception::New3(::g::Uno::String::op_Addition2(::STRINGS[5/*"Failed to g...*/], uPtr(e)->Message()), e));
}

// private void OnResolve(Fuse.Controls.Android.Camera camera) [instance] :257
void CameraView__GetCameraInfoClosure::OnResolve(::g::Fuse::Controls::Android::Camera* camera)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.GetCameraInfoClosure", "OnResolve(Fuse.Controls.Android.Camera)");
    ::g::Uno::Threading::Promise__Resolve_fn(this, ::g::Fuse::Controls::CameraInfo::New1(uPtr(camera)->FlashMode(), uPtr(camera)->Facing(), uPtr(_cameraView)->_captureMode, uPtr(camera)->PictureSizes(), uPtr(camera)->SupportedFlashModes()));
}

// public GetCameraInfoClosure New(Fuse.Controls.Android.CameraView cameraView) [static] :251
CameraView__GetCameraInfoClosure* CameraView__GetCameraInfoClosure::New5(::g::Fuse::Controls::Android::CameraView* cameraView)
{
    CameraView__GetCameraInfoClosure* obj1 = (CameraView__GetCameraInfoClosure*)uNew(CameraView__GetCameraInfoClosure_typeof());
    obj1->ctor_7(cameraView);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno
// -----------------------------------------------------------------------------------

// private sealed class CameraView.InitialLoadClosure :61
// {
static void CameraView__InitialLoadClosure_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[4/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL);
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Fuse::Controls::Android::Camera_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::CameraFacing_typeof(), offsetof(CameraView__InitialLoadClosure, _facing), 0);
}

::g::Uno::Threading::Future_type* CameraView__InitialLoadClosure_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CameraView__InitialLoadClosure);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.CameraView.InitialLoadClosure", options);
    type->fp_build_ = CameraView__InitialLoadClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public InitialLoadClosure(Fuse.Controls.CameraFacing facing) :65
void CameraView__InitialLoadClosure__ctor_8_fn(CameraView__InitialLoadClosure* __this, int32_t* facing)
{
    __this->ctor_8(*facing);
}

// public InitialLoadClosure New(Fuse.Controls.CameraFacing facing) :65
void CameraView__InitialLoadClosure__New6_fn(int32_t* facing, CameraView__InitialLoadClosure** __retval)
{
    *__retval = CameraView__InitialLoadClosure::New6(*facing);
}

// private void OnPermissionsPerimtted(Uno.Permissions.PlatformPermission[] permission) :75
void CameraView__InitialLoadClosure__OnPermissionsPerimtted_fn(CameraView__InitialLoadClosure* __this, uArray* permission)
{
    __this->OnPermissionsPerimtted(permission);
}

// public InitialLoadClosure(Fuse.Controls.CameraFacing facing) [instance] :65
void CameraView__InitialLoadClosure::ctor_8(int32_t facing)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.InitialLoadClosure", ".ctor(Fuse.Controls.CameraFacing)");
    uArray* array2;
    ctor_7();
    _facing = facing;
    uPtr(::g::Uno::Permissions::Permissions::Request1((array2 = uArray::New(::TYPES[4/*Uno.Permissions.PlatformPermission[]*/], 3), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::CAMERA(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::RECORD_AUDIO(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(2) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), array2)))->Then1(uDelegate::New(::TYPES[5/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)CameraView__InitialLoadClosure__OnPermissionsPerimtted_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, this));
}

// private void OnPermissionsPerimtted(Uno.Permissions.PlatformPermission[] permission) [instance] :75
void CameraView__InitialLoadClosure::OnPermissionsPerimtted(uArray* permission)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.InitialLoadClosure", "OnPermissionsPerimtted(Uno.Permissions.PlatformPermission[])");
    uPtr(::g::Fuse::Controls::Android::CameraLoader::Load(_facing))->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Android.Camera>*/], (void*)::g::Uno::Threading::Promise__Resolve_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, this));
}

// public InitialLoadClosure New(Fuse.Controls.CameraFacing facing) [static] :65
CameraView__InitialLoadClosure* CameraView__InitialLoadClosure::New6(int32_t facing)
{
    CameraView__InitialLoadClosure* obj1 = (CameraView__InitialLoadClosure*)uNew(CameraView__InitialLoadClosure_typeof());
    obj1->ctor_8(facing);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno
// ------------------------------------------------------------------------------------

// internal sealed extern class NativePhoto :18
// {
static void NativePhoto_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(NativePhoto, _byteArray), 0);
}

::g::Fuse::Controls::Photo_type* NativePhoto_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Photo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Photo_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativePhoto);
    options.TypeSize = sizeof(::g::Fuse::Controls::Photo_type);
    type = (::g::Fuse::Controls::Photo_type*)uClassType::New("Fuse.Controls.Android.NativePhoto", options);
    type->fp_build_ = NativePhoto_build;
    type->fp_GetPhotoHandle = (void(*)(::g::Fuse::Controls::Photo*, ::g::Uno::Threading::Future1**))NativePhoto__GetPhotoHandle_fn;
    type->fp_Release = (void(*)(::g::Fuse::Controls::Photo*))NativePhoto__Release_fn;
    type->fp_Save = (void(*)(::g::Fuse::Controls::Photo*, ::g::Uno::Threading::Future1**))NativePhoto__Save_fn;
    type->fp_SaveThumbnail = (void(*)(::g::Fuse::Controls::Photo*, ::g::Fuse::Controls::ThumbnailSizeHint*, ::g::Uno::Threading::Future1**))NativePhoto__SaveThumbnail_fn;
    return type;
}

// public NativePhoto(Java.Object byteArray) :22
void NativePhoto__ctor_1_fn(NativePhoto* __this, ::g::Java::Object* byteArray)
{
    __this->ctor_1(byteArray);
}

// private static Java.Object GetInputStream(Java.Object byteArray) :414
void NativePhoto__GetInputStream_fn(::g::Java::Object* byteArray, ::g::Java::Object** __retval)
{
    *__retval = NativePhoto::GetInputStream(byteArray);
}

// internal override sealed Uno.Threading.Future<Fuse.Controls.PhotoHandle> GetPhotoHandle() :135
void NativePhoto__GetPhotoHandle_fn(NativePhoto* __this, ::g::Uno::Threading::Future1** __retval)
{
    return *__retval = NativePhoto__PhotoHandlePromise::New6(__this->_byteArray), void();
}

// public NativePhoto New(Java.Object byteArray) :22
void NativePhoto__New1_fn(::g::Java::Object* byteArray, NativePhoto** __retval)
{
    *__retval = NativePhoto::New1(byteArray);
}

// public override sealed void Release() :230
void NativePhoto__Release_fn(NativePhoto* __this)
{
    __this->_byteArray = NULL;
}

// public override sealed Uno.Threading.Future<string> Save() :27
void NativePhoto__Save_fn(NativePhoto* __this, ::g::Uno::Threading::Future1** __retval)
{
    return *__retval = NativePhoto__SavePromise::New6(__this->_byteArray), void();
}

// public override sealed Uno.Threading.Future<string> SaveThumbnail([Fuse.Controls.ThumbnailSizeHint thumbnailSizeHint]) :32
void NativePhoto__SaveThumbnail_fn(NativePhoto* __this, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint, ::g::Uno::Threading::Future1** __retval)
{
    return *__retval = NativePhoto__SaveThumbnailPromise::New6(__this->_byteArray, thumbnailSizeHint), void();
}

// public NativePhoto(Java.Object byteArray) [instance] :22
void NativePhoto::ctor_1(::g::Java::Object* byteArray)
{
    ctor_();
    _byteArray = byteArray;
}

// private static Java.Object GetInputStream(Java.Object byteArray) [static] :414
::g::Java::Object* NativePhoto::GetInputStream(::g::Java::Object* byteArray)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetInputStream315", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubyteArray=byteArray;
        jobject _byteArray = (_ubyteArray==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubyteArray, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_byteArray);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_byteArray!=NULL) { U_JNIVAR->DeleteLocalRef(_byteArray); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public NativePhoto New(Java.Object byteArray) [static] :22
NativePhoto* NativePhoto::New1(::g::Java::Object* byteArray)
{
    NativePhoto* obj1 = (NativePhoto*)uNew(NativePhoto_typeof());
    obj1->ctor_1(byteArray);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno
// ------------------------------------------------------------------------------------

// internal sealed extern class NativePhotoHandle :420
// {
static void NativePhotoHandle_build(uType* type)
{
    ::STRINGS[6] = uString::Const(" has been disposed!");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativePhotoHandle_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(NativePhotoHandle, _bitmap), 0);
}

NativePhotoHandle_type* NativePhotoHandle_typeof()
{
    static uSStrong<NativePhotoHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::PhotoHandle_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativePhotoHandle);
    options.TypeSize = sizeof(NativePhotoHandle_type);
    type = (NativePhotoHandle_type*)uClassType::New("Fuse.Controls.Android.NativePhotoHandle", options);
    type->fp_build_ = NativePhotoHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))NativePhotoHandle__Dispose_fn;
    return type;
}

// public NativePhotoHandle(Java.Object bitmap) :433
void NativePhotoHandle__ctor_1_fn(NativePhotoHandle* __this, ::g::Java::Object* bitmap)
{
    __this->ctor_1(bitmap);
}

// public Java.Object get_Bitmap() :425
void NativePhotoHandle__get_Bitmap_fn(NativePhotoHandle* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Bitmap();
}

// public void Dispose() :438
void NativePhotoHandle__Dispose_fn(NativePhotoHandle* __this)
{
    __this->Dispose();
}

// public NativePhotoHandle New(Java.Object bitmap) :433
void NativePhotoHandle__New1_fn(::g::Java::Object* bitmap, NativePhotoHandle** __retval)
{
    *__retval = NativePhotoHandle::New1(bitmap);
}

// private static void Recycle(Java.Object bitmap) :448
void NativePhotoHandle__Recycle_fn(::g::Java::Object* bitmap)
{
    NativePhotoHandle::Recycle(bitmap);
}

// public NativePhotoHandle(Java.Object bitmap) [instance] :433
void NativePhotoHandle::ctor_1(::g::Java::Object* bitmap)
{
    ctor_();
    _bitmap = bitmap;
}

// public Java.Object get_Bitmap() [instance] :425
::g::Java::Object* NativePhotoHandle::Bitmap()
{
    uStackFrame __("Fuse.Controls.Android.NativePhotoHandle", "get_Bitmap()");

    if (_bitmap == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(this, ::STRINGS[6/*" has been d...*/])));

    return _bitmap;
}

// public void Dispose() [instance] :438
void NativePhotoHandle::Dispose()
{
    if (_bitmap == NULL)
        return;

    NativePhotoHandle::Recycle(_bitmap);
    _bitmap = NULL;
}

// public NativePhotoHandle New(Java.Object bitmap) [static] :433
NativePhotoHandle* NativePhotoHandle::New1(::g::Java::Object* bitmap)
{
    NativePhotoHandle* obj1 = (NativePhotoHandle*)uNew(NativePhotoHandle_typeof());
    obj1->ctor_1(bitmap);
    return obj1;
}

// private static void Recycle(Java.Object bitmap) [static] :448
void NativePhotoHandle::Recycle(::g::Java::Object* bitmap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Recycle316", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno
// ------------------------------------------------------------------------------------

// private sealed class NativePhoto.PhotoHandlePromise :149
// {
static void NativePhoto__PhotoHandlePromise_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Float_typeof()->Array();
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Fuse::Controls::PhotoHandle_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* NativePhoto__PhotoHandlePromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativePhoto__PhotoHandlePromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.NativePhoto.PhotoHandlePromise", options);
    type->fp_build_ = NativePhoto__PhotoHandlePromise_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PhotoHandlePromise(Java.Object byteArray) :151
void NativePhoto__PhotoHandlePromise__ctor_8_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* byteArray)
{
    __this->ctor_8(byteArray);
}

// private static Java.Object GetInputStream(Java.Object byteArray) :224
void NativePhoto__PhotoHandlePromise__GetInputStream_fn(::g::Java::Object* byteArray, ::g::Java::Object** __retval)
{
    *__retval = NativePhoto__PhotoHandlePromise::GetInputStream(byteArray);
}

// private float[] GetOrientationMatrix(Fuse.Resources.Exif.ImageOrientation orientation) :179
void NativePhoto__PhotoHandlePromise__GetOrientationMatrix_fn(NativePhoto__PhotoHandlePromise* __this, int32_t* orientation, uArray** __retval)
{
    *__retval = __this->GetOrientationMatrix(*orientation);
}

// private void Load(Java.Object byteArray, float[] matrix, Uno.Action<Java.Object> onResolve, Uno.Action<string> onReject) :159
void NativePhoto__PhotoHandlePromise__Load_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* byteArray, uArray* matrix, uDelegate* onResolve, uDelegate* onReject)
{
    __this->Load(byteArray, matrix, onResolve, onReject);
}

// public PhotoHandlePromise New(Java.Object byteArray) :151
void NativePhoto__PhotoHandlePromise__New6_fn(::g::Java::Object* byteArray, NativePhoto__PhotoHandlePromise** __retval)
{
    *__retval = NativePhoto__PhotoHandlePromise::New6(byteArray);
}

// private void OnReject(string msg) :218
void NativePhoto__PhotoHandlePromise__OnReject_fn(NativePhoto__PhotoHandlePromise* __this, uString* msg)
{
    __this->OnReject(msg);
}

// private void OnResolve(Java.Object bitmap) :213
void NativePhoto__PhotoHandlePromise__OnResolve_fn(NativePhoto__PhotoHandlePromise* __this, ::g::Java::Object* bitmap)
{
    __this->OnResolve(bitmap);
}

// public PhotoHandlePromise(Java.Object byteArray) [instance] :151
void NativePhoto__PhotoHandlePromise::ctor_8(::g::Java::Object* byteArray)
{
    ctor_7();
    int32_t orientation = ::g::Fuse::Resources::Exif::ExifData__FromAndroidInputStream(NativePhoto__PhotoHandlePromise::GetInputStream(byteArray)).Orientation;
    uArray* matrix = GetOrientationMatrix(orientation);
    Load(byteArray, matrix, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)NativePhoto__PhotoHandlePromise__OnResolve_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)NativePhoto__PhotoHandlePromise__OnReject_fn, this));
}

// private float[] GetOrientationMatrix(Fuse.Resources.Exif.ImageOrientation orientation) [instance] :179
uArray* NativePhoto__PhotoHandlePromise::GetOrientationMatrix(int32_t orientation)
{
    ::g::Uno::Float3x3 t = ::g::Uno::Float3x3__Identity();

    if ((orientation & 4) == 4)
    {
        t.M22 = -1.0f;
        t.M32 = 1.0f;
    }

    if ((orientation & 2) == 2)
    {
        ::g::Uno::Float3x3 r = ::g::Uno::Float3x3__Identity();
        r.M11 = (r.M22 = ::g::Uno::Math::Cos1(3.14159274f));
        r.M12 = ::g::Uno::Math::Sin1(3.14159274f);
        r.M21 = -r.M12;
        t = ::g::Uno::Matrix::Mul4(t, r);
    }

    if ((orientation & 1) == 1)
    {
        ::g::Uno::Float3x3 r1 = ::g::Uno::Float3x3__Identity();
        r1.M11 = (r1.M22 = ::g::Uno::Math::Cos1(1.57079637f));
        r1.M21 = ::g::Uno::Math::Sin1(1.57079637f);
        r1.M12 = -r1.M21;
        t = ::g::Uno::Matrix::Mul4(t, r1);
    }

    return uArray::Init<double>(::TYPES[6/*float[]*/], 9, t.M11, t.M12, t.M13, t.M21, t.M22, t.M23, t.M31, t.M32, t.M33);
}

// private void Load(Java.Object byteArray, float[] matrix, Uno.Action<Java.Object> onResolve, Uno.Action<string> onReject) [instance] :159
void NativePhoto__PhotoHandlePromise::Load(::g::Java::Object* byteArray, uArray* matrix, uDelegate* onResolve, uDelegate* onReject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Load311", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/uno/FloatArray;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _ubyteArray=byteArray;
        jobject _byteArray = (_ubyteArray==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubyteArray, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _umatrix=matrix;
        jobject _matrix = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_umatrix);
        uDelegate* _uonResolve=onResolve;
        jobject _onResolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonResolve, "com.foreign.Uno.Action_Object");
        uDelegate* _uonReject=onReject;
        jobject _onReject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonReject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_byteArray,_matrix,_onResolve,_onReject);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_byteArray!=NULL) { U_JNIVAR->DeleteLocalRef(_byteArray); }
        if (_matrix!=NULL) { U_JNIVAR->DeleteLocalRef(_matrix); }
        if (_onResolve!=NULL) { U_JNIVAR->DeleteLocalRef(_onResolve); }
        if (_onReject!=NULL) { U_JNIVAR->DeleteLocalRef(_onReject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnReject(string msg) [instance] :218
void NativePhoto__PhotoHandlePromise::OnReject(uString* msg)
{
    uStackFrame __("Fuse.Controls.Android.NativePhoto.PhotoHandlePromise", "OnReject(string)");
    Reject(::g::Uno::Exception::New2(msg));
}

// private void OnResolve(Java.Object bitmap) [instance] :213
void NativePhoto__PhotoHandlePromise::OnResolve(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Android.NativePhoto.PhotoHandlePromise", "OnResolve(Java.Object)");
    ::g::Uno::Threading::Promise__Resolve_fn(this, ::g::Fuse::Controls::Android::NativePhotoHandle::New1(bitmap));
}

// private static Java.Object GetInputStream(Java.Object byteArray) [static] :224
::g::Java::Object* NativePhoto__PhotoHandlePromise::GetInputStream(::g::Java::Object* byteArray)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetInputStream310", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubyteArray=byteArray;
        jobject _byteArray = (_ubyteArray==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubyteArray, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_byteArray);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_byteArray!=NULL) { U_JNIVAR->DeleteLocalRef(_byteArray); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public PhotoHandlePromise New(Java.Object byteArray) [static] :151
NativePhoto__PhotoHandlePromise* NativePhoto__PhotoHandlePromise::New6(::g::Java::Object* byteArray)
{
    NativePhoto__PhotoHandlePromise* obj1 = (NativePhoto__PhotoHandlePromise*)uNew(NativePhoto__PhotoHandlePromise_typeof());
    obj1->ctor_8(byteArray);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/PhotoPreview.uno
// -------------------------------------------------------------------------------------

// internal sealed extern class PhotoPreview :21
// {
static void PhotoPreview_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Failed to get photo handle: ");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/PhotoPreview.uno");
    ::STRINGS[9] = uString::Const("OnRejected");
    ::STRINGS[10] = uString::Const("Unexpected PreviewStretchMode: ");
    ::TYPES[7] = ::g::Fuse::Controls::CameraViewBase__PhotoCapturedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Android::NativePhotoHandle_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::IPhotoPreviewHost_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::PhotoHandle_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PhotoPreview_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(PhotoPreview_type, interface1),
        ::g::Fuse::Controls::IPhotoPreview_typeof(), offsetof(PhotoPreview_type, interface2));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(PhotoPreview, _view), 0,
        ::TYPES[9/*Fuse.Controls.IPhotoPreviewHost*/], offsetof(PhotoPreview, _host), 0,
        ::g::Fuse::Controls::CameraView_typeof(), offsetof(PhotoPreview, _cameraView), 0,
        ::TYPES[8/*Fuse.Controls.Android.NativePhotoHandle*/], offsetof(PhotoPreview, _photoHandle), 0);
}

PhotoPreview_type* PhotoPreview_typeof()
{
    static uSStrong<PhotoPreview_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(PhotoPreview);
    options.TypeSize = sizeof(PhotoPreview_type);
    type = (PhotoPreview_type*)uClassType::New("Fuse.Controls.Android.PhotoPreview", options);
    type->fp_build_ = PhotoPreview_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))PhotoPreview__Dispose_fn;
    type->interface2.fp_set_PreviewStretchMode = (void(*)(uObject*, int32_t*))PhotoPreview__FuseControlsIPhotoPreviewset_PreviewStretchMode_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PhotoPreview__Dispose_fn;
    return type;
}

// public PhotoPreview(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :24
void PhotoPreview__ctor_7_fn(PhotoPreview* __this, uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    __this->ctor_7(host, cameraView);
}

// private PhotoPreview(Java.Object view, Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :32
void PhotoPreview__ctor_8_fn(PhotoPreview* __this, ::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    __this->ctor_8(view, host, cameraView);
}

// public override sealed void Dispose() :82
void PhotoPreview__Dispose_fn(PhotoPreview* __this)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_view = NULL;
    __this->_host = NULL;

    if (__this->_photoHandle != NULL)
    {
        uPtr(__this->_photoHandle)->Dispose();
        __this->_photoHandle = NULL;
    }

    uPtr(__this->_cameraView)->remove_PhotoCaptured(uDelegate::New(::TYPES[7/*Fuse.Controls.CameraViewBase.PhotoCapturedHandler*/], (void*)PhotoPreview__OnPhotoCaptured_fn, __this));
    __this->_cameraView = NULL;
}

// private void Fuse.Controls.IPhotoPreview.set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode value) :66
void PhotoPreview__FuseControlsIPhotoPreviewset_PreviewStretchMode_fn(PhotoPreview* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", "Fuse.Controls.IPhotoPreview.set_PreviewStretchMode(Fuse.Controls.PreviewStretchMode)");
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            PhotoPreview::SetCenterInside(__this->_view);
            break;
        }
        case 1:
        {
            PhotoPreview::SetCenterCrop(__this->_view);
            break;
        }
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Unexpected ...*/], uBox<int32_t>(::g::Fuse::Controls::PreviewStretchMode_typeof(), value_))));
    }
}

// public PhotoPreview New(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :24
void PhotoPreview__New5_fn(uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval)
{
    *__retval = PhotoPreview::New5(host, cameraView);
}

// private PhotoPreview New(Java.Object view, Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) :32
void PhotoPreview__New6_fn(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView, PhotoPreview** __retval)
{
    *__retval = PhotoPreview::New6(view, host, cameraView);
}

// private static Java.Object NewImageView() :115
void PhotoPreview__NewImageView_fn(::g::Java::Object** __retval)
{
    *__retval = PhotoPreview::NewImageView();
}

// private void OnGotPhotoHandle(Fuse.Controls.PhotoHandle photoHandle) :47
void PhotoPreview__OnGotPhotoHandle_fn(PhotoPreview* __this, ::g::Fuse::Controls::PhotoHandle* photoHandle)
{
    __this->OnGotPhotoHandle(photoHandle);
}

// private void OnPhotoCaptured(Fuse.Controls.Photo photo) :40
void PhotoPreview__OnPhotoCaptured_fn(PhotoPreview* __this, ::g::Fuse::Controls::Photo* photo)
{
    __this->OnPhotoCaptured(photo);
}

// private void OnRejected(Uno.Exception e) :59
void PhotoPreview__OnRejected_fn(PhotoPreview* __this, ::g::Uno::Exception* e)
{
    __this->OnRejected(e);
}

// private static void SetCenterCrop(Java.Object imageView) :97
void PhotoPreview__SetCenterCrop_fn(::g::Java::Object* imageView)
{
    PhotoPreview::SetCenterCrop(imageView);
}

// private static void SetCenterInside(Java.Object imageView) :103
void PhotoPreview__SetCenterInside_fn(::g::Java::Object* imageView)
{
    PhotoPreview::SetCenterInside(imageView);
}

// private static void SetImageBitmap(Java.Object imageView, Java.Object bitmap) :109
void PhotoPreview__SetImageBitmap_fn(::g::Java::Object* imageView, ::g::Java::Object* bitmap)
{
    PhotoPreview::SetImageBitmap(imageView, bitmap);
}

// public PhotoPreview(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [instance] :24
void PhotoPreview::ctor_7(uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", ".ctor(Fuse.Controls.IPhotoPreviewHost,Fuse.Controls.CameraView)");
    ctor_8(PhotoPreview::NewImageView(), host, cameraView);
}

// private PhotoPreview(Java.Object view, Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [instance] :32
void PhotoPreview::ctor_8(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", ".ctor(Java.Object,Fuse.Controls.IPhotoPreviewHost,Fuse.Controls.CameraView)");
    ctor_4(view);
    _view = view;
    _host = host;
    _cameraView = cameraView;
    uPtr(_cameraView)->add_PhotoCaptured(uDelegate::New(::TYPES[7/*Fuse.Controls.CameraViewBase.PhotoCapturedHandler*/], (void*)PhotoPreview__OnPhotoCaptured_fn, this));
}

// private void OnGotPhotoHandle(Fuse.Controls.PhotoHandle photoHandle) [instance] :47
void PhotoPreview::OnGotPhotoHandle(::g::Fuse::Controls::PhotoHandle* photoHandle)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", "OnGotPhotoHandle(Fuse.Controls.PhotoHandle)");
    ::g::Fuse::Controls::Android::NativePhotoHandle* oldPhotoHandle = _photoHandle;
    _photoHandle = uCast< ::g::Fuse::Controls::Android::NativePhotoHandle*>(photoHandle, ::TYPES[8/*Fuse.Controls.Android.NativePhotoHandle*/]);
    PhotoPreview::SetImageBitmap(_view, uPtr(_photoHandle)->Bitmap());

    if (oldPhotoHandle != NULL)
        uPtr(oldPhotoHandle)->Dispose();

    ::g::Fuse::Controls::IPhotoPreviewHost::OnPhotoLoaded(uInterface(uPtr(_host), ::TYPES[9/*Fuse.Controls.IPhotoPreviewHost*/]));
}

// private void OnPhotoCaptured(Fuse.Controls.Photo photo) [instance] :40
void PhotoPreview::OnPhotoCaptured(::g::Fuse::Controls::Photo* photo)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", "OnPhotoCaptured(Fuse.Controls.Photo)");
    uPtr(uPtr(photo)->GetPhotoHandle())->Then1(uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Controls.PhotoHandle>*/], (void*)PhotoPreview__OnGotPhotoHandle_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)PhotoPreview__OnRejected_fn, this));
}

// private void OnRejected(Uno.Exception e) [instance] :59
void PhotoPreview::OnRejected(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Android.PhotoPreview", "OnRejected(Uno.Exception)");
    ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition2(::STRINGS[7/*"Failed to g...*/], uPtr(e)->Message()), this, ::STRINGS[8/*"/usr/local/...*/], 61, ::STRINGS[9/*"OnRejected"*/]);
}

// public PhotoPreview New(Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [static] :24
PhotoPreview* PhotoPreview::New5(uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    PhotoPreview* obj1 = (PhotoPreview*)uNew(PhotoPreview_typeof());
    obj1->ctor_7(host, cameraView);
    return obj1;
}

// private PhotoPreview New(Java.Object view, Fuse.Controls.IPhotoPreviewHost host, Fuse.Controls.CameraView cameraView) [static] :32
PhotoPreview* PhotoPreview::New6(::g::Java::Object* view, uObject* host, ::g::Fuse::Controls::CameraView* cameraView)
{
    PhotoPreview* obj2 = (PhotoPreview*)uNew(PhotoPreview_typeof());
    obj2->ctor_8(view, host, cameraView);
    return obj2;
}

// private static Java.Object NewImageView() [static] :115
::g::Java::Object* PhotoPreview::NewImageView()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NewImageView317", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void SetCenterCrop(Java.Object imageView) [static] :97
void PhotoPreview::SetCenterCrop(::g::Java::Object* imageView)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCenterCrop318", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uimageView=imageView;
        jobject _imageView = (_uimageView==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uimageView, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_imageView);
        
        if (_imageView!=NULL) { U_JNIVAR->DeleteLocalRef(_imageView); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetCenterInside(Java.Object imageView) [static] :103
void PhotoPreview::SetCenterInside(::g::Java::Object* imageView)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCenterInside319", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uimageView=imageView;
        jobject _imageView = (_uimageView==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uimageView, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_imageView);
        
        if (_imageView!=NULL) { U_JNIVAR->DeleteLocalRef(_imageView); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageBitmap(Java.Object imageView, Java.Object bitmap) [static] :109
void PhotoPreview::SetImageBitmap(::g::Java::Object* imageView, ::g::Java::Object* bitmap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageBitmap320", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uimageView=imageView;
        jobject _imageView = (_uimageView==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uimageView, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_imageView,_bitmap);
        
        if (_imageView!=NULL) { U_JNIVAR->DeleteLocalRef(_imageView); }
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// private sealed class Camera.PicturePromise :107
// {
static void Camera__PicturePromise_build(uType* type)
{
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Fuse::Controls::Photo_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Camera__PicturePromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Camera__PicturePromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.Camera.PicturePromise", options);
    type->fp_build_ = Camera__PicturePromise_build;
    type->fp_ctor_ = (void*)Camera__PicturePromise__New6_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public generated PicturePromise() :107
void Camera__PicturePromise__ctor_8_fn(Camera__PicturePromise* __this)
{
    __this->ctor_8();
}

// public generated PicturePromise New() :107
void Camera__PicturePromise__New6_fn(Camera__PicturePromise** __retval)
{
    *__retval = Camera__PicturePromise::New6();
}

// public void OnReject(string exceptionMessage) :115
void Camera__PicturePromise__OnReject_fn(Camera__PicturePromise* __this, uString* exceptionMessage)
{
    __this->OnReject(exceptionMessage);
}

// public void OnResolve(Java.Object bytesArray) :109
void Camera__PicturePromise__OnResolve_fn(Camera__PicturePromise* __this, ::g::Java::Object* bytesArray)
{
    __this->OnResolve(bytesArray);
}

// public generated PicturePromise() [instance] :107
void Camera__PicturePromise::ctor_8()
{
    ctor_7();
}

// public void OnReject(string exceptionMessage) [instance] :115
void Camera__PicturePromise::OnReject(uString* exceptionMessage)
{
    uStackFrame __("Fuse.Controls.Android.Camera.PicturePromise", "OnReject(string)");

    if (State() == 0)
        Reject(::g::Uno::Exception::New2(exceptionMessage));
}

// public void OnResolve(Java.Object bytesArray) [instance] :109
void Camera__PicturePromise::OnResolve(::g::Java::Object* bytesArray)
{
    uStackFrame __("Fuse.Controls.Android.Camera.PicturePromise", "OnResolve(Java.Object)");

    if (State() == 0)
        ::g::Uno::Threading::Promise__Resolve_fn(this, ::g::Fuse::Controls::Android::NativePhoto::New1(bytesArray));
}

// public generated PicturePromise New() [static] :107
Camera__PicturePromise* Camera__PicturePromise::New6()
{
    Camera__PicturePromise* obj1 = (Camera__PicturePromise*)uNew(Camera__PicturePromise_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// private sealed class AndroidRecordingSession.RecordingPromise :63
// {
static void AndroidRecordingSession__RecordingPromise_build(uType* type)
{
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Fuse::Controls::Recording_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* AndroidRecordingSession__RecordingPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AndroidRecordingSession__RecordingPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.AndroidRecordingSession.RecordingPromise", options);
    type->fp_build_ = AndroidRecordingSession__RecordingPromise_build;
    type->fp_ctor_ = (void*)AndroidRecordingSession__RecordingPromise__New6_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public generated RecordingPromise() :63
void AndroidRecordingSession__RecordingPromise__ctor_8_fn(AndroidRecordingSession__RecordingPromise* __this)
{
    __this->ctor_8();
}

// public generated RecordingPromise New() :63
void AndroidRecordingSession__RecordingPromise__New6_fn(AndroidRecordingSession__RecordingPromise** __retval)
{
    *__retval = AndroidRecordingSession__RecordingPromise::New6();
}

// public void OnReject(string exceptionMessage) :66
void AndroidRecordingSession__RecordingPromise__OnReject_fn(AndroidRecordingSession__RecordingPromise* __this, uString* exceptionMessage)
{
    __this->OnReject(exceptionMessage);
}

// public void OnResolve(string outputFilePath) :65
void AndroidRecordingSession__RecordingPromise__OnResolve_fn(AndroidRecordingSession__RecordingPromise* __this, uString* outputFilePath)
{
    __this->OnResolve(outputFilePath);
}

// public generated RecordingPromise() [instance] :63
void AndroidRecordingSession__RecordingPromise::ctor_8()
{
    ctor_7();
}

// public void OnReject(string exceptionMessage) [instance] :66
void AndroidRecordingSession__RecordingPromise::OnReject(uString* exceptionMessage)
{
    uStackFrame __("Fuse.Controls.Android.AndroidRecordingSession.RecordingPromise", "OnReject(string)");
    Reject(::g::Uno::Exception::New2(exceptionMessage));
}

// public void OnResolve(string outputFilePath) [instance] :65
void AndroidRecordingSession__RecordingPromise::OnResolve(uString* outputFilePath)
{
    uStackFrame __("Fuse.Controls.Android.AndroidRecordingSession.RecordingPromise", "OnResolve(string)");
    ::g::Uno::Threading::Promise__Resolve_fn(this, ::g::Fuse::Controls::Android::AndroidRecording::New1(outputFilePath));
}

// public generated RecordingPromise New() [static] :63
AndroidRecordingSession__RecordingPromise* AndroidRecordingSession__RecordingPromise::New6()
{
    AndroidRecordingSession__RecordingPromise* obj1 = (AndroidRecordingSession__RecordingPromise*)uNew(AndroidRecordingSession__RecordingPromise_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/Camera.uno
// -------------------------------------------------------------------------------

// private sealed class Camera.RecordingSessionPromise :158
// {
static void Camera__RecordingSessionPromise_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::RecordingSession_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Action_typeof(), offsetof(Camera__RecordingSessionPromise, _doneCallback), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL), offsetof(Camera__RecordingSessionPromise, _setRecordingSession), 0);
}

::g::Uno::Threading::Future_type* Camera__RecordingSessionPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Camera__RecordingSessionPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.Camera.RecordingSessionPromise", options);
    type->fp_build_ = Camera__RecordingSessionPromise_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public RecordingSessionPromise(Uno.Action doneCallback, Uno.Action<Uno.IDisposable> setRecordingSession) :163
void Camera__RecordingSessionPromise__ctor_7_fn(Camera__RecordingSessionPromise* __this, uDelegate* doneCallback, uDelegate* setRecordingSession)
{
    __this->ctor_7(doneCallback, setRecordingSession);
}

// public RecordingSessionPromise New(Uno.Action doneCallback, Uno.Action<Uno.IDisposable> setRecordingSession) :163
void Camera__RecordingSessionPromise__New5_fn(uDelegate* doneCallback, uDelegate* setRecordingSession, Camera__RecordingSessionPromise** __retval)
{
    *__retval = Camera__RecordingSessionPromise::New5(doneCallback, setRecordingSession);
}

// public void OnReject(string exceptionMessage) :179
void Camera__RecordingSessionPromise__OnReject_fn(Camera__RecordingSessionPromise* __this, uString* exceptionMessage)
{
    __this->OnReject(exceptionMessage);
}

// public void OnResolve(Java.Object session) :169
void Camera__RecordingSessionPromise__OnResolve_fn(Camera__RecordingSessionPromise* __this, ::g::Java::Object* session)
{
    __this->OnResolve(session);
}

// public RecordingSessionPromise(Uno.Action doneCallback, Uno.Action<Uno.IDisposable> setRecordingSession) [instance] :163
void Camera__RecordingSessionPromise::ctor_7(uDelegate* doneCallback, uDelegate* setRecordingSession)
{
    uStackFrame __("Fuse.Controls.Android.Camera.RecordingSessionPromise", ".ctor(Uno.Action,Uno.Action<Uno.IDisposable>)");
    ctor_3();
    _doneCallback = doneCallback;
    _setRecordingSession = setRecordingSession;
}

// public void OnReject(string exceptionMessage) [instance] :179
void Camera__RecordingSessionPromise::OnReject(uString* exceptionMessage)
{
    uStackFrame __("Fuse.Controls.Android.Camera.RecordingSessionPromise", "OnReject(string)");

    if (State() == 0)
        Reject(::g::Uno::Exception::New2(exceptionMessage));
}

// public void OnResolve(Java.Object session) [instance] :169
void Camera__RecordingSessionPromise::OnResolve(::g::Java::Object* session)
{
    uStackFrame __("Fuse.Controls.Android.Camera.RecordingSessionPromise", "OnResolve(Java.Object)");

    if (State() == 0)
    {
        ::g::Fuse::Controls::Android::AndroidRecordingSession* s = ::g::Fuse::Controls::Android::AndroidRecordingSession::New1(session, _doneCallback);
        uPtr(_setRecordingSession)->InvokeVoid((uObject*)s);
        ::g::Uno::Threading::Promise__Resolve_fn(this, s);
    }
}

// public RecordingSessionPromise New(Uno.Action doneCallback, Uno.Action<Uno.IDisposable> setRecordingSession) [static] :163
Camera__RecordingSessionPromise* Camera__RecordingSessionPromise::New5(uDelegate* doneCallback, uDelegate* setRecordingSession)
{
    Camera__RecordingSessionPromise* obj1 = (Camera__RecordingSessionPromise*)uNew(Camera__RecordingSessionPromise_typeof());
    obj1->ctor_7(doneCallback, setRecordingSession);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno
// ------------------------------------------------------------------------------------

// private sealed class NativePhoto.SavePromise :235
// {
static void NativePhoto__SavePromise_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* NativePhoto__SavePromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativePhoto__SavePromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.NativePhoto.SavePromise", options);
    type->fp_build_ = NativePhoto__SavePromise_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public SavePromise(Java.Object byteArray) :237
void NativePhoto__SavePromise__ctor_8_fn(NativePhoto__SavePromise* __this, ::g::Java::Object* byteArray)
{
    __this->ctor_8(byteArray);
}

// public SavePromise New(Java.Object byteArray) :237
void NativePhoto__SavePromise__New6_fn(::g::Java::Object* byteArray, NativePhoto__SavePromise** __retval)
{
    *__retval = NativePhoto__SavePromise::New6(byteArray);
}

// private void OnException(string message) :242
void NativePhoto__SavePromise__OnException_fn(NativePhoto__SavePromise* __this, uString* message)
{
    __this->OnException(message);
}

// private static void Save(Java.Object byteArray, Uno.Action<string> resolve, Uno.Action<string> reject) :248
void NativePhoto__SavePromise__Save_fn(::g::Java::Object* byteArray, uDelegate* resolve, uDelegate* reject)
{
    NativePhoto__SavePromise::Save(byteArray, resolve, reject);
}

// public SavePromise(Java.Object byteArray) [instance] :237
void NativePhoto__SavePromise::ctor_8(::g::Java::Object* byteArray)
{
    ctor_7();
    NativePhoto__SavePromise::Save(byteArray, uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Uno::Threading::Promise__Resolve_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)NativePhoto__SavePromise__OnException_fn, this));
}

// private void OnException(string message) [instance] :242
void NativePhoto__SavePromise::OnException(uString* message)
{
    uStackFrame __("Fuse.Controls.Android.NativePhoto.SavePromise", "OnException(string)");
    Reject(::g::Uno::Exception::New2(message));
}

// public SavePromise New(Java.Object byteArray) [static] :237
NativePhoto__SavePromise* NativePhoto__SavePromise::New6(::g::Java::Object* byteArray)
{
    NativePhoto__SavePromise* obj1 = (NativePhoto__SavePromise*)uNew(NativePhoto__SavePromise_typeof());
    obj1->ctor_8(byteArray);
    return obj1;
}

// private static void Save(Java.Object byteArray, Uno.Action<string> resolve, Uno.Action<string> reject) [static] :248
void NativePhoto__SavePromise::Save(::g::Java::Object* byteArray, uDelegate* resolve, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Save312", "(Ljava/lang/Object;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        ::g::Java::Object* _ubyteArray=byteArray;
        jobject _byteArray = (_ubyteArray==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubyteArray, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_String");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_byteArray,_resolve,_reject);
        
        if (_byteArray!=NULL) { U_JNIVAR->DeleteLocalRef(_byteArray); }
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/NativePhoto.uno
// ------------------------------------------------------------------------------------

// private sealed class NativePhoto.SaveThumbnailPromise :277
// {
static void NativePhoto__SaveThumbnailPromise_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Java::Object_typeof(), offsetof(NativePhoto__SaveThumbnailPromise, _byteArray), 0,
        ::g::Fuse::Controls::ThumbnailSizeHint_typeof(), offsetof(NativePhoto__SaveThumbnailPromise, _thumbnailSizeHint), 0);
}

::g::Uno::Threading::Future_type* NativePhoto__SaveThumbnailPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativePhoto__SaveThumbnailPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.NativePhoto.SaveThumbnailPromise", options);
    type->fp_build_ = NativePhoto__SaveThumbnailPromise_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public SaveThumbnailPromise(Java.Object byteArray, Fuse.Controls.ThumbnailSizeHint thumbnailSizeHint) :282
void NativePhoto__SaveThumbnailPromise__ctor_8_fn(NativePhoto__SaveThumbnailPromise* __this, ::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint)
{
    __this->ctor_8(byteArray, thumbnailSizeHint);
}

// private static int GetAndroidOrientation(Java.Object bytes) :384
void NativePhoto__SaveThumbnailPromise__GetAndroidOrientation_fn(::g::Java::Object* bytes, int32_t* __retval)
{
    *__retval = NativePhoto__SaveThumbnailPromise::GetAndroidOrientation(bytes);
}

// public SaveThumbnailPromise New(Java.Object byteArray, Fuse.Controls.ThumbnailSizeHint thumbnailSizeHint) :282
void NativePhoto__SaveThumbnailPromise__New6_fn(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint, NativePhoto__SaveThumbnailPromise** __retval)
{
    *__retval = NativePhoto__SaveThumbnailPromise::New6(byteArray, thumbnailSizeHint);
}

// private void OnReject(string msg) :382
void NativePhoto__SaveThumbnailPromise__OnReject_fn(NativePhoto__SaveThumbnailPromise* __this, uString* msg)
{
    __this->OnReject(msg);
}

// private static void RunAsync(Uno.Action callback) :407
void NativePhoto__SaveThumbnailPromise__RunAsync_fn(uDelegate* callback)
{
    NativePhoto__SaveThumbnailPromise::RunAsync(callback);
}

// private void SaveThumbnail() :289
void NativePhoto__SaveThumbnailPromise__SaveThumbnail_fn(NativePhoto__SaveThumbnailPromise* __this)
{
    __this->SaveThumbnail();
}

// private static void SaveThumbnail(Java.Object byteArray, int exifOrientation, Uno.Action<string> resolve, Uno.Action<string> reject, bool useHint, float widthHint, float heightHint) :314
void NativePhoto__SaveThumbnailPromise__SaveThumbnail1_fn(::g::Java::Object* byteArray, int32_t* exifOrientation, uDelegate* resolve, uDelegate* reject, bool* useHint, float* widthHint, float* heightHint)
{
    NativePhoto__SaveThumbnailPromise::SaveThumbnail1(byteArray, *exifOrientation, resolve, reject, *useHint, *widthHint, *heightHint);
}

// public SaveThumbnailPromise(Java.Object byteArray, Fuse.Controls.ThumbnailSizeHint thumbnailSizeHint) [instance] :282
void NativePhoto__SaveThumbnailPromise::ctor_8(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint)
{
    ctor_7();
    _byteArray = byteArray;
    _thumbnailSizeHint = thumbnailSizeHint;
    NativePhoto__SaveThumbnailPromise::RunAsync(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)NativePhoto__SaveThumbnailPromise__SaveThumbnail_fn, this));
}

// private void OnReject(string msg) [instance] :382
void NativePhoto__SaveThumbnailPromise::OnReject(uString* msg)
{
    uStackFrame __("Fuse.Controls.Android.NativePhoto.SaveThumbnailPromise", "OnReject(string)");
    Reject(::g::Uno::Exception::New2(msg));
}

// private void SaveThumbnail() [instance] :289
void NativePhoto__SaveThumbnailPromise::SaveThumbnail()
{
    uStackFrame __("Fuse.Controls.Android.NativePhoto.SaveThumbnailPromise", "SaveThumbnail()");
    int32_t androidOrientation = NativePhoto__SaveThumbnailPromise::GetAndroidOrientation(_byteArray);
    bool useHint = false;
    float widthHint = 0.0f;
    float heightHint = 0.0f;

    if (_thumbnailSizeHint != NULL)
    {
        float pixelsPerPoint = uPtr(uPtr(::g::Fuse::AppBase::Current2())->RootViewport())->PixelsPerPoint();
        widthHint = ::g::Uno::Math::Max1(uPtr(_thumbnailSizeHint)->Width, 8.0f) * pixelsPerPoint;
        heightHint = ::g::Uno::Math::Max1(uPtr(_thumbnailSizeHint)->Height, 8.0f) * pixelsPerPoint;
        useHint = true;
    }

    NativePhoto__SaveThumbnailPromise::SaveThumbnail1(_byteArray, androidOrientation, uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Uno::Threading::Promise__Resolve_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)NativePhoto__SaveThumbnailPromise__OnReject_fn, this), useHint, widthHint, heightHint);
    _byteArray = NULL;
}

// private static int GetAndroidOrientation(Java.Object bytes) [static] :384
int32_t NativePhoto__SaveThumbnailPromise::GetAndroidOrientation(::g::Java::Object* bytes)
{
    int32_t o = ::g::Fuse::Resources::Exif::ExifData__FromAndroidInputStream(::g::Fuse::Controls::Android::NativePhoto::GetInputStream(bytes)).Orientation;

    if (((o & 4) == 4) && ((o & 2) == 2))
        return 2;

    if (((o & 4) == 4) && ((o & 3) == 3))
        return 5;

    if (((o & 4) == 4) && ((o & 1) == 1))
        return 7;

    if ((o & 2) == 2)
        return 3;

    if ((o & 4) == 4)
        return 4;

    if ((o & 1) == 1)
        return 6;

    if ((o & 3) == 3)
        return 8;

    if ((o & 0) == 0)
        return 1;

    return 0;
}

// public SaveThumbnailPromise New(Java.Object byteArray, Fuse.Controls.ThumbnailSizeHint thumbnailSizeHint) [static] :282
NativePhoto__SaveThumbnailPromise* NativePhoto__SaveThumbnailPromise::New6(::g::Java::Object* byteArray, ::g::Fuse::Controls::ThumbnailSizeHint* thumbnailSizeHint)
{
    NativePhoto__SaveThumbnailPromise* obj1 = (NativePhoto__SaveThumbnailPromise*)uNew(NativePhoto__SaveThumbnailPromise_typeof());
    obj1->ctor_8(byteArray, thumbnailSizeHint);
    return obj1;
}

// private static void RunAsync(Uno.Action callback) [static] :407
void NativePhoto__SaveThumbnailPromise::RunAsync(uDelegate* callback)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RunAsync313", "(Lcom/foreign/Uno/Action;)V");
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Action");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_callback);
        
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SaveThumbnail(Java.Object byteArray, int exifOrientation, Uno.Action<string> resolve, Uno.Action<string> reject, bool useHint, float widthHint, float heightHint) [static] :314
void NativePhoto__SaveThumbnailPromise::SaveThumbnail1(::g::Java::Object* byteArray, int32_t exifOrientation, uDelegate* resolve, uDelegate* reject, bool useHint, float widthHint, float heightHint)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SaveThumbnail1314", "(Ljava/lang/Object;ILcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;ZFF)V");
        ::g::Java::Object* _ubyteArray=byteArray;
        jobject _byteArray = (_ubyteArray==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubyteArray, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uexifOrientation=exifOrientation;
        jint _exifOrientation = (jint)_uexifOrientation;
        uDelegate* _uresolve=resolve;
        jobject _resolve = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresolve, "com.foreign.Uno.Action_String");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        bool _uuseHint=useHint;
        jboolean _useHint = (jboolean)_uuseHint;
        float _uwidthHint=widthHint;
        jfloat _widthHint = (jfloat)_uwidthHint;
        float _uheightHint=heightHint;
        jfloat _heightHint = (jfloat)_uheightHint;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_byteArray,_exifOrientation,_resolve,_reject,_useHint,_widthHint,_heightHint);
        
        if (_byteArray!=NULL) { U_JNIVAR->DeleteLocalRef(_byteArray); }
        
        if (_resolve!=NULL) { U_JNIVAR->DeleteLocalRef(_resolve); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.CameraView/0.9.1/Android/CameraView.uno
// -----------------------------------------------------------------------------------

// private sealed class CameraView.SetCameraFacingClosure :196
// {
static void CameraView__SetCameraFacingClosure_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Failed to set CameraFacing: ");
    ::STRINGS[12] = uString::Const("Failed to set CameraFacing");
    type->SetBase(::g::Fuse::Controls::CameraPromise_typeof()->MakeType(::g::Fuse::Controls::CameraFacing_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::CameraFacing_typeof(), offsetof(CameraView__SetCameraFacingClosure, _cameraFacing), 0);
}

::g::Uno::Threading::Future_type* CameraView__SetCameraFacingClosure_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CameraPromise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CameraView__SetCameraFacingClosure);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Android.CameraView.SetCameraFacingClosure", options);
    type->fp_build_ = CameraView__SetCameraFacingClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public SetCameraFacingClosure(Fuse.Controls.CameraFacing cameraFacing) :200
void CameraView__SetCameraFacingClosure__ctor_8_fn(CameraView__SetCameraFacingClosure* __this, int32_t* cameraFacing)
{
    __this->ctor_8(*cameraFacing);
}

// public SetCameraFacingClosure New(Fuse.Controls.CameraFacing cameraFacing) :200
void CameraView__SetCameraFacingClosure__New6_fn(int32_t* cameraFacing, CameraView__SetCameraFacingClosure** __retval)
{
    *__retval = CameraView__SetCameraFacingClosure::New6(*cameraFacing);
}

// public void OnReject(Uno.Exception e) :213
void CameraView__SetCameraFacingClosure__OnReject_fn(CameraView__SetCameraFacingClosure* __this, ::g::Uno::Exception* e)
{
    __this->OnReject(e);
}

// public void OnResolve(Fuse.Controls.Android.Camera camera) :205
void CameraView__SetCameraFacingClosure__OnResolve_fn(CameraView__SetCameraFacingClosure* __this, ::g::Fuse::Controls::Android::Camera* camera)
{
    __this->OnResolve(camera);
}

// public SetCameraFacingClosure(Fuse.Controls.CameraFacing cameraFacing) [instance] :200
void CameraView__SetCameraFacingClosure::ctor_8(int32_t cameraFacing)
{
    ctor_7();
    _cameraFacing = cameraFacing;
}

// public void OnReject(Uno.Exception e) [instance] :213
void CameraView__SetCameraFacingClosure::OnReject(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.SetCameraFacingClosure", "OnReject(Uno.Exception)");
    Reject(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[11/*"Failed to s...*/], uPtr(e)->Message())));
}

// public void OnResolve(Fuse.Controls.Android.Camera camera) [instance] :205
void CameraView__SetCameraFacingClosure::OnResolve(::g::Fuse::Controls::Android::Camera* camera)
{
    uStackFrame __("Fuse.Controls.Android.CameraView.SetCameraFacingClosure", "OnResolve(Fuse.Controls.Android.Camera)");

    if (uPtr(camera)->Facing() == _cameraFacing)
        ::g::Uno::Threading::Promise__Resolve_fn(this, uCRef<int32_t>(_cameraFacing));
    else
        Reject(::g::Uno::Exception::New2(::STRINGS[12/*"Failed to s...*/]));
}

// public SetCameraFacingClosure New(Fuse.Controls.CameraFacing cameraFacing) [static] :200
CameraView__SetCameraFacingClosure* CameraView__SetCameraFacingClosure::New6(int32_t cameraFacing)
{
    CameraView__SetCameraFacingClosure* obj1 = (CameraView__SetCameraFacingClosure*)uNew(CameraView__SetCameraFacingClosure_typeof());
    obj1->ctor_8(cameraFacing);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::Android
