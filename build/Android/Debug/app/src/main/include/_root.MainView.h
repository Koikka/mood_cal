// This file was generated based on '.uno/ux15/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.Float4.h>
namespace g{namespace Firebase{namespace Database{namespace JS{struct DatabaseModule;}}}}
namespace g{namespace Firebase{namespace Notifications{struct NotificationModule;}}}
namespace g{namespace Fuse{namespace Camera{struct Camera;}}}
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace ImageTools{struct ImageTools;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{namespace VideoTools{struct VideoTools;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace FuseJS{struct Base64;}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace FuseJS{struct Environment;}}
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace FuseJS{struct Globals;}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace FuseJS{struct UserEvents;}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{struct Device;}
namespace g{struct Hamburger;}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::Property1*> home_page_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> web_view_content_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> extra_content_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> mood_calendar_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> sleep_calendar_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> eating_calendar_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> menu_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> hamburger_IsOpen_inst;
    uStrong< ::g::Uno::UX::Property1*> web_view_content_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> menu_is_open_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> home_page_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> extra_content_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_File_inst;
    uStrong< ::g::Uno::UX::Property1*> wv_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_File_inst;
    uStrong< ::g::Uno::UX::Property1*> mood_container_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> sleep_container_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> eat_container_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp18_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> mood_calendar_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp20_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp21_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp22_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp23_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp24_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp25_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp26_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp27_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp28_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp29_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp30_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp31_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp32_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp33_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp34_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp35_ActiveIndex_inst;
    uStrong< ::g::Uno::UX::Property1*> temp36_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp37_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp38_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> sleep_calendar_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp39_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> eating_calendar_Visibility_inst;
    static ::g::Uno::Float4 BackgroundColor_;
    static ::g::Uno::Float4& BackgroundColor() { return MainView_typeof()->Init(), BackgroundColor_; }
    static ::g::Uno::Float4 ForegroundColor_;
    static ::g::Uno::Float4& ForegroundColor() { return MainView_typeof()->Init(), ForegroundColor_; }
    static ::g::Uno::Float4 SpecialColor_;
    static ::g::Uno::Float4& SpecialColor() { return MainView_typeof()->Init(), SpecialColor_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::UserEvent*> ButtonEvent;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::UserEvent*> LinkButtonEvent;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::UserEvent*> MoodEvent;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::UserEvent*> MoodEvent_2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::UserEvent*> ToggleEvent;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> menu_is_open;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Controls::Panel*> popup;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Hamburger*> hamburger;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::Fuse::Controls::Panel*> box;
    uStrong< ::g::Fuse::Controls::Panel*> sidePage;
    uStrong< ::g::Fuse::Controls::StackPanel*> menu;
    static ::g::Uno::UX::Size MenuItemHeight_;
    static ::g::Uno::UX::Size& MenuItemHeight() { return MainView_typeof()->Init(), MenuItemHeight_; }
    uStrong< ::g::Fuse::Controls::StackPanel*> normalMenuItems;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::Fuse::Controls::DockPanel*> home_page;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb11;
    uStrong< ::g::Fuse::Controls::DockPanel*> web_view_content;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb12;
    uStrong< ::g::Fuse::Controls::WebView*> wv;
    uStrong< ::g::Fuse::Controls::DockPanel*> extra_content;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb13;
    uStrong< ::g::Fuse::Controls::Panel*> mood_container;
    uStrong< ::g::Fuse::Controls::Panel*> sleep_container;
    uStrong< ::g::Fuse::Controls::Panel*> eat_container;
    uStrong< ::g::Fuse::Controls::DockPanel*> mood_calendar;
    uStrong< ::g::Fuse::Controls::Rectangle*> h_9;
    uStrong< ::g::Fuse::Controls::Rectangle*> h_8;
    uStrong< ::g::Fuse::Controls::Rectangle*> h_7;
    uStrong< ::g::Fuse::Controls::Rectangle*> n_6;
    uStrong< ::g::Fuse::Controls::Rectangle*> n_5;
    uStrong< ::g::Fuse::Controls::Rectangle*> n_4;
    uStrong< ::g::Fuse::Controls::Rectangle*> s_3;
    uStrong< ::g::Fuse::Controls::Rectangle*> s_2;
    uStrong< ::g::Fuse::Controls::Rectangle*> s_1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Fuse::Controls::DockPanel*> sleep_calendar;
    uStrong< ::g::Fuse::Controls::Rectangle*> sleep_9;
    uStrong< ::g::Fuse::Controls::Rectangle*> sleep_6;
    uStrong< ::g::Fuse::Controls::Rectangle*> sleep_3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;
    uStrong< ::g::Fuse::Controls::DockPanel*> eating_calendar;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule*> FuseReactiveFuseJSDiagnosticsImplModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::Http*> FuseReactiveFuseJSHttp;
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> FuseReactiveFuseJSTimerModule;
    uStrong< ::g::Fuse::Drawing::BrushConverter*> FuseDrawingBrushConverter;
    uStrong< ::g::Fuse::Triggers::BusyTaskModule*> FuseTriggersBusyTaskModule;
    uStrong< ::g::Fuse::Testing::UnoTestingHelper*> FuseTestingUnoTestingHelper;
    uStrong< ::g::Fuse::FileSystem::FileSystemModule*> FuseFileSystemFileSystemModule;
    uStrong< ::g::Fuse::Storage::StorageModule*> FuseStorageStorageModule;
    uStrong< ::g::Fuse::WebSocket::WebSocketClientModule*> FuseWebSocketWebSocketClientModule;
    uStrong< ::g::Fuse::ImageTools::ImageTools*> FuseImageToolsImageTools;
    uStrong< ::g::Fuse::VideoTools::VideoTools*> FuseVideoToolsVideoTools;
    uStrong< ::g::Fuse::Camera::Camera*> FuseCameraCamera;
    uStrong< ::g::Polyfills::Window::WindowModule*> PolyfillsWindowWindowModule;
    uStrong< ::g::FuseJS::Globals*> FuseJSGlobals;
    uStrong< ::g::FuseJS::Lifecycle*> FuseJSLifecycle;
    uStrong< ::g::FuseJS::Environment*> FuseJSEnvironment;
    uStrong< ::g::FuseJS::Base64*> FuseJSBase64;
    uStrong< ::g::FuseJS::Bundle*> FuseJSBundle;
    uStrong< ::g::FuseJS::FileReaderImpl*> FuseJSFileReaderImpl;
    uStrong< ::g::FuseJS::UserEvents*> FuseJSUserEvents;
    uStrong< ::g::Firebase::Database::JS::DatabaseModule*> FirebaseDatabaseJSDatabaseModule;
    uStrong< ::g::Firebase::Notifications::NotificationModule*> FirebaseNotificationsNotificationModule;
    uStrong< ::g::Device*> Device;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return MainView_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return MainView_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return MainView_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return MainView_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return MainView_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return MainView_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return MainView_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return MainView_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return MainView_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return MainView_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return MainView_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return MainView_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return MainView_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return MainView_typeof()->Init(), __selector37_; }
    static ::g::Uno::UX::Selector __selector38_;
    static ::g::Uno::UX::Selector& __selector38() { return MainView_typeof()->Init(), __selector38_; }
    static ::g::Uno::UX::Selector __selector39_;
    static ::g::Uno::UX::Selector& __selector39() { return MainView_typeof()->Init(), __selector39_; }
    static ::g::Uno::UX::Selector __selector40_;
    static ::g::Uno::UX::Selector& __selector40() { return MainView_typeof()->Init(), __selector40_; }
    static ::g::Uno::UX::Selector __selector41_;
    static ::g::Uno::UX::Selector& __selector41() { return MainView_typeof()->Init(), __selector41_; }
    static ::g::Uno::UX::Selector __selector42_;
    static ::g::Uno::UX::Selector& __selector42() { return MainView_typeof()->Init(), __selector42_; }
    static ::g::Uno::UX::Selector __selector43_;
    static ::g::Uno::UX::Selector& __selector43() { return MainView_typeof()->Init(), __selector43_; }
    static ::g::Uno::UX::Selector __selector44_;
    static ::g::Uno::UX::Selector& __selector44() { return MainView_typeof()->Init(), __selector44_; }
    static ::g::Uno::UX::Selector __selector45_;
    static ::g::Uno::UX::Selector& __selector45() { return MainView_typeof()->Init(), __selector45_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
