// This file was generated based on '.uno/ux15/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <_root.Hamburger.h>
#include <_root.Kalenteri_bundle.h>
#include <_root.Kalenteri_FuseC-258a8659.h>
#include <_root.Kalenteri_FuseC-4ab4ff90.h>
#include <_root.Kalenteri_FuseC-5d71f058.h>
#include <_root.Kalenteri_FuseC-acd4a00a.h>
#include <_root.Kalenteri_FuseC-adde5f93.h>
#include <_root.Kalenteri_FuseC-b8e56cc3.h>
#include <_root.Kalenteri_FuseC-db88698e.h>
#include <_root.Kalenteri_FuseE-48f973b8.h>
#include <_root.Kalenteri_FuseE-e1bd663f.h>
#include <_root.Kalenteri_FuseR-9349bec3.h>
#include <_root.Kalenteri_FuseT-90887ccc.h>
#include <_root.Kalenteri_FuseV-67d44a86.h>
#include <_root.Kalenteri_Hambu-401ca403.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MenuButton.h>
#include <_root.MySwitch.h>
#include <Firebase.Database.JS.-e39699de.h>
#include <Firebase.Notification-8c9fb406.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.Controls.BottomF-14cf09.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Navigat-340a5907.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Navigat-d5b6859a.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.Perspec-cd6b1b54.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Viewport.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.Navig-5566e4c1.h>
#include <Fuse.Navigation.Route-7a58dae5.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-38f4649e.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-e0327300.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.OnUserE-d681e270.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileVisible.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.VideoTools.VideoTools.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :411
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Reactive::DeviceCaps_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 51, uString::Const("router"), uString::Const("ButtonEvent"), uString::Const("temp_eb0"), uString::Const("LinkButtonEvent"), uString::Const("temp_eb1"), uString::Const("MoodEvent"), uString::Const("temp_eb2"), uString::Const("MoodEvent_2"), uString::Const("temp_eb3"), uString::Const("ToggleEvent"), uString::Const("temp_eb4"), uString::Const("menu_is_open"), uString::Const("temp_eb5"), uString::Const("temp_eb6"), uString::Const("popup"), uString::Const("temp_eb7"), uString::Const("hamburger"), uString::Const("temp_eb8"), uString::Const("box"), uString::Const("sidePage"), uString::Const("menu"), uString::Const("normalMenuItems"), uString::Const("temp_eb9"), uString::Const("temp_eb10"), uString::Const("home_page"), uString::Const("temp_eb11"), uString::Const("web_view_content"), uString::Const("temp_eb12"), uString::Const("wv"), uString::Const("extra_content"), uString::Const("temp_eb13"), uString::Const("mood_container"), uString::Const("sleep_container"), uString::Const("eat_container"), uString::Const("mood_calendar"), uString::Const("h_9"), uString::Const("h_8"), uString::Const("h_7"), uString::Const("n_6"), uString::Const("n_5"), uString::Const("n_4"), uString::Const("s_3"), uString::Const("s_2"), uString::Const("s_1"), uString::Const("temp_eb14"), uString::Const("sleep_calendar"), uString::Const("sleep_9"), uString::Const("sleep_6"), uString::Const("sleep_3"), uString::Const("temp_eb21"), uString::Const("eating_calendar"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsOpen"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("File"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Url"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Background"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("IsEnabled"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ActiveIndex"));
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("router"));
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ButtonEvent"));
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("LinkButtonEvent"));
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("MoodEvent"));
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("MoodEvent_2"));
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ToggleEvent"));
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("menu_is_open"));
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("popup"));
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("hamburger"));
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("box"));
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidePage"));
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("menu"));
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("normalMenuItems"));
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("home_page"));
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("web_view_content"));
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("wv"));
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("extra_content"));
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("mood_container"));
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sleep_container"));
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("eat_container"));
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("mood_calendar"));
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("h_9"));
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("h_8"));
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("h_7"));
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("n_6"));
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("n_5"));
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("n_4"));
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("s_3"));
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("s_2"));
    MainView::__selector40_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("s_1"));
    MainView::__selector41_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sleep_calendar"));
    MainView::__selector42_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sleep_9"));
    MainView::__selector43_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sleep_6"));
    MainView::__selector44_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sleep_3"));
    MainView::__selector45_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("eating_calendar"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), uString::Const("Device"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), uString::Const("Height"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BackgroundColor_), uString::Const("BackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::ForegroundColor_), uString::Const("ForegroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::SpecialColor_), uString::Const("SpecialColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::UX::Size_typeof(), MainView::MenuItemHeight_), uString::Const("MenuItemHeight"));
    MainView::BackgroundColor_ = ::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f);
    MainView::ForegroundColor_ = ::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f);
    MainView::SpecialColor_ = ::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f);
    MainView::MenuItemHeight_ = ::g::Uno::UX::Size__New1(40.0f, 1);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BackgroundColor_), uString::Const("BackgroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::ForegroundColor_), uString::Const("ForegroundColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::SpecialColor_), uString::Const("SpecialColor"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::UX::Size_typeof(), MainView::MenuItemHeight_), uString::Const("MenuItemHeight"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Kalenteri_bundle_typeof(),
        ::g::Fuse::Elements::TransformOrigins_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(7,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, home_page_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, web_view_content_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, extra_content_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, mood_calendar_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, sleep_calendar_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, eating_calendar_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, menu_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, hamburger_IsOpen_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, web_view_content_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, menu_is_open_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, home_page_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, extra_content_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(MainView, temp2_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp3_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(MainView, temp4_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, wv_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(MainView, temp5_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(MainView, mood_container_Background_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, sleep_container_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, eat_container_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp17_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp18_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp19_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, mood_calendar_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp20_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp21_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp22_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp23_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp24_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp25_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp26_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp27_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp28_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp29_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp30_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp31_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp32_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp33_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp34_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(MainView, temp35_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp36_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp37_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp38_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, sleep_calendar_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp39_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, eating_calendar_Visibility_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, ButtonEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, LinkButtonEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, MoodEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb2), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, MoodEvent_2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb3), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, ToggleEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb4), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(MainView, menu_is_open), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb6), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, popup), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb7), 0,
        ::g::Hamburger_typeof(), offsetof(MainView, hamburger), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb8), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, box), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, sidePage), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(MainView, menu), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(MainView, normalMenuItems), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb9), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb10), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, home_page), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb11), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, web_view_content), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb12), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(MainView, wv), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, extra_content), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb13), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, mood_container), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, sleep_container), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, eat_container), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, mood_calendar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_9), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_8), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_7), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_6), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_5), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_4), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_3), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_2), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb14), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, sleep_calendar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, sleep_9), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, sleep_6), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, sleep_3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb21), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, eating_calendar), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule_typeof(), offsetof(MainView, FuseReactiveFuseJSDiagnosticsImplModule), 0,
        ::g::Fuse::Reactive::FuseJS::Http_typeof(), offsetof(MainView, FuseReactiveFuseJSHttp), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), offsetof(MainView, FuseReactiveFuseJSTimerModule), 0,
        ::g::Fuse::Drawing::BrushConverter_typeof(), offsetof(MainView, FuseDrawingBrushConverter), 0,
        ::g::Fuse::Triggers::BusyTaskModule_typeof(), offsetof(MainView, FuseTriggersBusyTaskModule), 0,
        ::g::Fuse::Testing::UnoTestingHelper_typeof(), offsetof(MainView, FuseTestingUnoTestingHelper), 0,
        ::g::Fuse::FileSystem::FileSystemModule_typeof(), offsetof(MainView, FuseFileSystemFileSystemModule), 0,
        ::g::Fuse::Storage::StorageModule_typeof(), offsetof(MainView, FuseStorageStorageModule), 0,
        ::g::Fuse::WebSocket::WebSocketClientModule_typeof(), offsetof(MainView, FuseWebSocketWebSocketClientModule), 0,
        ::g::Fuse::ImageTools::ImageTools_typeof(), offsetof(MainView, FuseImageToolsImageTools), 0,
        ::g::Fuse::VideoTools::VideoTools_typeof(), offsetof(MainView, FuseVideoToolsVideoTools), 0,
        ::g::Fuse::Camera::Camera_typeof(), offsetof(MainView, FuseCameraCamera), 0,
        ::g::Polyfills::Window::WindowModule_typeof(), offsetof(MainView, PolyfillsWindowWindowModule), 0,
        ::g::FuseJS::Globals_typeof(), offsetof(MainView, FuseJSGlobals), 0,
        ::g::FuseJS::Lifecycle_typeof(), offsetof(MainView, FuseJSLifecycle), 0,
        ::g::FuseJS::Environment_typeof(), offsetof(MainView, FuseJSEnvironment), 0,
        ::g::FuseJS::Base64_typeof(), offsetof(MainView, FuseJSBase64), 0,
        ::g::FuseJS::Bundle_typeof(), offsetof(MainView, FuseJSBundle), 0,
        ::g::FuseJS::FileReaderImpl_typeof(), offsetof(MainView, FuseJSFileReaderImpl), 0,
        ::g::FuseJS::UserEvents_typeof(), offsetof(MainView, FuseJSUserEvents), 0,
        ::g::Firebase::Database::JS::DatabaseModule_typeof(), offsetof(MainView, FirebaseDatabaseJSDatabaseModule), 0,
        ::g::Firebase::Notifications::NotificationModule_typeof(), offsetof(MainView, FirebaseNotificationsNotificationModule), 0,
        ::g::Device_typeof(), offsetof(MainView, Device), 0,
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::BackgroundColor_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::ForegroundColor_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::SpecialColor_, uFieldFlagsStatic,
        ::g::Uno::UX::Size_typeof(), (uintptr_t)&MainView::MenuItemHeight_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector45_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 192;
    options.InterfaceCount = 1;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :535
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :539
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :535
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

::g::Uno::Float4 MainView::BackgroundColor_;
::g::Uno::Float4 MainView::ForegroundColor_;
::g::Uno::Float4 MainView::SpecialColor_;
::g::Uno::UX::Size MainView::MenuItemHeight_;
uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector25_;
::g::Uno::UX::Selector MainView::__selector26_;
::g::Uno::UX::Selector MainView::__selector27_;
::g::Uno::UX::Selector MainView::__selector28_;
::g::Uno::UX::Selector MainView::__selector29_;
::g::Uno::UX::Selector MainView::__selector30_;
::g::Uno::UX::Selector MainView::__selector31_;
::g::Uno::UX::Selector MainView::__selector32_;
::g::Uno::UX::Selector MainView::__selector33_;
::g::Uno::UX::Selector MainView::__selector34_;
::g::Uno::UX::Selector MainView::__selector35_;
::g::Uno::UX::Selector MainView::__selector36_;
::g::Uno::UX::Selector MainView::__selector37_;
::g::Uno::UX::Selector MainView::__selector38_;
::g::Uno::UX::Selector MainView::__selector39_;
::g::Uno::UX::Selector MainView::__selector40_;
::g::Uno::UX::Selector MainView::__selector41_;
::g::Uno::UX::Selector MainView::__selector42_;
::g::Uno::UX::Selector MainView::__selector43_;
::g::Uno::UX::Selector MainView::__selector44_;
::g::Uno::UX::Selector MainView::__selector45_;

// public MainView() [instance] :535
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :539
void MainView::InitializeUX()
{
    FuseReactiveFuseJSDiagnosticsImplModule = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    FuseReactiveFuseJSHttp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    FuseReactiveFuseJSTimerModule = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    FuseDrawingBrushConverter = ::g::Fuse::Drawing::BrushConverter::New1();
    FuseTriggersBusyTaskModule = ::g::Fuse::Triggers::BusyTaskModule::New2();
    FuseTestingUnoTestingHelper = ::g::Fuse::Testing::UnoTestingHelper::New2();
    FuseFileSystemFileSystemModule = ::g::Fuse::FileSystem::FileSystemModule::New2();
    FuseStorageStorageModule = ::g::Fuse::Storage::StorageModule::New2();
    FuseWebSocketWebSocketClientModule = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    FuseImageToolsImageTools = ::g::Fuse::ImageTools::ImageTools::New2();
    FuseVideoToolsVideoTools = ::g::Fuse::VideoTools::VideoTools::New2();
    FuseCameraCamera = ::g::Fuse::Camera::Camera::New2();
    PolyfillsWindowWindowModule = ::g::Polyfills::Window::WindowModule::New3();
    FuseJSGlobals = ::g::FuseJS::Globals::New2();
    FuseJSLifecycle = ::g::FuseJS::Lifecycle::New3();
    FuseJSEnvironment = ::g::FuseJS::Environment::New2();
    FuseJSBase64 = ::g::FuseJS::Base64::New2();
    FuseJSBundle = ::g::FuseJS::Bundle::New2();
    FuseJSFileReaderImpl = ::g::FuseJS::FileReaderImpl::New2();
    FuseJSUserEvents = ::g::FuseJS::UserEvents::New2();
    FirebaseDatabaseJSDatabaseModule = ::g::Firebase::Database::JS::DatabaseModule::New3();
    FirebaseNotificationsNotificationModule = ::g::Firebase::Notifications::NotificationModule::New3();
    Device = ::g::Device::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(uString::Const("execute_button_select"));
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(uString::Const("set_page_according"));
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(uString::Const("highlight_mood"));
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("highlight_mood_2"));
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(uString::Const("toggle_switch"));
    home_page = ::g::Fuse::Controls::DockPanel::New4();
    home_page_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(home_page, MainView::__selector0_);
    web_view_content = ::g::Fuse::Controls::DockPanel::New4();
    web_view_content_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(web_view_content, MainView::__selector0_);
    extra_content = ::g::Fuse::Controls::DockPanel::New4();
    extra_content_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(extra_content, MainView::__selector0_);
    mood_calendar = ::g::Fuse::Controls::DockPanel::New4();
    mood_calendar_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(mood_calendar, MainView::__selector0_);
    sleep_calendar = ::g::Fuse::Controls::DockPanel::New4();
    sleep_calendar_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(sleep_calendar, MainView::__selector0_);
    eating_calendar = ::g::Fuse::Controls::DockPanel::New4();
    eating_calendar_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(eating_calendar, MainView::__selector0_);
    menu = ::g::Fuse::Controls::StackPanel::New4();
    menu_Opacity_inst = ::g::Kalenteri_FuseElementsElement_Opacity_Property::New1(menu, MainView::__selector0_);
    hamburger = ::g::Hamburger::New4();
    hamburger_IsOpen_inst = ::g::Kalenteri_Hamburger_IsOpen_Property::New1(hamburger, MainView::__selector1_);
    web_view_content_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(web_view_content, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(uString::Const("handle_empty_screen"));
    ::g::Fuse::Triggers::WhileFalse* temp = ::g::Fuse::Triggers::WhileFalse::New2();
    temp_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(uString::Const("fade_me_in"));
    ::g::Fuse::Reactive::Data* temp47 = ::g::Fuse::Reactive::Data::New1(uString::Const("handle_empty_screen"));
    ::g::Uno::Float4 temp48 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    ::g::Uno::Float4 temp49 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    menu_is_open = ::g::Fuse::Triggers::WhileTrue::New2();
    menu_is_open_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(menu_is_open, MainView::__selector3_);
    home_page_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(home_page, MainView::__selector2_);
    extra_content_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(extra_content, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(uString::Const("confirmed_save"));
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp1, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(uString::Const("save_confirm"));
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(uString::Const("toggle_cal_visibility"));
    ::g::Fuse::Reactive::Data* temp53 = ::g::Fuse::Reactive::Data::New1(uString::Const("handle_cal_visibility"));
    ::g::Fuse::Reactive::Data* temp54 = ::g::Fuse::Reactive::Data::New1(uString::Const("handle_cal_visibility"));
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    temp2_File_inst = ::g::Kalenteri_FuseControlsImage_File_Property::New1(temp2, MainView::__selector4_);
    ::g::Fuse::Reactive::Data* temp55 = ::g::Fuse::Reactive::Data::New1(uString::Const("logo_img_white"));
    ::g::Fuse::Controls::Image* temp3 = ::g::Fuse::Controls::Image::New3();
    temp3_Url_inst = ::g::Kalenteri_FuseControlsImage_Url_Property::New1(temp3, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp56 = ::g::Fuse::Reactive::Data::New1(uString::Const("emoji_status"));
    ::g::Fuse::Reactive::Data* temp57 = ::g::Fuse::Reactive::Data::New1(uString::Const("get_mood_emoji"));
    ::g::Fuse::Reactive::Data* temp58 = ::g::Fuse::Reactive::Data::New1(uString::Const("home_page_vis"));
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    temp4_File_inst = ::g::Kalenteri_FuseControlsImage_File_Property::New1(temp4, MainView::__selector4_);
    ::g::Fuse::Reactive::Data* temp59 = ::g::Fuse::Reactive::Data::New1(uString::Const("bg_image"));
    ::g::Fuse::Reactive::Data* temp60 = ::g::Fuse::Reactive::Data::New1(uString::Const("resetUrl"));
    wv = ::g::Fuse::Controls::WebView::New4();
    wv_Url_inst = ::g::Kalenteri_FuseControlsWebView_Url_Property::New1(wv, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp61 = ::g::Fuse::Reactive::Data::New1(uString::Const("chart_url"));
    ::g::Fuse::Reactive::Data* temp62 = ::g::Fuse::Reactive::Data::New1(uString::Const("web_view_vis"));
    ::g::Fuse::Reactive::Data* temp63 = ::g::Fuse::Reactive::Data::New1(uString::Const("extra_content_visible"));
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    temp5_File_inst = ::g::Kalenteri_FuseControlsImage_File_Property::New1(temp5, MainView::__selector4_);
    ::g::Fuse::Reactive::Data* temp64 = ::g::Fuse::Reactive::Data::New1(uString::Const("bg_image"));
    mood_container = ::g::Fuse::Controls::Panel::New3();
    mood_container_Background_inst = ::g::Kalenteri_FuseControlsControl_Background_Property::New1(mood_container, MainView::__selector6_);
    ::g::Fuse::Reactive::Data* temp65 = ::g::Fuse::Reactive::Data::New1(uString::Const("mood_container_color"));
    sleep_container = ::g::Fuse::Controls::Panel::New3();
    sleep_container_Color_inst = ::g::Kalenteri_FuseControlsPanel_Color_Property::New1(sleep_container, MainView::__selector7_);
    ::g::Fuse::Reactive::Data* temp66 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_container_color"));
    eat_container = ::g::Fuse::Controls::Panel::New3();
    eat_container_Color_inst = ::g::Kalenteri_FuseControlsPanel_Color_Property::New1(eat_container, MainView::__selector7_);
    ::g::Fuse::Reactive::Data* temp67 = ::g::Fuse::Reactive::Data::New1(uString::Const("eat_container_color"));
    ::g::Fuse::Triggers::WhileTrue* temp6 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp6_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp6, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp68 = ::g::Fuse::Reactive::Data::New1(uString::Const("fade_me_in"));
    ::g::Fuse::Controls::TextView* temp7 = ::g::Fuse::Controls::TextView::New3();
    temp7_Value_inst = ::g::Kalenteri_FuseControlsTextInputControl_Value_Property::New1(temp7, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp69 = ::g::Fuse::Reactive::Data::New1(uString::Const("set_mood"));
    ::g::Fuse::Triggers::WhileTrue* temp8 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp8_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp8, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp70 = ::g::Fuse::Reactive::Data::New1(uString::Const("h_9"));
    ::g::Fuse::Triggers::WhileTrue* temp9 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp9_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp9, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp71 = ::g::Fuse::Reactive::Data::New1(uString::Const("h_8"));
    ::g::Fuse::Triggers::WhileTrue* temp10 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp10_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp10, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp72 = ::g::Fuse::Reactive::Data::New1(uString::Const("h_7"));
    ::g::Fuse::Triggers::WhileTrue* temp11 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp11_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp11, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp73 = ::g::Fuse::Reactive::Data::New1(uString::Const("n_6"));
    ::g::Fuse::Triggers::WhileTrue* temp12 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp12_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp12, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp74 = ::g::Fuse::Reactive::Data::New1(uString::Const("n_5"));
    ::g::Fuse::Triggers::WhileTrue* temp13 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp13_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp13, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp75 = ::g::Fuse::Reactive::Data::New1(uString::Const("n_4"));
    ::g::Fuse::Triggers::WhileTrue* temp14 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp14_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp14, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp76 = ::g::Fuse::Reactive::Data::New1(uString::Const("s_3"));
    ::g::Fuse::Triggers::WhileTrue* temp15 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp15_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp15, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp77 = ::g::Fuse::Reactive::Data::New1(uString::Const("s_2"));
    ::g::Fuse::Triggers::WhileTrue* temp16 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp16_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp16, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp78 = ::g::Fuse::Reactive::Data::New1(uString::Const("s_1"));
    ::g::Fuse::Triggers::WhileTrue* temp17 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp17_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp17, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp79 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_mood_send"));
    ::g::Fuse::Triggers::WhileFalse* temp18 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp18_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp18, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp80 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_mood_send"));
    ::g::Fuse::Controls::Button* temp19 = ::g::Fuse::Controls::Button::New5();
    temp19_IsEnabled_inst = ::g::Kalenteri_FuseVisual_IsEnabled_Property::New1(temp19, MainView::__selector8_);
    ::g::Fuse::Reactive::Data* temp81 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_mood_send"));
    ::g::Fuse::Reactive::Data* temp82 = ::g::Fuse::Reactive::Data::New1(uString::Const("save_mood"));
    mood_calendar_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(mood_calendar, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp83 = ::g::Fuse::Reactive::Data::New1(uString::Const("mood_cal_vis"));
    ::g::Fuse::Triggers::WhileTrue* temp20 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp20_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp20, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp84 = ::g::Fuse::Reactive::Data::New1(uString::Const("fade_me_in"));
    ::g::Fuse::Reactive::Each* temp21 = ::g::Fuse::Reactive::Each::New4();
    temp21_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp21, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp85 = ::g::Fuse::Reactive::Data::New1(uString::Const("hours"));
    ::g::Fuse::Controls::PageControl* temp22 = ::g::Fuse::Controls::PageControl::New4();
    temp22_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp22, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp86 = ::g::Fuse::Reactive::Data::New1(uString::Const("bed_track_h"));
    ::g::Fuse::Reactive::Each* temp23 = ::g::Fuse::Reactive::Each::New4();
    temp23_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp23, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp87 = ::g::Fuse::Reactive::Data::New1(uString::Const("minutes"));
    ::g::Fuse::Controls::PageControl* temp24 = ::g::Fuse::Controls::PageControl::New4();
    temp24_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp24, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp88 = ::g::Fuse::Reactive::Data::New1(uString::Const("bed_track_m"));
    ::g::Fuse::Reactive::Each* temp25 = ::g::Fuse::Reactive::Each::New4();
    temp25_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp25, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp89 = ::g::Fuse::Reactive::Data::New1(uString::Const("hours"));
    ::g::Fuse::Controls::PageControl* temp26 = ::g::Fuse::Controls::PageControl::New4();
    temp26_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp26, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp90 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_track_h"));
    ::g::Fuse::Reactive::Each* temp27 = ::g::Fuse::Reactive::Each::New4();
    temp27_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp27, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp91 = ::g::Fuse::Reactive::Data::New1(uString::Const("minutes"));
    ::g::Fuse::Controls::PageControl* temp28 = ::g::Fuse::Controls::PageControl::New4();
    temp28_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp28, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp92 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_track_m"));
    ::g::Fuse::Triggers::WhileTrue* temp29 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp29_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp29, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp93 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_9"));
    ::g::Fuse::Triggers::WhileTrue* temp30 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp30_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp30, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp94 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_6"));
    ::g::Fuse::Triggers::WhileTrue* temp31 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp31_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp31, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp95 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_3"));
    ::g::Fuse::Reactive::Each* temp32 = ::g::Fuse::Reactive::Each::New4();
    temp32_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp32, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp96 = ::g::Fuse::Reactive::Data::New1(uString::Const("hours"));
    ::g::Fuse::Controls::PageControl* temp33 = ::g::Fuse::Controls::PageControl::New4();
    temp33_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp33, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp97 = ::g::Fuse::Reactive::Data::New1(uString::Const("wake_track_h"));
    ::g::Fuse::Reactive::Each* temp34 = ::g::Fuse::Reactive::Each::New4();
    temp34_Items_inst = ::g::Kalenteri_FuseReactiveEach_Items_Property::New1(temp34, MainView::__selector9_);
    ::g::Fuse::Reactive::Data* temp98 = ::g::Fuse::Reactive::Data::New1(uString::Const("minutes"));
    ::g::Fuse::Controls::PageControl* temp35 = ::g::Fuse::Controls::PageControl::New4();
    temp35_ActiveIndex_inst = ::g::Kalenteri_FuseControlsPageControl_ActiveIndex_Property::New1(temp35, MainView::__selector10_);
    ::g::Fuse::Reactive::Data* temp99 = ::g::Fuse::Reactive::Data::New1(uString::Const("wake_track_m"));
    ::g::Fuse::Triggers::WhileTrue* temp36 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp36_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp36, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp100 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_sleep_send"));
    ::g::Fuse::Triggers::WhileFalse* temp37 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp37_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp37, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp101 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_sleep_send"));
    ::g::Fuse::Controls::Button* temp38 = ::g::Fuse::Controls::Button::New5();
    temp38_IsEnabled_inst = ::g::Kalenteri_FuseVisual_IsEnabled_Property::New1(temp38, MainView::__selector8_);
    ::g::Fuse::Reactive::Data* temp102 = ::g::Fuse::Reactive::Data::New1(uString::Const("enable_sleep_send"));
    ::g::Fuse::Reactive::Data* temp103 = ::g::Fuse::Reactive::Data::New1(uString::Const("save_sleep"));
    sleep_calendar_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(sleep_calendar, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp104 = ::g::Fuse::Reactive::Data::New1(uString::Const("sleep_cal_vis"));
    ::g::Fuse::Triggers::WhileTrue* temp39 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp39_Value_inst = ::g::Kalenteri_FuseTriggersWhileBool_Value_Property::New1(temp39, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp105 = ::g::Fuse::Reactive::Data::New1(uString::Const("fade_me_in"));
    eating_calendar_Visibility_inst = ::g::Kalenteri_FuseElementsElement_Visibility_Property::New1(eating_calendar, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp106 = ::g::Fuse::Reactive::Data::New1(uString::Const("eat_cal_vis"));
    ::g::Fuse::Reactive::JavaScript* temp107 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    router = ::g::Fuse::Navigation::Router::New2();
    ButtonEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp108 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp40);
    LinkButtonEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp109 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp41);
    MoodEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp110 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp42);
    MoodEvent_2 = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp111 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp43);
    ToggleEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp112 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp44);
    ::g::Fuse::iOS::StatusBarConfig* temp113 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp114 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Elements::Viewport* temp115 = ::g::Fuse::Elements::Viewport::New2();
    ::g::Fuse::Controls::DockPanel* temp116 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp117 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Triggers::Actions::DebugAction* temp118 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Animations::Rotate* temp119 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Change* temp120 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), home_page_Opacity_inst);
    ::g::Fuse::Animations::Change* temp121 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), web_view_content_Opacity_inst);
    ::g::Fuse::Animations::Change* temp122 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), extra_content_Opacity_inst);
    ::g::Fuse::Animations::Change* temp123 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), mood_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp124 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), sleep_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp125 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), eating_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp126 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), menu_Opacity_inst);
    ::g::Fuse::Animations::Change* temp127 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), hamburger_IsOpen_inst);
    ::g::Fuse::Animations::Change* temp128 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp129 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp45);
    ::g::Fuse::Triggers::Actions::DebugAction* temp130 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp131 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::DataBinding* temp132 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp46, 3);
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp47);
    ::g::Fuse::Triggers::Actions::DebugAction* temp133 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Panel* temp134 = ::g::Fuse::Controls::Panel::New3();
    popup = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp135 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp136 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp137 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp138 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Button* temp139 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp140 = ::g::Fuse::Controls::Text::New3();
    ::g::Uno::UX::Resource* temp141 = ::g::Uno::UX::Resource::New1(uString::Const("C600"), uBox(::g::Uno::Float4_typeof(), temp48));
    ::g::Uno::UX::Resource* temp142 = ::g::Uno::UX::Resource::New1(uString::Const("C700"), uBox(::g::Uno::Float4_typeof(), temp49));
    ::g::Fuse::Controls::Rectangle* temp143 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp144 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp145 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp146 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp147 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp148 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp50);
    ::g::Fuse::Drawing::StaticSolidColor* temp149 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1411765f, 0.1411765f, 0.1411765f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp150 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp51, 3);
    ::g::Fuse::Controls::Panel* temp151 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp152 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp153 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp52);
    box = ::g::Fuse::Controls::Panel::New3();
    sidePage = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Rotation* temp154 = ::g::Fuse::Rotation::New2();
    normalMenuItems = ::g::Fuse::Controls::StackPanel::New4();
    ::g::MenuButton* temp155 = ::g::MenuButton::New5();
    ::g::Fuse::Gestures::Clicked* temp156 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp157 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp158 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp159 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp160 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp53);
    ::g::MenuButton* temp161 = ::g::MenuButton::New5();
    ::g::Fuse::Gestures::Clicked* temp162 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp163 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp164 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp165 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp166 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp54);
    ::g::Fuse::Reactive::DataBinding* temp167 = ::g::Fuse::Reactive::DataBinding::New1(temp2_File_inst, (uObject*)temp55, 3);
    ::g::Fuse::Controls::Panel* temp168 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp169 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Shadow* temp170 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp171 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp172 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp173 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Rectangle* temp174 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp175 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp176 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp177 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp178 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::Set* temp179 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp180 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp181 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp182 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Controls::Grid* temp183 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp184 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::ImageFill* temp185 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp186 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp187 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp188 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Rectangle* temp189 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp190 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp191 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp192 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp193 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::Set* temp194 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp195 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp196 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp197 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Controls::Grid* temp198 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp199 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::ImageFill* temp200 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp201 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp202 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp203 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Rectangle* temp204 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp205 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp206 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp207 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp208 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp209 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::Set* temp210 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp211 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp212 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp213 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Controls::Grid* temp214 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp215 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::ImageFill* temp216 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp217 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp218 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp219 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp220 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp221 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp222 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Url_inst, (uObject*)temp56, 3);
    ::g::Fuse::Triggers::WhileVisible* temp223 = ::g::Fuse::Triggers::WhileVisible::New2();
    ::g::Fuse::Navigation::Activated* temp224 = ::g::Fuse::Navigation::Activated::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp225 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp57);
    ::g::Fuse::Controls::BottomFrameBackground* temp226 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Reactive::DataBinding* temp227 = ::g::Fuse::Reactive::DataBinding::New1(home_page_Visibility_inst, (uObject*)temp58, 3);
    ::g::Fuse::Controls::Panel* temp228 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp229 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp230 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::Shadow* temp231 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp232 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::Panel* temp233 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp234 = ::g::Fuse::Reactive::DataBinding::New1(temp4_File_inst, (uObject*)temp59, 3);
    ::g::Fuse::Reactive::JavaScript* temp235 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Navigation::Activated* temp236 = ::g::Fuse::Navigation::Activated::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp237 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp60);
    ::g::Fuse::Controls::NativeViewHost* temp238 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Reactive::DataBinding* temp239 = ::g::Fuse::Reactive::DataBinding::New1(wv_Url_inst, (uObject*)temp61, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp240 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Controls::BottomFrameBackground* temp241 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Reactive::DataBinding* temp242 = ::g::Fuse::Reactive::DataBinding::New1(web_view_content_Visibility_inst, (uObject*)temp62, 3);
    ::g::Fuse::Triggers::WhileVisible* temp243 = ::g::Fuse::Triggers::WhileVisible::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp244 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp63);
    ::g::Fuse::Controls::Panel* temp245 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp246 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp247 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp248 = ::g::Fuse::Reactive::DataBinding::New1(temp5_File_inst, (uObject*)temp64, 3);
    ::g::Fuse::Controls::Text* temp249 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp250 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp251 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp252 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp253 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp254 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp255 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp256 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp257 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp258 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp259 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp260 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp261 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp262 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Reactive::DataBinding* temp263 = ::g::Fuse::Reactive::DataBinding::New1(mood_container_Background_inst, (uObject*)temp65, 3);
    ::g::Fuse::Controls::StackPanel* temp264 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp265 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp266 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp267 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp268 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp269 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp270 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp271 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp272 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp273 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp274 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp275 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp276 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Reactive::DataBinding* temp277 = ::g::Fuse::Reactive::DataBinding::New1(sleep_container_Color_inst, (uObject*)temp66, 3);
    ::g::Fuse::Controls::StackPanel* temp278 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp279 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp280 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp281 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp282 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp283 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp284 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp285 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp286 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp287 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp288 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp289 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp290 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("calendar_type"));
    ::g::Fuse::Reactive::DataBinding* temp291 = ::g::Fuse::Reactive::DataBinding::New1(eat_container_Color_inst, (uObject*)temp67, 3);
    ::g::Fuse::Controls::Text* temp292 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp293 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    ::g::Fuse::Animations::Change* temp294 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), mood_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp295 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp68, 3);
    ::g::Fuse::Controls::Panel* temp296 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp297 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Shadow* temp298 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp299 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp300 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp301 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp302 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp303 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp304 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp305 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp306 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp307 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp69, 3);
    ::g::Fuse::Controls::Panel* temp308 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp309 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp310 = ::g::Fuse::Controls::Panel::New3();
    h_9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp311 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp312 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp313 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp314 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp315 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp316 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp70, 3);
    ::g::Fuse::Drawing::Stroke* temp317 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp318 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp319 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp320 = ::g::Fuse::Controls::Panel::New3();
    h_8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp321 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp322 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp323 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp324 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp325 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp326 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp71, 3);
    ::g::Fuse::Drawing::Stroke* temp327 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp328 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp329 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp330 = ::g::Fuse::Controls::Panel::New3();
    h_7 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp331 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp332 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp333 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp334 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp335 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp336 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp72, 3);
    ::g::Fuse::Drawing::Stroke* temp337 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp338 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp339 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp340 = ::g::Fuse::Controls::Panel::New3();
    n_6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp341 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp342 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp343 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp344 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp345 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp346 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp73, 3);
    ::g::Fuse::Drawing::Stroke* temp347 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp348 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.7372549f, 0.254902f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp349 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp350 = ::g::Fuse::Controls::Panel::New3();
    n_5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp351 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp352 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp353 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp354 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp355 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp356 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp74, 3);
    ::g::Fuse::Drawing::Stroke* temp357 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp358 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.8039216f, 0.4666667f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp359 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp360 = ::g::Fuse::Controls::Panel::New3();
    n_4 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp361 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp362 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp363 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp364 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp365 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp366 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp75, 3);
    ::g::Fuse::Drawing::Stroke* temp367 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp368 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.8509804f, 0.6117647f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp369 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp370 = ::g::Fuse::Controls::Panel::New3();
    s_3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp371 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp372 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp373 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp374 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp375 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp376 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp76, 3);
    ::g::Fuse::Drawing::Stroke* temp377 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp378 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.5372549f, 0.5137255f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp379 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp380 = ::g::Fuse::Controls::Panel::New3();
    s_2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp381 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp382 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp383 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp384 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp385 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp386 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp77, 3);
    ::g::Fuse::Drawing::Stroke* temp387 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp388 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.4f, 0.3686275f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp389 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp390 = ::g::Fuse::Controls::Panel::New3();
    s_1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp391 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp392 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp393 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp394 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp395 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp396 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp78, 3);
    ::g::Fuse::Drawing::Stroke* temp397 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp398 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.2f, 0.1529412f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp399 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Text* temp400 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp401 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp402 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp403 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Value_inst, (uObject*)temp79, 3);
    ::g::Fuse::Controls::Text* temp404 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp405 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp406 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Value_inst, (uObject*)temp80, 3);
    ::g::Fuse::Gestures::Clicked* temp407 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp408 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp409 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp410 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp411 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp412 = ::g::Fuse::Reactive::DataBinding::New1(temp19_IsEnabled_inst, (uObject*)temp81, 3);
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp82);
    ::g::Fuse::Drawing::StaticSolidColor* temp413 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp414 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Controls::BottomFrameBackground* temp415 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp416 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp417 = ::g::Fuse::Reactive::DataBinding::New1(mood_calendar_Visibility_inst, (uObject*)temp83, 3);
    ::g::Fuse::Animations::Change* temp418 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), sleep_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp419 = ::g::Fuse::Reactive::DataBinding::New1(temp20_Value_inst, (uObject*)temp84, 3);
    ::g::Fuse::Controls::Panel* temp420 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp421 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Shadow* temp422 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp423 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp424 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp425 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp426 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp427 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp428 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp429 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp430 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp431 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp432 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp433 = ::g::Fuse::Reactive::DataBinding::New1(temp21_Items_inst, (uObject*)temp85, 3);
    ::g::Fuse::Reactive::DataBinding* temp434 = ::g::Fuse::Reactive::DataBinding::New1(temp22_ActiveIndex_inst, (uObject*)temp86, 3);
    ::g::Fuse::Controls::Text* temp435 = ::g::Fuse::Controls::Text::New3();
    MainView__Template1* temp436 = MainView__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp437 = ::g::Fuse::Reactive::DataBinding::New1(temp23_Items_inst, (uObject*)temp87, 3);
    ::g::Fuse::Reactive::DataBinding* temp438 = ::g::Fuse::Reactive::DataBinding::New1(temp24_ActiveIndex_inst, (uObject*)temp88, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp439 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp440 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp441 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp442 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp443 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp444 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp445 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template2* temp446 = MainView__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp447 = ::g::Fuse::Reactive::DataBinding::New1(temp25_Items_inst, (uObject*)temp89, 3);
    ::g::Fuse::Reactive::DataBinding* temp448 = ::g::Fuse::Reactive::DataBinding::New1(temp26_ActiveIndex_inst, (uObject*)temp90, 3);
    ::g::Fuse::Controls::Text* temp449 = ::g::Fuse::Controls::Text::New3();
    MainView__Template3* temp450 = MainView__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp451 = ::g::Fuse::Reactive::DataBinding::New1(temp27_Items_inst, (uObject*)temp91, 3);
    ::g::Fuse::Reactive::DataBinding* temp452 = ::g::Fuse::Reactive::DataBinding::New1(temp28_ActiveIndex_inst, (uObject*)temp92, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp453 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp454 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp455 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp456 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp457 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp458 = ::g::Fuse::Controls::Panel::New3();
    sleep_9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp459 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp460 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp461 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp462 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp463 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp464 = ::g::Fuse::Reactive::DataBinding::New1(temp29_Value_inst, (uObject*)temp93, 3);
    ::g::Fuse::Drawing::Stroke* temp465 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp466 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp467 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp468 = ::g::Fuse::Controls::Panel::New3();
    sleep_6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp469 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp470 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp471 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp472 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp473 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp474 = ::g::Fuse::Reactive::DataBinding::New1(temp30_Value_inst, (uObject*)temp94, 3);
    ::g::Fuse::Drawing::Stroke* temp475 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp476 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp477 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp478 = ::g::Fuse::Controls::Panel::New3();
    sleep_3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp479 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp480 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp481 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("mood"));
    ::g::Fuse::Effects::DropShadow* temp482 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp483 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp484 = ::g::Fuse::Reactive::DataBinding::New1(temp31_Value_inst, (uObject*)temp95, 3);
    ::g::Fuse::Drawing::Stroke* temp485 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp486 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp487 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp488 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp489 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp490 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp491 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp492 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp493 = ::g::Fuse::Controls::Panel::New3();
    ::g::MySwitch* temp494 = ::g::MySwitch::New5();
    ::g::Fuse::Gestures::Tapped* temp495 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp496 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp497 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("toggle"));
    ::g::Fuse::Drawing::StaticSolidColor* temp498 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp499 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp500 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp501 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp502 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp503 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp504 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template4* temp505 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp506 = ::g::Fuse::Reactive::DataBinding::New1(temp32_Items_inst, (uObject*)temp96, 3);
    ::g::Fuse::Reactive::DataBinding* temp507 = ::g::Fuse::Reactive::DataBinding::New1(temp33_ActiveIndex_inst, (uObject*)temp97, 3);
    ::g::Fuse::Controls::Text* temp508 = ::g::Fuse::Controls::Text::New3();
    MainView__Template5* temp509 = MainView__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp510 = ::g::Fuse::Reactive::DataBinding::New1(temp34_Items_inst, (uObject*)temp98, 3);
    ::g::Fuse::Reactive::DataBinding* temp511 = ::g::Fuse::Reactive::DataBinding::New1(temp35_ActiveIndex_inst, (uObject*)temp99, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp512 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp513 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp514 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp515 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp516 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp517 = ::g::Fuse::Controls::Panel::New3();
    ::g::MySwitch* temp518 = ::g::MySwitch::New5();
    ::g::Fuse::Gestures::Tapped* temp519 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp520 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp521 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("toggle"));
    ::g::Fuse::Drawing::StaticSolidColor* temp522 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Panel* temp523 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp524 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp525 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp526 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp527 = ::g::Fuse::Controls::Panel::New3();
    ::g::MySwitch* temp528 = ::g::MySwitch::New5();
    ::g::Fuse::Gestures::Tapped* temp529 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp530 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp531 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(uString::Const("toggle"));
    ::g::Fuse::Drawing::StaticSolidColor* temp532 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.07058824f));
    ::g::Fuse::Controls::Text* temp533 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp534 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp535 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp536 = ::g::Fuse::Reactive::DataBinding::New1(temp36_Value_inst, (uObject*)temp100, 3);
    ::g::Fuse::Controls::Text* temp537 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp538 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp539 = ::g::Fuse::Reactive::DataBinding::New1(temp37_Value_inst, (uObject*)temp101, 3);
    ::g::Fuse::Gestures::Clicked* temp540 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp541 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp542 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp543 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp544 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), extra_content_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp545 = ::g::Fuse::Reactive::DataBinding::New1(temp38_IsEnabled_inst, (uObject*)temp102, 3);
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp103);
    ::g::Fuse::Drawing::StaticSolidColor* temp546 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp547 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Controls::BottomFrameBackground* temp548 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Reactive::DataBinding* temp549 = ::g::Fuse::Reactive::DataBinding::New1(sleep_calendar_Visibility_inst, (uObject*)temp104, 3);
    ::g::Fuse::Animations::Change* temp550 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), eating_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp551 = ::g::Fuse::Reactive::DataBinding::New1(temp39_Value_inst, (uObject*)temp105, 3);
    ::g::Fuse::Controls::Panel* temp552 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp553 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Shadow* temp554 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp555 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp556 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp557 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp558 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp559 = ::g::Fuse::Reactive::DataBinding::New1(eating_calendar_Visibility_inst, (uObject*)temp106, 3);
    Background(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    temp107->LineNumber(2);
    temp107->FileName(uString::Const("MainView.ux"));
    temp107->SourceLineNumber(2);
    temp107->SourceFileName(uString::Const("MainView.ux"));
    temp107->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::main85dc14ca()));
    uPtr(router)->Name(MainView::__selector11_);
    uPtr(router)->SourceLineNumber(6);
    uPtr(router)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(ButtonEvent)->Name(MainView::__selector12_);
    uPtr(ButtonEvent)->SourceLineNumber(50);
    uPtr(ButtonEvent)->SourceFileName(uString::Const("MainView.ux"));
    temp108->EventName(MainView::__selector12_);
    temp108->Filter(1);
    temp108->SourceLineNumber(51);
    temp108->SourceFileName(uString::Const("MainView.ux"));
    temp108->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb0);
    temp40->SourceLineNumber(51);
    temp40->SourceFileName(uString::Const("MainView.ux"));
    uPtr(LinkButtonEvent)->Name(MainView::__selector13_);
    uPtr(LinkButtonEvent)->SourceLineNumber(53);
    uPtr(LinkButtonEvent)->SourceFileName(uString::Const("MainView.ux"));
    temp109->EventName(MainView::__selector12_);
    temp109->Filter(1);
    temp109->SourceLineNumber(54);
    temp109->SourceFileName(uString::Const("MainView.ux"));
    temp109->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb1);
    temp41->SourceLineNumber(54);
    temp41->SourceFileName(uString::Const("MainView.ux"));
    uPtr(MoodEvent)->Name(MainView::__selector14_);
    uPtr(MoodEvent)->SourceLineNumber(56);
    uPtr(MoodEvent)->SourceFileName(uString::Const("MainView.ux"));
    temp110->EventName(MainView::__selector14_);
    temp110->Filter(1);
    temp110->SourceLineNumber(57);
    temp110->SourceFileName(uString::Const("MainView.ux"));
    temp110->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb2);
    temp42->SourceLineNumber(57);
    temp42->SourceFileName(uString::Const("MainView.ux"));
    uPtr(MoodEvent_2)->Name(MainView::__selector15_);
    uPtr(MoodEvent_2)->SourceLineNumber(59);
    uPtr(MoodEvent_2)->SourceFileName(uString::Const("MainView.ux"));
    temp111->EventName(MainView::__selector15_);
    temp111->Filter(1);
    temp111->SourceLineNumber(60);
    temp111->SourceFileName(uString::Const("MainView.ux"));
    temp111->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb3);
    temp43->SourceLineNumber(60);
    temp43->SourceFileName(uString::Const("MainView.ux"));
    uPtr(ToggleEvent)->Name(MainView::__selector16_);
    uPtr(ToggleEvent)->SourceLineNumber(62);
    uPtr(ToggleEvent)->SourceFileName(uString::Const("MainView.ux"));
    temp112->EventName(MainView::__selector16_);
    temp112->Filter(1);
    temp112->SourceLineNumber(63);
    temp112->SourceFileName(uString::Const("MainView.ux"));
    temp112->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb4);
    temp44->SourceLineNumber(63);
    temp44->SourceFileName(uString::Const("MainView.ux"));
    temp113->Style(1);
    temp113->SourceLineNumber(66);
    temp113->SourceFileName(uString::Const("MainView.ux"));
    temp114->Code(uString::Const("\n"
        "\t\tconsole.log(\"Hello, FuseJS!\");\n"
        "\t"));
    temp114->LineNumber(67);
    temp114->FileName(uString::Const("MainView.ux"));
    temp114->SourceLineNumber(67);
    temp114->SourceFileName(uString::Const("MainView.ux"));
    temp115->CullFace(2);
    temp115->Perspective(1.7f);
    temp115->PerspectiveRelativeTo(1);
    temp115->SourceLineNumber(70);
    temp115->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp116);
    temp116->SourceLineNumber(71);
    temp116->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), menu_is_open);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp151);
    temp117->SourceLineNumber(72);
    temp117->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp117, 2);
    uPtr(menu_is_open)->Value1(false);
    uPtr(menu_is_open)->Name(MainView::__selector17_);
    uPtr(menu_is_open)->SourceLineNumber(73);
    uPtr(menu_is_open)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb5);
    temp118->Message(uString::Const("menu_is_open"));
    temp118->SourceLineNumber(74);
    temp118->SourceFileName(uString::Const("MainView.ux"));
    temp119->DegreesY(-90.0f);
    temp119->Duration(0.7);
    temp119->DelayBack(0.0);
    temp119->Delay(0.0);
    temp119->Target(box);
    temp119->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp119->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp120, uCRef(0.0f));
    temp120->Duration(0.7);
    temp120->DelayBack(0.0);
    temp120->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp120->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp121, uCRef(0.0f));
    temp121->Duration(0.7);
    temp121->DelayBack(0.0);
    temp121->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp121->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp122, uCRef(0.0f));
    temp122->Duration(0.7);
    temp122->DelayBack(0.0);
    temp122->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp122->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp123, uCRef(0.0f));
    temp123->Duration(0.7);
    temp123->DelayBack(0.0);
    temp123->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp123->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp124, uCRef(0.0f));
    temp124->Duration(0.7);
    temp124->DelayBack(0.0);
    temp124->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp124->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp125, uCRef(0.0f));
    temp125->Duration(0.7);
    temp125->DelayBack(0.0);
    temp125->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp125->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp126, uCRef(1.0f));
    temp126->Duration(0.3);
    temp126->DelayBack(0.0);
    temp126->Easing(::g::Fuse::Animations::Easing::QuarticIn());
    temp126->EasingBack(::g::Fuse::Animations::Easing::QuarticIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp127, uCRef(true));
    temp127->DelayBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp128, uCRef<int32_t>(1));
    temp128->Duration(0.7);
    temp129->SourceLineNumber(85);
    temp129->SourceFileName(uString::Const("MainView.ux"));
    temp129->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp45->SourceLineNumber(85);
    temp45->SourceFileName(uString::Const("MainView.ux"));
    temp->SourceLineNumber(87);
    temp->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb6);
    temp130->Message(uString::Const("menu_is_close"));
    temp130->SourceLineNumber(88);
    temp130->SourceFileName(uString::Const("MainView.ux"));
    temp131->SourceLineNumber(89);
    temp131->SourceFileName(uString::Const("MainView.ux"));
    temp131->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp47->SourceLineNumber(89);
    temp47->SourceFileName(uString::Const("MainView.ux"));
    temp46->SourceLineNumber(87);
    temp46->SourceFileName(uString::Const("MainView.ux"));
    temp1->SourceLineNumber(91);
    temp1->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp150);
    temp133->Message(uString::Const("Hello World!"));
    temp133->SourceLineNumber(92);
    temp133->SourceFileName(uString::Const("MainView.ux"));
    temp134->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8470588f));
    temp134->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp134->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp134->X(::g::Uno::UX::Size__New1(0.0f, 1));
    temp134->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp134->SourceLineNumber(93);
    temp134->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), popup);
    uPtr(popup)->Color(::g::Uno::Float4__New2(0.9803922f, 0.9803922f, 0.9803922f, 1.0f));
    uPtr(popup)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popup)->Height(::g::Uno::UX::Size__New1(260.0f, 1));
    uPtr(popup)->Alignment(10);
    uPtr(popup)->Name(MainView::__selector18_);
    uPtr(popup)->SourceLineNumber(94);
    uPtr(popup)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(popup)->Background(temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popup)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp135);
    temp135->Alignment(10);
    temp135->SourceLineNumber(95);
    temp135->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp138);
    temp136->Margin(::g::Uno::Float4__New2(5.0f, 30.0f, 5.0f, 30.0f));
    temp136->SourceLineNumber(96);
    temp136->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp137);
    temp137->Value(uString::Const("Tiedot l\303\244hetetty!"));
    temp137->FontSize(30.0f);
    temp137->TextAlignment(1);
    temp137->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp137->SourceLineNumber(97);
    temp137->SourceFileName(uString::Const("MainView.ux"));
    temp138->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp138->SourceLineNumber(99);
    temp138->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp139);
    temp139->Text(uString::Const(""));
    temp139->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp139->Alignment(10);
    temp139->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp139->Padding(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp139->SourceLineNumber(100);
    temp139->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp139, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb7);
    temp140->Value(uString::Const("OK"));
    temp140->TextAlignment(1);
    temp140->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp140->Alignment(10);
    temp140->SourceLineNumber(101);
    temp140->SourceFileName(uString::Const("MainView.ux"));
    temp143->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp143->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp143->Layer(1);
    temp143->SourceLineNumber(104);
    temp143->SourceFileName(uString::Const("MainView.ux"));
    temp144->SourceLineNumber(105);
    temp144->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp148);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp145, uCRef(false));
    temp145->SourceLineNumber(106);
    temp145->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp146, uCRef<int32_t>(0));
    temp146->SourceLineNumber(107);
    temp146->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp147, uCRef<int32_t>(1));
    temp147->SourceLineNumber(108);
    temp147->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp148, uCRef<int32_t>(1));
    temp148->SourceLineNumber(109);
    temp148->SourceFileName(uString::Const("MainView.ux"));
    temp50->SourceLineNumber(100);
    temp50->SourceFileName(uString::Const("MainView.ux"));
    temp51->SourceLineNumber(91);
    temp51->SourceFileName(uString::Const("MainView.ux"));
    temp151->SourceLineNumber(155);
    temp151->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), box);
    uPtr(hamburger)->Alignment(5);
    uPtr(hamburger)->Name(MainView::__selector19_);
    uPtr(hamburger)->SourceLineNumber(156);
    uPtr(hamburger)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(hamburger, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hamburger)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hamburger)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb8);
    temp152->SourceLineNumber(157);
    temp152->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp153);
    temp153->SourceLineNumber(158);
    temp153->SourceFileName(uString::Const("MainView.ux"));
    temp153->Target((uObject*)menu_is_open);
    temp52->SourceLineNumber(156);
    temp52->SourceFileName(uString::Const("MainView.ux"));
    uPtr(box)->Name(MainView::__selector20_);
    uPtr(box)->SourceLineNumber(161);
    uPtr(box)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(box)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidePage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), home_page);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), web_view_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), extra_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), mood_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sleep_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), eating_calendar);
    uPtr(sidePage)->Name(MainView::__selector21_);
    uPtr(sidePage)->SourceLineNumber(162);
    uPtr(sidePage)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(sidePage)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidePage)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidePage)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), menu);
    temp154->DegreesY(90.0f);
    temp154->SourceLineNumber(163);
    temp154->SourceFileName(uString::Const("MainView.ux"));
    uPtr(menu)->ItemSpacing(50.0f);
    uPtr(menu)->ContentAlignment(8);
    uPtr(menu)->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 0.0f, 0.0f));
    uPtr(menu)->Opacity(0.0f);
    uPtr(menu)->Name(MainView::__selector22_);
    uPtr(menu)->SourceLineNumber(164);
    uPtr(menu)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), normalMenuItems);
    uPtr(normalMenuItems)->ItemSpacing(50.0f);
    uPtr(normalMenuItems)->Name(MainView::__selector23_);
    uPtr(normalMenuItems)->SourceLineNumber(178);
    uPtr(normalMenuItems)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp155->Text(uString::Const("Aloitusvalikko"));
    temp155->Alignment(1);
    temp155->SourceLineNumber(179);
    temp155->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp155, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb9);
    temp156->SourceLineNumber(180);
    temp156->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp160);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp157, uCRef(false));
    temp157->SourceLineNumber(181);
    temp157->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp158, uCRef<int32_t>(0));
    temp158->SourceLineNumber(182);
    temp158->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp159, uCRef<int32_t>(1));
    temp159->SourceLineNumber(183);
    temp159->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp160, uCRef<int32_t>(1));
    temp160->SourceLineNumber(184);
    temp160->SourceFileName(uString::Const("MainView.ux"));
    temp53->SourceLineNumber(179);
    temp53->SourceFileName(uString::Const("MainView.ux"));
    temp161->Text(uString::Const("Historia"));
    temp161->Alignment(1);
    temp161->SourceLineNumber(187);
    temp161->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp161, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp162->SourceLineNumber(188);
    temp162->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp166);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp163, uCRef(false));
    temp163->SourceLineNumber(189);
    temp163->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp164, uCRef<int32_t>(1));
    temp164->SourceLineNumber(190);
    temp164->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp165, uCRef<int32_t>(0));
    temp165->SourceLineNumber(191);
    temp165->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp166, uCRef<int32_t>(1));
    temp166->SourceLineNumber(192);
    temp166->SourceFileName(uString::Const("MainView.ux"));
    temp54->SourceLineNumber(187);
    temp54->SourceFileName(uString::Const("MainView.ux"));
    temp2->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 70.0f, 0.0f));
    temp2->SourceLineNumber(195);
    temp2->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp167);
    temp55->SourceLineNumber(195);
    temp55->SourceFileName(uString::Const("MainView.ux"));
    uPtr(home_page)->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    uPtr(home_page)->Name(MainView::__selector24_);
    uPtr(home_page)->SourceLineNumber(208);
    uPtr(home_page)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp221);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp226);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp227);
    temp168->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp168->SourceLineNumber(209);
    temp168->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp168, 2);
    temp168->Background(temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp170);
    temp169->Value(uString::Const("Aloitusvalikko"));
    temp169->FontSize(21.0f);
    temp169->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp169->Alignment(10);
    temp169->SourceLineNumber(210);
    temp169->SourceFileName(uString::Const("MainView.ux"));
    temp170->Angle(90.0f);
    temp170->Distance(2.0f);
    temp170->Size(6.0f);
    temp170->Color(::g::Uno::Float4__New2(0.09411765f, 0.3490196f, 0.4352941f, 1.0f));
    temp170->SourceLineNumber(211);
    temp170->SourceFileName(uString::Const("MainView.ux"));
    temp172->SourceLineNumber(213);
    temp172->SourceFileName(uString::Const("MainView.ux"));
    temp172->Background(temp220);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp219);
    temp173->Text(uString::Const(""));
    temp173->Margin(::g::Uno::Float4__New2(20.0f, 40.0f, 20.0f, 20.0f));
    temp173->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp173->SourceLineNumber(220);
    temp173->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp174);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp183);
    temp174->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp174->Color(::g::Uno::Float4__New2(0.7411765f, 0.2313726f, 0.1058824f, 1.0f));
    temp174->Layer(1);
    temp174->SourceLineNumber(221);
    temp174->SourceFileName(uString::Const("MainView.ux"));
    temp175->SourceLineNumber(222);
    temp175->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp178);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp180);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp182);
    temp176->EventName(MainView::__selector12_);
    temp176->SourceLineNumber(223);
    temp176->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp176->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp177);
    temp177->StringValue(uString::Const("mood_calendar"));
    temp178->EventName(MainView::__selector13_);
    temp178->SourceLineNumber(226);
    temp178->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp179, uCRef(false));
    temp179->SourceLineNumber(227);
    temp179->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp180, uCRef<int32_t>(1));
    temp180->SourceLineNumber(228);
    temp180->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp181, uCRef<int32_t>(1));
    temp181->SourceLineNumber(229);
    temp181->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp182, uCRef<int32_t>(1));
    temp182->SourceLineNumber(230);
    temp182->SourceFileName(uString::Const("MainView.ux"));
    temp183->Rows(uString::Const("1*"));
    temp183->RowCount(1);
    temp183->Columns(uString::Const("2*,8*"));
    temp183->ColumnCount(2);
    temp183->CellSpacing(0.0f);
    temp183->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp183->SourceLineNumber(243);
    temp183->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp186);
    temp184->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp184->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp184->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp184->SourceLineNumber(244);
    temp184->SourceFileName(uString::Const("MainView.ux"));
    temp184->Background(temp185);
    temp185->StretchMode(6);
    temp185->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::mood_icon2741e299()));
    temp186->SourceLineNumber(247);
    temp186->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp187);
    temp187->Value(uString::Const("Siirry kirjaamaan"));
    temp187->TextAlignment(1);
    temp187->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp187->Alignment(10);
    temp187->SourceLineNumber(248);
    temp187->SourceFileName(uString::Const("MainView.ux"));
    temp188->Text(uString::Const(""));
    temp188->Margin(::g::Uno::Float4__New2(20.0f, 40.0f, 20.0f, 20.0f));
    temp188->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp188->SourceLineNumber(253);
    temp188->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp198);
    temp189->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp189->Color(::g::Uno::Float4__New2(0.7137255f, 0.7764706f, 0.1019608f, 1.0f));
    temp189->Layer(1);
    temp189->SourceLineNumber(254);
    temp189->SourceFileName(uString::Const("MainView.ux"));
    temp190->SourceLineNumber(255);
    temp190->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp191);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp196);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp197);
    temp191->EventName(MainView::__selector12_);
    temp191->SourceLineNumber(256);
    temp191->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp192);
    temp192->StringValue(uString::Const("sleep_calendar"));
    temp193->EventName(MainView::__selector13_);
    temp193->SourceLineNumber(259);
    temp193->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp194, uCRef(false));
    temp194->SourceLineNumber(260);
    temp194->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp195, uCRef<int32_t>(1));
    temp195->SourceLineNumber(261);
    temp195->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp196, uCRef<int32_t>(1));
    temp196->SourceLineNumber(262);
    temp196->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp197, uCRef<int32_t>(1));
    temp197->SourceLineNumber(263);
    temp197->SourceFileName(uString::Const("MainView.ux"));
    temp198->Rows(uString::Const("1*"));
    temp198->RowCount(1);
    temp198->Columns(uString::Const("2*,8*"));
    temp198->ColumnCount(2);
    temp198->CellSpacing(0.0f);
    temp198->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp198->SourceLineNumber(265);
    temp198->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp199);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp201);
    temp199->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp199->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp199->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp199->SourceLineNumber(266);
    temp199->SourceFileName(uString::Const("MainView.ux"));
    temp199->Background(temp200);
    temp200->StretchMode(6);
    temp200->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::sleep_icone323cddb()));
    temp201->SourceLineNumber(269);
    temp201->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp202);
    temp202->Value(uString::Const("Siirry kirjaamaan"));
    temp202->TextAlignment(1);
    temp202->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp202->Alignment(10);
    temp202->SourceLineNumber(270);
    temp202->SourceFileName(uString::Const("MainView.ux"));
    temp203->Text(uString::Const(""));
    temp203->Margin(::g::Uno::Float4__New2(20.0f, 40.0f, 20.0f, 20.0f));
    temp203->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp203->Opacity(0.4f);
    temp203->IsEnabled(false);
    temp203->SourceLineNumber(275);
    temp203->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp206);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp214);
    temp204->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp204->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp204->Layer(1);
    temp204->SourceLineNumber(276);
    temp204->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp205);
    temp205->Color(::g::Uno::Float4__New2(0.2470588f, 0.8352941f, 0.9215686f, 1.0f));
    temp205->Width(1.0f);
    temp205->Alignment(2);
    temp206->SourceLineNumber(279);
    temp206->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp210);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp213);
    temp207->EventName(MainView::__selector12_);
    temp207->SourceLineNumber(280);
    temp207->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp208);
    temp208->StringValue(uString::Const("eating_calendar"));
    temp209->EventName(MainView::__selector13_);
    temp209->SourceLineNumber(283);
    temp209->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp210, uCRef(false));
    temp210->SourceLineNumber(284);
    temp210->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp211, uCRef<int32_t>(1));
    temp211->SourceLineNumber(285);
    temp211->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp212, uCRef<int32_t>(1));
    temp212->SourceLineNumber(286);
    temp212->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp213, uCRef<int32_t>(1));
    temp213->SourceLineNumber(287);
    temp213->SourceFileName(uString::Const("MainView.ux"));
    temp214->Rows(uString::Const("1*"));
    temp214->RowCount(1);
    temp214->DefaultRow(uString::Const("1"));
    temp214->Columns(uString::Const("2*,8*"));
    temp214->ColumnCount(2);
    temp214->DefaultColumn(uString::Const("2"));
    temp214->CellSpacing(0.0f);
    temp214->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp214->SourceLineNumber(289);
    temp214->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp214->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp215);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp214->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp217);
    temp215->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp215->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp215->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp215->SourceLineNumber(290);
    temp215->SourceFileName(uString::Const("MainView.ux"));
    temp215->Background(temp216);
    temp216->StretchMode(6);
    temp216->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::eat_icon7597781c()));
    temp217->SourceLineNumber(293);
    temp217->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp217->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp218);
    temp218->Value(uString::Const("Siirry kirjaamaan"));
    temp218->TextAlignment(1);
    temp218->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp218->Alignment(10);
    temp218->SourceLineNumber(294);
    temp218->SourceFileName(uString::Const("MainView.ux"));
    temp219->Value(uString::Const("Ruokap\303\244iv\303\244kirja ei ole k\303\244yt\303\266ss\303\244 viel\303\244."));
    temp219->TextWrapping(1);
    temp219->FontSize(21.0f);
    temp219->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp219->Alignment(10);
    temp219->SourceLineNumber(298);
    temp219->SourceFileName(uString::Const("MainView.ux"));
    temp221->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp221->Alignment(12);
    temp221->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp221->SourceLineNumber(301);
    temp221->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp221, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp3->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp3->Alignment(0);
    temp3->Margin(::g::Uno::Float4__New2(60.0f, 20.0f, 60.0f, 30.0f));
    temp3->SourceLineNumber(302);
    temp3->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp222);
    temp56->SourceLineNumber(302);
    temp56->SourceFileName(uString::Const("MainView.ux"));
    temp223->SourceLineNumber(305);
    temp223->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp224);
    temp224->SourceLineNumber(306);
    temp224->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb11);
    temp225->SourceLineNumber(307);
    temp225->SourceFileName(uString::Const("MainView.ux"));
    temp225->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    temp57->SourceLineNumber(307);
    temp57->SourceFileName(uString::Const("MainView.ux"));
    temp226->SourceLineNumber(310);
    temp226->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp226, 3);
    temp58->SourceLineNumber(208);
    temp58->SourceFileName(uString::Const("MainView.ux"));
    uPtr(web_view_content)->Name(MainView::__selector25_);
    uPtr(web_view_content)->SourceLineNumber(313);
    uPtr(web_view_content)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp228);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp233);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp241);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp242);
    temp228->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp228->SourceLineNumber(314);
    temp228->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp228, 2);
    temp228->Background(temp232);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp228->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp229);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp228->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp231);
    temp229->Value(uString::Const("Graphs"));
    temp229->FontSize(21.0f);
    temp229->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp229->Alignment(10);
    temp229->SourceLineNumber(315);
    temp229->SourceFileName(uString::Const("MainView.ux"));
    temp229->Background(temp230);
    temp231->Angle(90.0f);
    temp231->Distance(2.0f);
    temp231->Size(6.0f);
    temp231->Color(::g::Uno::Float4__New2(0.09411765f, 0.3490196f, 0.4352941f, 1.0f));
    temp231->SourceLineNumber(316);
    temp231->SourceFileName(uString::Const("MainView.ux"));
    temp233->SourceLineNumber(318);
    temp233->SourceFileName(uString::Const("MainView.ux"));
    temp233->Background(temp240);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp235);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp236);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp238);
    temp4->StretchMode(6);
    temp4->Layer(1);
    temp4->SourceLineNumber(319);
    temp4->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp234);
    temp59->SourceLineNumber(319);
    temp59->SourceFileName(uString::Const("MainView.ux"));
    temp235->Code(uString::Const("\n"
        "\t\t\t\t\t\t\t\tfunction resetUrl() {\n"
        "\t\t\t\t\t\t\t\t\twv.goto(chart_url.value);\n"
        "\t\t\t\t\t\t\t\t}\n"
        "\t\t\t\t\t\t\t\tmodule.exports = {\n"
        "\t\t\t\t\t\t\t\t\tresetUrl: resetUrl\n"
        "\t\t\t\t\t\t\t\t};\n"
        "\t\t\t\t\t\t\t"));
    temp235->LineNumber(320);
    temp235->FileName(uString::Const("MainView.ux"));
    temp235->SourceLineNumber(320);
    temp235->SourceFileName(uString::Const("MainView.ux"));
    temp236->When(0);
    temp236->SourceLineNumber(328);
    temp236->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp236->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp236->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    temp237->SourceLineNumber(329);
    temp237->SourceFileName(uString::Const("MainView.ux"));
    temp237->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    temp60->SourceLineNumber(329);
    temp60->SourceFileName(uString::Const("MainView.ux"));
    temp238->SourceLineNumber(331);
    temp238->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp238->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), wv);
    uPtr(wv)->Name(MainView::__selector26_);
    uPtr(wv)->SourceLineNumber(332);
    uPtr(wv)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(wv, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(wv)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp239);
    temp61->SourceLineNumber(332);
    temp61->SourceFileName(uString::Const("MainView.ux"));
    temp241->SourceLineNumber(337);
    temp241->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp241, 3);
    temp62->SourceLineNumber(313);
    temp62->SourceFileName(uString::Const("MainView.ux"));
    uPtr(extra_content)->Visibility(1);
    uPtr(extra_content)->Name(MainView::__selector27_);
    uPtr(extra_content)->SourceLineNumber(340);
    uPtr(extra_content)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp243);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp245);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp247);
    temp243->SourceLineNumber(341);
    temp243->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp243->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp244);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp243->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    temp244->SourceLineNumber(342);
    temp244->SourceFileName(uString::Const("MainView.ux"));
    temp244->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    temp63->SourceLineNumber(342);
    temp63->SourceFileName(uString::Const("MainView.ux"));
    temp245->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp245->SourceLineNumber(344);
    temp245->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp245, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp246);
    temp246->Value(uString::Const("Extra content"));
    temp246->FontSize(21.0f);
    temp246->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp246->Alignment(10);
    temp246->SourceLineNumber(345);
    temp246->SourceFileName(uString::Const("MainView.ux"));
    temp247->SourceLineNumber(347);
    temp247->SourceFileName(uString::Const("MainView.ux"));
    temp247->Background(temp293);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp249);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), mood_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sleep_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), eat_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp292);
    temp5->StretchMode(6);
    temp5->Layer(1);
    temp5->SourceLineNumber(348);
    temp5->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp248);
    temp64->SourceLineNumber(348);
    temp64->SourceFileName(uString::Const("MainView.ux"));
    temp249->Value(uString::Const("Select calendar type"));
    temp249->FontSize(21.0f);
    temp249->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp249->Alignment(10);
    temp249->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp249->SourceLineNumber(349);
    temp249->SourceFileName(uString::Const("MainView.ux"));
    uPtr(mood_container)->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 20.0f));
    uPtr(mood_container)->Name(MainView::__selector28_);
    uPtr(mood_container)->SourceLineNumber(350);
    uPtr(mood_container)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_container)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp250);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_container)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp263);
    temp250->SourceLineNumber(351);
    temp250->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp250->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp251);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp250->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp253);
    temp251->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp251->Alignment(10);
    temp251->SourceLineNumber(353);
    temp251->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp251->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp252);
    temp252->Value(uString::Const("Mood calendar"));
    temp252->FontSize(21.0f);
    temp252->TextAlignment(1);
    temp252->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp252->Alignment(10);
    temp252->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp252->SourceLineNumber(354);
    temp252->SourceFileName(uString::Const("MainView.ux"));
    temp252->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    temp253->Text(uString::Const(""));
    temp253->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp253->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp253->SourceLineNumber(357);
    temp253->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp253->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp254);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp253->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp255);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp253->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp256);
    temp254->Value(uString::Const("Select this"));
    temp254->TextAlignment(1);
    temp254->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp254->Alignment(10);
    temp254->SourceLineNumber(358);
    temp254->SourceFileName(uString::Const("MainView.ux"));
    temp255->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp255->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp255->Layer(1);
    temp255->SourceLineNumber(359);
    temp255->SourceFileName(uString::Const("MainView.ux"));
    temp256->SourceLineNumber(360);
    temp256->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp257);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp258);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp259);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp260);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp261);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp257, uCRef(false));
    temp257->SourceLineNumber(361);
    temp257->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp258, uCRef<int32_t>(0));
    temp258->SourceLineNumber(362);
    temp258->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp259, uCRef<int32_t>(1));
    temp259->SourceLineNumber(363);
    temp259->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp260, uCRef<int32_t>(1));
    temp260->SourceLineNumber(364);
    temp260->SourceFileName(uString::Const("MainView.ux"));
    temp261->EventName(MainView::__selector12_);
    temp261->SourceLineNumber(365);
    temp261->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp261->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp262);
    temp262->StringValue(uString::Const("mood_calendar"));
    temp65->SourceLineNumber(350);
    temp65->SourceFileName(uString::Const("MainView.ux"));
    uPtr(sleep_container)->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 20.0f));
    uPtr(sleep_container)->Name(MainView::__selector29_);
    uPtr(sleep_container)->SourceLineNumber(373);
    uPtr(sleep_container)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_container)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_container)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp277);
    temp264->SourceLineNumber(374);
    temp264->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp265);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp267);
    temp265->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp265->Alignment(10);
    temp265->SourceLineNumber(376);
    temp265->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp265->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp266);
    temp266->Value(uString::Const("Sleep calendar"));
    temp266->FontSize(21.0f);
    temp266->TextAlignment(1);
    temp266->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp266->Alignment(10);
    temp266->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp266->SourceLineNumber(377);
    temp266->SourceFileName(uString::Const("MainView.ux"));
    temp266->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    temp267->Text(uString::Const(""));
    temp267->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp267->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp267->SourceLineNumber(379);
    temp267->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp267->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp268);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp267->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp269);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp267->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp270);
    temp268->Value(uString::Const("Select this"));
    temp268->TextAlignment(1);
    temp268->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp268->Alignment(10);
    temp268->SourceLineNumber(380);
    temp268->SourceFileName(uString::Const("MainView.ux"));
    temp269->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp269->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp269->Layer(1);
    temp269->SourceLineNumber(381);
    temp269->SourceFileName(uString::Const("MainView.ux"));
    temp270->SourceLineNumber(382);
    temp270->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp271);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp272);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp273);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp274);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp275);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp271, uCRef(false));
    temp271->SourceLineNumber(383);
    temp271->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp272, uCRef<int32_t>(0));
    temp272->SourceLineNumber(384);
    temp272->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp273, uCRef<int32_t>(1));
    temp273->SourceLineNumber(385);
    temp273->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp274, uCRef<int32_t>(1));
    temp274->SourceLineNumber(386);
    temp274->SourceFileName(uString::Const("MainView.ux"));
    temp275->EventName(MainView::__selector12_);
    temp275->SourceLineNumber(387);
    temp275->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp276);
    temp276->StringValue(uString::Const("sleep_calendar"));
    temp66->SourceLineNumber(373);
    temp66->SourceFileName(uString::Const("MainView.ux"));
    uPtr(eat_container)->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 20.0f));
    uPtr(eat_container)->Name(MainView::__selector30_);
    uPtr(eat_container)->SourceLineNumber(394);
    uPtr(eat_container)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eat_container)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eat_container)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp291);
    temp278->SourceLineNumber(395);
    temp278->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp278->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp279);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp278->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp281);
    temp279->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp279->Alignment(10);
    temp279->SourceLineNumber(397);
    temp279->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp279->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp280);
    temp280->Value(uString::Const("Eating calendar"));
    temp280->FontSize(21.0f);
    temp280->TextAlignment(1);
    temp280->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp280->Alignment(10);
    temp280->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp280->SourceLineNumber(398);
    temp280->SourceFileName(uString::Const("MainView.ux"));
    temp280->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    temp281->Text(uString::Const(""));
    temp281->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp281->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp281->SourceLineNumber(400);
    temp281->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp282);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp283);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp284);
    temp282->Value(uString::Const("Select this"));
    temp282->TextAlignment(1);
    temp282->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp282->Alignment(10);
    temp282->SourceLineNumber(401);
    temp282->SourceFileName(uString::Const("MainView.ux"));
    temp283->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp283->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp283->Layer(1);
    temp283->SourceLineNumber(402);
    temp283->SourceFileName(uString::Const("MainView.ux"));
    temp284->SourceLineNumber(403);
    temp284->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp285);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp286);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp287);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp288);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp289);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp285, uCRef(false));
    temp285->SourceLineNumber(404);
    temp285->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp286, uCRef<int32_t>(0));
    temp286->SourceLineNumber(405);
    temp286->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp287, uCRef<int32_t>(1));
    temp287->SourceLineNumber(406);
    temp287->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp288, uCRef<int32_t>(1));
    temp288->SourceLineNumber(407);
    temp288->SourceFileName(uString::Const("MainView.ux"));
    temp289->EventName(MainView::__selector12_);
    temp289->SourceLineNumber(408);
    temp289->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp290);
    temp290->StringValue(uString::Const("eating_calendar"));
    temp67->SourceLineNumber(394);
    temp67->SourceFileName(uString::Const("MainView.ux"));
    temp292->Value(uString::Const("Each calendar works same way. Only content lists changes."));
    temp292->TextWrapping(1);
    temp292->FontSize(18.0f);
    temp292->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp292->Alignment(10);
    temp292->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 10.0f));
    temp292->SourceLineNumber(415);
    temp292->SourceFileName(uString::Const("MainView.ux"));
    uPtr(mood_calendar)->Opacity(0.0f);
    uPtr(mood_calendar)->Name(MainView::__selector31_);
    uPtr(mood_calendar)->SourceLineNumber(419);
    uPtr(mood_calendar)->SourceFileName(uString::Const("MainView.ux"));
    uPtr(mood_calendar)->Background(temp416);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp296);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp300);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp415);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp417);
    temp6->SourceLineNumber(420);
    temp6->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp294);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp295);
    ::g::Fuse::Animations::Change__set_Value_fn(temp294, uCRef(1.0f));
    temp294->Duration(0.4);
    temp294->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp68->SourceLineNumber(420);
    temp68->SourceFileName(uString::Const("MainView.ux"));
    temp296->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp296->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp296->SourceLineNumber(423);
    temp296->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp296, 2);
    temp296->Background(temp299);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp297);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp298);
    temp297->Value(uString::Const("Mielialap\303\244iv\303\244kirja"));
    temp297->FontSize(21.0f);
    temp297->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp297->Alignment(10);
    temp297->SourceLineNumber(424);
    temp297->SourceFileName(uString::Const("MainView.ux"));
    temp298->Angle(90.0f);
    temp298->Distance(2.0f);
    temp298->Size(6.0f);
    temp298->Color(::g::Uno::Float4__New2(0.09411765f, 0.3490196f, 0.4352941f, 1.0f));
    temp298->SourceLineNumber(425);
    temp298->SourceFileName(uString::Const("MainView.ux"));
    temp300->SourceLineNumber(427);
    temp300->SourceFileName(uString::Const("MainView.ux"));
    temp300->Background(temp414);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp301);
    temp301->Opacity(1.0f);
    temp301->SourceLineNumber(428);
    temp301->SourceFileName(uString::Const("MainView.ux"));
    temp301->Background(temp413);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp301->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp302);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp301->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp303);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp301->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp308);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp301->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    temp302->Value(uString::Const("Mit\303\244 teit: "));
    temp302->FontSize(20.0f);
    temp302->TextAlignment(0);
    temp302->Alignment(9);
    temp302->Margin(::g::Uno::Float4__New2(20.0f, 30.0f, 0.0f, 10.0f));
    temp302->SourceLineNumber(431);
    temp302->SourceFileName(uString::Const("MainView.ux"));
    temp303->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp303->SourceLineNumber(432);
    temp303->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp303->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp7->TextWrapping(1);
    temp7->FontSize(20.0f);
    temp7->MinHeight(::g::Uno::UX::Size__New1(90.0f, 1));
    temp7->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 10.0f));
    temp7->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp7->ClipToBounds(true);
    temp7->SourceLineNumber(439);
    temp7->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp304);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp307);
    temp304->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp304->MinHeight(::g::Uno::UX::Size__New1(90.0f, 1));
    temp304->Layer(1);
    temp304->SourceLineNumber(440);
    temp304->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp304->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp306);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp304->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp305);
    temp305->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp305->Width(1.0f);
    temp306->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->SourceLineNumber(439);
    temp69->SourceFileName(uString::Const("MainView.ux"));
    temp308->SourceLineNumber(446);
    temp308->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp308->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp309);
    temp309->Rows(uString::Const("1*"));
    temp309->RowCount(3);
    temp309->Columns(uString::Const("1*,1*,1*"));
    temp309->ColumnCount(3);
    temp309->CellSpacing(15.0f);
    temp309->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    temp309->SourceLineNumber(447);
    temp309->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp310);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp320);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp330);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp340);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp350);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp360);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp370);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp380);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp390);
    temp310->SourceLineNumber(448);
    temp310->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp310->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h_9);
    uPtr(h_9)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_9)->Color(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    uPtr(h_9)->Aspect(1.0f);
    uPtr(h_9)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_9)->BoxSizing(4);
    uPtr(h_9)->Name(MainView::__selector32_);
    uPtr(h_9)->SourceLineNumber(449);
    uPtr(h_9)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp319);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp317);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp311);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp311->SourceLineNumber(450);
    temp311->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp311->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp312);
    temp312->EventName(MainView::__selector14_);
    temp312->SourceLineNumber(451);
    temp312->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp312->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp313);
    temp313->StringValue(uString::Const("h_9"));
    temp8->SourceLineNumber(455);
    temp8->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp315);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp314);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp316);
    temp314->Size(1.0f);
    temp314->Angle(135.0f);
    temp314->Distance(3.0f);
    temp314->Spread(0.5f);
    temp314->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp314->SourceLineNumber(456);
    temp314->SourceFileName(uString::Const("MainView.ux"));
    temp315->Factor(1.4f);
    temp315->Duration(0.1);
    temp315->Target(h_9);
    temp70->SourceLineNumber(455);
    temp70->SourceFileName(uString::Const("MainView.ux"));
    temp317->Width(4.0f);
    temp317->Brush(temp318);
    temp319->StretchMode(3);
    temp319->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_921602852()));
    temp320->SourceLineNumber(463);
    temp320->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp320->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h_8);
    uPtr(h_8)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_8)->Color(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    uPtr(h_8)->Aspect(1.0f);
    uPtr(h_8)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_8)->BoxSizing(4);
    uPtr(h_8)->Name(MainView::__selector33_);
    uPtr(h_8)->SourceLineNumber(464);
    uPtr(h_8)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp329);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp327);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp321);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp321->SourceLineNumber(465);
    temp321->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp321->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp322);
    temp322->EventName(MainView::__selector14_);
    temp322->SourceLineNumber(466);
    temp322->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp323);
    temp323->StringValue(uString::Const("h_8"));
    temp9->SourceLineNumber(470);
    temp9->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp325);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp324);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp326);
    temp324->Size(1.0f);
    temp324->Angle(135.0f);
    temp324->Distance(3.0f);
    temp324->Spread(0.5f);
    temp324->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp324->SourceLineNumber(471);
    temp324->SourceFileName(uString::Const("MainView.ux"));
    temp325->Factor(1.4f);
    temp325->Duration(0.1);
    temp325->Target(h_8);
    temp71->SourceLineNumber(470);
    temp71->SourceFileName(uString::Const("MainView.ux"));
    temp327->Width(4.0f);
    temp327->Brush(temp328);
    temp329->StretchMode(3);
    temp329->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_821602c53()));
    temp330->SourceLineNumber(478);
    temp330->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp330->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h_7);
    uPtr(h_7)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_7)->Color(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    uPtr(h_7)->Aspect(1.0f);
    uPtr(h_7)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_7)->BoxSizing(4);
    uPtr(h_7)->Name(MainView::__selector34_);
    uPtr(h_7)->SourceLineNumber(479);
    uPtr(h_7)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp339);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp337);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp331);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp331->SourceLineNumber(480);
    temp331->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp332);
    temp332->EventName(MainView::__selector14_);
    temp332->SourceLineNumber(481);
    temp332->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp332->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp333);
    temp333->StringValue(uString::Const("h_7"));
    temp10->SourceLineNumber(485);
    temp10->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp335);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp334);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp336);
    temp334->Size(1.0f);
    temp334->Angle(135.0f);
    temp334->Distance(3.0f);
    temp334->Spread(0.5f);
    temp334->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp334->SourceLineNumber(486);
    temp334->SourceFileName(uString::Const("MainView.ux"));
    temp335->Factor(1.4f);
    temp335->Duration(0.1);
    temp335->Target(h_7);
    temp72->SourceLineNumber(485);
    temp72->SourceFileName(uString::Const("MainView.ux"));
    temp337->Width(4.0f);
    temp337->Brush(temp338);
    temp339->StretchMode(3);
    temp339->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_7215fed4c()));
    temp340->SourceLineNumber(493);
    temp340->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp340->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), n_6);
    uPtr(n_6)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_6)->Color(::g::Uno::Float4__New2(0.9647059f, 0.7372549f, 0.254902f, 1.0f));
    uPtr(n_6)->Aspect(1.0f);
    uPtr(n_6)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_6)->BoxSizing(4);
    uPtr(n_6)->Name(MainView::__selector35_);
    uPtr(n_6)->SourceLineNumber(494);
    uPtr(n_6)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp349);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp347);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp341);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp341->SourceLineNumber(495);
    temp341->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp341->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp342);
    temp342->EventName(MainView::__selector14_);
    temp342->SourceLineNumber(496);
    temp342->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp342->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp343);
    temp343->StringValue(uString::Const("n_6"));
    temp11->SourceLineNumber(500);
    temp11->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp345);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp344);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp346);
    temp344->Size(1.0f);
    temp344->Angle(135.0f);
    temp344->Distance(3.0f);
    temp344->Spread(0.5f);
    temp344->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp344->SourceLineNumber(501);
    temp344->SourceFileName(uString::Const("MainView.ux"));
    temp345->Factor(1.4f);
    temp345->Duration(0.1);
    temp345->Target(n_6);
    temp73->SourceLineNumber(500);
    temp73->SourceFileName(uString::Const("MainView.ux"));
    temp347->Width(4.0f);
    temp347->Brush(temp348);
    temp349->StretchMode(3);
    temp349->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_6215ff14d()));
    temp350->SourceLineNumber(508);
    temp350->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp350->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), n_5);
    uPtr(n_5)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_5)->Color(::g::Uno::Float4__New2(0.9647059f, 0.8039216f, 0.4666667f, 1.0f));
    uPtr(n_5)->Aspect(1.0f);
    uPtr(n_5)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_5)->BoxSizing(4);
    uPtr(n_5)->Name(MainView::__selector36_);
    uPtr(n_5)->SourceLineNumber(509);
    uPtr(n_5)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp359);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp357);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp351);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp351->SourceLineNumber(510);
    temp351->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp351->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp352);
    temp352->EventName(MainView::__selector14_);
    temp352->SourceLineNumber(511);
    temp352->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp352->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp353);
    temp353->StringValue(uString::Const("n_5"));
    temp12->SourceLineNumber(515);
    temp12->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp355);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp354);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp356);
    temp354->Size(1.0f);
    temp354->Angle(135.0f);
    temp354->Distance(3.0f);
    temp354->Spread(0.5f);
    temp354->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp354->SourceLineNumber(516);
    temp354->SourceFileName(uString::Const("MainView.ux"));
    temp355->Factor(1.4f);
    temp355->Duration(0.1);
    temp355->Target(n_5);
    temp74->SourceLineNumber(515);
    temp74->SourceFileName(uString::Const("MainView.ux"));
    temp357->Width(4.0f);
    temp357->Brush(temp358);
    temp359->StretchMode(3);
    temp359->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_5215ff54e()));
    temp360->SourceLineNumber(523);
    temp360->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp360->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), n_4);
    uPtr(n_4)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_4)->Color(::g::Uno::Float4__New2(0.9647059f, 0.8509804f, 0.6117647f, 1.0f));
    uPtr(n_4)->Aspect(1.0f);
    uPtr(n_4)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_4)->BoxSizing(4);
    uPtr(n_4)->Name(MainView::__selector37_);
    uPtr(n_4)->SourceLineNumber(524);
    uPtr(n_4)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp369);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp367);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp361);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    temp361->SourceLineNumber(525);
    temp361->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp361->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp362);
    temp362->EventName(MainView::__selector14_);
    temp362->SourceLineNumber(526);
    temp362->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp362->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp363);
    temp363->StringValue(uString::Const("n_4"));
    temp13->SourceLineNumber(530);
    temp13->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp365);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp364);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp366);
    temp364->Size(1.0f);
    temp364->Angle(135.0f);
    temp364->Distance(3.0f);
    temp364->Spread(0.5f);
    temp364->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp364->SourceLineNumber(531);
    temp364->SourceFileName(uString::Const("MainView.ux"));
    temp365->Factor(1.4f);
    temp365->Duration(0.1);
    temp365->Target(n_4);
    temp75->SourceLineNumber(530);
    temp75->SourceFileName(uString::Const("MainView.ux"));
    temp367->Width(4.0f);
    temp367->Brush(temp368);
    temp369->StretchMode(3);
    temp369->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_4215ff94f()));
    temp370->SourceLineNumber(538);
    temp370->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp370->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), s_3);
    uPtr(s_3)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_3)->Color(::g::Uno::Float4__New2(0.8705882f, 0.5372549f, 0.5137255f, 1.0f));
    uPtr(s_3)->Aspect(1.0f);
    uPtr(s_3)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_3)->BoxSizing(4);
    uPtr(s_3)->Name(MainView::__selector38_);
    uPtr(s_3)->SourceLineNumber(539);
    uPtr(s_3)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp379);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp377);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp371);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    temp371->SourceLineNumber(540);
    temp371->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp372);
    temp372->EventName(MainView::__selector14_);
    temp372->SourceLineNumber(541);
    temp372->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp372->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp373);
    temp373->StringValue(uString::Const("s_3"));
    temp14->SourceLineNumber(545);
    temp14->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp375);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp374);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp376);
    temp374->Size(1.0f);
    temp374->Angle(135.0f);
    temp374->Distance(3.0f);
    temp374->Spread(0.5f);
    temp374->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp374->SourceLineNumber(546);
    temp374->SourceFileName(uString::Const("MainView.ux"));
    temp375->Factor(1.4f);
    temp375->Duration(0.1);
    temp375->Target(s_3);
    temp76->SourceLineNumber(545);
    temp76->SourceFileName(uString::Const("MainView.ux"));
    temp377->Width(4.0f);
    temp377->Brush(temp378);
    temp379->StretchMode(3);
    temp379->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_3215ffe48()));
    temp380->SourceLineNumber(553);
    temp380->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp380->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), s_2);
    uPtr(s_2)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_2)->Color(::g::Uno::Float4__New2(0.8705882f, 0.4f, 0.3686275f, 1.0f));
    uPtr(s_2)->Aspect(1.0f);
    uPtr(s_2)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_2)->BoxSizing(4);
    uPtr(s_2)->Name(MainView::__selector39_);
    uPtr(s_2)->SourceLineNumber(554);
    uPtr(s_2)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp389);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp387);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp381);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    temp381->SourceLineNumber(555);
    temp381->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp381->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp382);
    temp382->EventName(MainView::__selector14_);
    temp382->SourceLineNumber(556);
    temp382->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp382->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp383);
    temp383->StringValue(uString::Const("s_2"));
    temp15->SourceLineNumber(560);
    temp15->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp385);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp384);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp386);
    temp384->Size(1.0f);
    temp384->Angle(135.0f);
    temp384->Distance(3.0f);
    temp384->Spread(0.5f);
    temp384->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp384->SourceLineNumber(561);
    temp384->SourceFileName(uString::Const("MainView.ux"));
    temp385->Factor(1.4f);
    temp385->Duration(0.1);
    temp385->Target(s_2);
    temp77->SourceLineNumber(560);
    temp77->SourceFileName(uString::Const("MainView.ux"));
    temp387->Width(4.0f);
    temp387->Brush(temp388);
    temp389->StretchMode(3);
    temp389->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_221600249()));
    temp390->SourceLineNumber(568);
    temp390->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp390->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), s_1);
    uPtr(s_1)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_1)->Color(::g::Uno::Float4__New2(0.8705882f, 0.2f, 0.1529412f, 1.0f));
    uPtr(s_1)->Aspect(1.0f);
    uPtr(s_1)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_1)->BoxSizing(4);
    uPtr(s_1)->Name(MainView::__selector40_);
    uPtr(s_1)->SourceLineNumber(569);
    uPtr(s_1)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp399);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp397);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp391);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    temp391->SourceLineNumber(570);
    temp391->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp391->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp392);
    temp392->EventName(MainView::__selector14_);
    temp392->SourceLineNumber(571);
    temp392->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp392->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp393);
    temp393->StringValue(uString::Const("s_1"));
    temp16->SourceLineNumber(575);
    temp16->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp395);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp394);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp396);
    temp394->Size(1.0f);
    temp394->Angle(135.0f);
    temp394->Distance(3.0f);
    temp394->Spread(0.5f);
    temp394->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp394->SourceLineNumber(576);
    temp394->SourceFileName(uString::Const("MainView.ux"));
    temp395->Factor(1.4f);
    temp395->Duration(0.1);
    temp395->Target(s_1);
    temp78->SourceLineNumber(575);
    temp78->SourceFileName(uString::Const("MainView.ux"));
    temp397->Width(4.0f);
    temp397->Brush(temp398);
    temp399->StretchMode(3);
    temp399->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_12160064a()));
    temp19->Text(uString::Const(""));
    temp19->Alignment(12);
    temp19->Margin(::g::Uno::Float4__New2(5.0f, 50.0f, 5.0f, 10.0f));
    temp19->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp19->SourceLineNumber(619);
    temp19->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp19, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp407);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp412);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb14);
    temp17->SourceLineNumber(620);
    temp17->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp400);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp401);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp403);
    temp400->Value(uString::Const("L\303\244het\303\244 t\303\244m\303\244"));
    temp400->TextAlignment(1);
    temp400->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp400->Alignment(10);
    temp400->SourceLineNumber(621);
    temp400->SourceFileName(uString::Const("MainView.ux"));
    temp401->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp401->Color(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    temp401->Layer(1);
    temp401->SourceLineNumber(622);
    temp401->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp401->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp402);
    temp402->Color(::g::Uno::Float4__New2(0.2470588f, 0.8352941f, 0.9215686f, 1.0f));
    temp402->Width(1.0f);
    temp402->Alignment(2);
    temp79->SourceLineNumber(620);
    temp79->SourceFileName(uString::Const("MainView.ux"));
    temp18->SourceLineNumber(626);
    temp18->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp404);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp405);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp406);
    temp404->Value(uString::Const("Lis\303\244\303\244 teksti ja valitse mieliala"));
    temp404->TextAlignment(1);
    temp404->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp404->Alignment(10);
    temp404->SourceLineNumber(627);
    temp404->SourceFileName(uString::Const("MainView.ux"));
    temp405->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp405->Color(::g::Uno::Float4__New2(0.5490196f, 0.8980392f, 0.9568627f, 1.0f));
    temp405->Layer(1);
    temp405->SourceLineNumber(628);
    temp405->SourceFileName(uString::Const("MainView.ux"));
    temp80->SourceLineNumber(626);
    temp80->SourceFileName(uString::Const("MainView.ux"));
    temp407->SourceLineNumber(630);
    temp407->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp407->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp408);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp407->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp409);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp407->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp410);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp407->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp411);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp408, uCRef(false));
    temp408->SourceLineNumber(631);
    temp408->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp409, uCRef<int32_t>(0));
    temp409->SourceLineNumber(632);
    temp409->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp410, uCRef<int32_t>(1));
    temp410->SourceLineNumber(633);
    temp410->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp411, uCRef<int32_t>(1));
    temp411->SourceLineNumber(634);
    temp411->SourceFileName(uString::Const("MainView.ux"));
    temp81->SourceLineNumber(619);
    temp81->SourceFileName(uString::Const("MainView.ux"));
    temp82->SourceLineNumber(619);
    temp82->SourceFileName(uString::Const("MainView.ux"));
    temp415->SourceLineNumber(639);
    temp415->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp415, 3);
    temp83->SourceLineNumber(419);
    temp83->SourceFileName(uString::Const("MainView.ux"));
    uPtr(sleep_calendar)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(sleep_calendar)->Opacity(0.0f);
    uPtr(sleep_calendar)->Name(MainView::__selector41_);
    uPtr(sleep_calendar)->SourceLineNumber(646);
    uPtr(sleep_calendar)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp420);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp424);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp548);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp549);
    temp20->SourceLineNumber(647);
    temp20->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp418);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp419);
    ::g::Fuse::Animations::Change__set_Value_fn(temp418, uCRef(1.0f));
    temp418->Duration(0.4);
    temp418->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp84->SourceLineNumber(647);
    temp84->SourceFileName(uString::Const("MainView.ux"));
    temp420->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp420->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp420->SourceLineNumber(650);
    temp420->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp420, 2);
    temp420->Background(temp423);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp420->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp421);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp420->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp422);
    temp421->Value(uString::Const("Unip\303\244iv\303\244kirja"));
    temp421->FontSize(21.0f);
    temp421->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp421->Alignment(10);
    temp421->SourceLineNumber(651);
    temp421->SourceFileName(uString::Const("MainView.ux"));
    temp422->Angle(90.0f);
    temp422->Distance(2.0f);
    temp422->Size(6.0f);
    temp422->Color(::g::Uno::Float4__New2(0.09411765f, 0.3490196f, 0.4352941f, 1.0f));
    temp422->SourceLineNumber(652);
    temp422->SourceFileName(uString::Const("MainView.ux"));
    temp424->SourceLineNumber(654);
    temp424->SourceFileName(uString::Const("MainView.ux"));
    temp424->Background(temp547);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp424->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp425);
    temp425->SourceLineNumber(655);
    temp425->SourceFileName(uString::Const("MainView.ux"));
    temp425->Background(temp546);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp426);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp440);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp454);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp489);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp499);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp513);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp523);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp425->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    temp426->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp426->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 5.0f));
    temp426->SourceLineNumber(658);
    temp426->SourceFileName(uString::Const("MainView.ux"));
    temp426->Background(temp439);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp426->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp427);
    temp427->Rows(uString::Const("1*"));
    temp427->RowCount(1);
    temp427->Columns(uString::Const("5*,5*"));
    temp427->ColumnCount(2);
    temp427->CellSpacing(0.0f);
    temp427->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp427->SourceLineNumber(659);
    temp427->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp427->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp428);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp427->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp430);
    temp428->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp428->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp428->SourceLineNumber(660);
    temp428->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp428->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp429);
    temp429->Value(uString::Const("Menin s\303\244nkyyn: "));
    temp429->TextAlignment(0);
    temp429->Alignment(9);
    temp429->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp429->SourceLineNumber(661);
    temp429->SourceFileName(uString::Const("MainView.ux"));
    temp430->SourceLineNumber(663);
    temp430->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp430->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp431);
    temp431->Orientation(0);
    temp431->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp431->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp431->SourceLineNumber(682);
    temp431->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp431->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp431->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp435);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp431->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    temp22->InactiveState(2);
    temp22->Orientation(1);
    temp22->Transition(1);
    temp22->IsRouterOutlet(false);
    temp22->SourceLineNumber(683);
    temp22->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp434);
    temp21->SourceLineNumber(684);
    temp21->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp432);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp433);
    temp85->SourceLineNumber(684);
    temp85->SourceFileName(uString::Const("MainView.ux"));
    temp86->SourceLineNumber(683);
    temp86->SourceFileName(uString::Const("MainView.ux"));
    temp435->Value(uString::Const(":"));
    temp435->FontSize(22.0f);
    temp435->Alignment(10);
    temp435->SourceLineNumber(688);
    temp435->SourceFileName(uString::Const("MainView.ux"));
    temp24->InactiveState(2);
    temp24->Orientation(1);
    temp24->Transition(1);
    temp24->IsRouterOutlet(false);
    temp24->SourceLineNumber(689);
    temp24->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp438);
    temp23->SourceLineNumber(690);
    temp23->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp436);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp437);
    temp87->SourceLineNumber(690);
    temp87->SourceFileName(uString::Const("MainView.ux"));
    temp88->SourceLineNumber(689);
    temp88->SourceFileName(uString::Const("MainView.ux"));
    temp440->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp440->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp440->SourceLineNumber(698);
    temp440->SourceFileName(uString::Const("MainView.ux"));
    temp440->Background(temp453);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp440->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp441);
    temp441->Rows(uString::Const("1*"));
    temp441->RowCount(1);
    temp441->Columns(uString::Const("5*,5*"));
    temp441->ColumnCount(2);
    temp441->CellSpacing(0.0f);
    temp441->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp441->SourceLineNumber(699);
    temp441->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp441->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp442);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp441->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp444);
    temp442->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp442->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp442->SourceLineNumber(700);
    temp442->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp442->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp443);
    temp443->Value(uString::Const("Aloin nukkumaan:"));
    temp443->TextAlignment(0);
    temp443->Alignment(9);
    temp443->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp443->SourceLineNumber(701);
    temp443->SourceFileName(uString::Const("MainView.ux"));
    temp444->SourceLineNumber(703);
    temp444->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp444->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp445);
    temp445->Orientation(0);
    temp445->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp445->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp445->SourceLineNumber(722);
    temp445->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp449);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp28);
    temp26->InactiveState(2);
    temp26->Orientation(1);
    temp26->Transition(1);
    temp26->IsRouterOutlet(false);
    temp26->SourceLineNumber(723);
    temp26->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp448);
    temp25->SourceLineNumber(724);
    temp25->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp446);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp447);
    temp89->SourceLineNumber(724);
    temp89->SourceFileName(uString::Const("MainView.ux"));
    temp90->SourceLineNumber(723);
    temp90->SourceFileName(uString::Const("MainView.ux"));
    temp449->Value(uString::Const(":"));
    temp449->FontSize(22.0f);
    temp449->Alignment(10);
    temp449->SourceLineNumber(728);
    temp449->SourceFileName(uString::Const("MainView.ux"));
    temp28->InactiveState(2);
    temp28->Orientation(1);
    temp28->Transition(1);
    temp28->IsRouterOutlet(false);
    temp28->SourceLineNumber(729);
    temp28->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp452);
    temp27->SourceLineNumber(730);
    temp27->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp450);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp451);
    temp91->SourceLineNumber(730);
    temp91->SourceFileName(uString::Const("MainView.ux"));
    temp92->SourceLineNumber(729);
    temp92->SourceFileName(uString::Const("MainView.ux"));
    temp454->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp454->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp454->SourceLineNumber(738);
    temp454->SourceFileName(uString::Const("MainView.ux"));
    temp454->Background(temp488);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp454->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp455);
    temp455->Rows(uString::Const("1*"));
    temp455->RowCount(1);
    temp455->Columns(uString::Const("4*,2*,2*,2*"));
    temp455->ColumnCount(4);
    temp455->CellSpacing(0.0f);
    temp455->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp455->SourceLineNumber(739);
    temp455->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp455->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp456);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp455->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp458);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp455->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp468);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp455->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp478);
    temp456->SourceLineNumber(740);
    temp456->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp456->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp457);
    temp457->Value(uString::Const("Unen laatu:"));
    temp457->TextAlignment(0);
    temp457->Alignment(9);
    temp457->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp457->SourceLineNumber(741);
    temp457->SourceFileName(uString::Const("MainView.ux"));
    temp458->SourceLineNumber(743);
    temp458->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp458->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sleep_9);
    uPtr(sleep_9)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(sleep_9)->Color(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    uPtr(sleep_9)->Aspect(1.0f);
    uPtr(sleep_9)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(sleep_9)->BoxSizing(4);
    uPtr(sleep_9)->Name(MainView::__selector42_);
    uPtr(sleep_9)->SourceLineNumber(744);
    uPtr(sleep_9)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_9)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp467);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_9)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp465);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_9)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp459);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_9)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    temp459->SourceLineNumber(745);
    temp459->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp459->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp460);
    temp460->EventName(MainView::__selector15_);
    temp460->SourceLineNumber(746);
    temp460->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp460->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp461);
    temp461->StringValue(uString::Const("sleep_9"));
    temp29->SourceLineNumber(750);
    temp29->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp463);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp462);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp464);
    temp462->Size(1.0f);
    temp462->Angle(135.0f);
    temp462->Distance(3.0f);
    temp462->Spread(0.5f);
    temp462->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp462->SourceLineNumber(751);
    temp462->SourceFileName(uString::Const("MainView.ux"));
    temp463->Factor(1.4f);
    temp463->Duration(0.1);
    temp463->Target(sleep_9);
    temp93->SourceLineNumber(750);
    temp93->SourceFileName(uString::Const("MainView.ux"));
    temp465->Width(4.0f);
    temp465->Brush(temp466);
    temp467->StretchMode(3);
    temp467->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_921602852()));
    temp468->SourceLineNumber(758);
    temp468->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp468->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sleep_6);
    uPtr(sleep_6)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(sleep_6)->Color(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    uPtr(sleep_6)->Aspect(1.0f);
    uPtr(sleep_6)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(sleep_6)->BoxSizing(4);
    uPtr(sleep_6)->Name(MainView::__selector43_);
    uPtr(sleep_6)->SourceLineNumber(759);
    uPtr(sleep_6)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_6)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp477);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_6)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp475);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_6)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp469);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_6)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    temp469->SourceLineNumber(760);
    temp469->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp469->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp470);
    temp470->EventName(MainView::__selector15_);
    temp470->SourceLineNumber(761);
    temp470->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp470->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp471);
    temp471->StringValue(uString::Const("sleep_6"));
    temp30->SourceLineNumber(765);
    temp30->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp473);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp472);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp474);
    temp472->Size(1.0f);
    temp472->Angle(135.0f);
    temp472->Distance(3.0f);
    temp472->Spread(0.5f);
    temp472->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp472->SourceLineNumber(766);
    temp472->SourceFileName(uString::Const("MainView.ux"));
    temp473->Factor(1.4f);
    temp473->Duration(0.1);
    temp473->Target(sleep_6);
    temp94->SourceLineNumber(765);
    temp94->SourceFileName(uString::Const("MainView.ux"));
    temp475->Width(4.0f);
    temp475->Brush(temp476);
    temp477->StretchMode(3);
    temp477->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_6215ff14d()));
    temp478->SourceLineNumber(773);
    temp478->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp478->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sleep_3);
    uPtr(sleep_3)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(sleep_3)->Color(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    uPtr(sleep_3)->Aspect(1.0f);
    uPtr(sleep_3)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(sleep_3)->BoxSizing(4);
    uPtr(sleep_3)->Name(MainView::__selector44_);
    uPtr(sleep_3)->SourceLineNumber(774);
    uPtr(sleep_3)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_3)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL)), temp487);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_3)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp485);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp479);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    temp479->SourceLineNumber(775);
    temp479->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp479->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp480);
    temp480->EventName(MainView::__selector15_);
    temp480->SourceLineNumber(776);
    temp480->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp480->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp481);
    temp481->StringValue(uString::Const("sleep_3"));
    temp31->SourceLineNumber(780);
    temp31->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp483);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp482);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp484);
    temp482->Size(1.0f);
    temp482->Angle(135.0f);
    temp482->Distance(3.0f);
    temp482->Spread(0.5f);
    temp482->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp482->SourceLineNumber(781);
    temp482->SourceFileName(uString::Const("MainView.ux"));
    temp483->Factor(1.4f);
    temp483->Duration(0.1);
    temp483->Target(sleep_3);
    temp95->SourceLineNumber(780);
    temp95->SourceFileName(uString::Const("MainView.ux"));
    temp485->Width(4.0f);
    temp485->Brush(temp486);
    temp487->StretchMode(3);
    temp487->File(::g::Uno::UX::BundleFileSource::New1(::g::Kalenteri_bundle::_3215ffe48()));
    temp489->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp489->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp489->SourceLineNumber(790);
    temp489->SourceFileName(uString::Const("MainView.ux"));
    temp489->Background(temp498);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp489->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp490);
    temp490->Rows(uString::Const("1*"));
    temp490->RowCount(1);
    temp490->Columns(uString::Const("5*,5*"));
    temp490->ColumnCount(2);
    temp490->CellSpacing(0.0f);
    temp490->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp490->SourceLineNumber(791);
    temp490->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp490->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp491);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp490->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp493);
    temp491->SourceLineNumber(792);
    temp491->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp491->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp492);
    temp492->Value(uString::Const("Her\303\244ilin y\303\266ll\303\244:"));
    temp492->TextAlignment(0);
    temp492->Alignment(9);
    temp492->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp492->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp492->SourceLineNumber(793);
    temp492->SourceFileName(uString::Const("MainView.ux"));
    temp493->SourceLineNumber(795);
    temp493->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp493->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp494);
    temp494->SourceLineNumber(796);
    temp494->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp494->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp495);
    temp495->SourceLineNumber(797);
    temp495->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp495->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp496);
    temp496->EventName(MainView::__selector16_);
    temp496->SourceLineNumber(798);
    temp496->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp496->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp497);
    temp497->StringValue(uString::Const("sleep_quality"));
    temp499->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp499->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp499->SourceLineNumber(806);
    temp499->SourceFileName(uString::Const("MainView.ux"));
    temp499->Background(temp512);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp499->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp500);
    temp500->Rows(uString::Const("1*"));
    temp500->RowCount(1);
    temp500->Columns(uString::Const("5*,5*"));
    temp500->ColumnCount(2);
    temp500->CellSpacing(0.0f);
    temp500->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp500->SourceLineNumber(807);
    temp500->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp500->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp501);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp500->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp503);
    temp501->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp501->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp501->SourceLineNumber(808);
    temp501->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp501->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp502);
    temp502->Value(uString::Const("Her\303\244sin:"));
    temp502->TextAlignment(0);
    temp502->Alignment(9);
    temp502->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp502->SourceLineNumber(809);
    temp502->SourceFileName(uString::Const("MainView.ux"));
    temp503->SourceLineNumber(811);
    temp503->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp503->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp504);
    temp504->Orientation(0);
    temp504->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp504->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp504->SourceLineNumber(830);
    temp504->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp504->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp504->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp508);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp504->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    temp33->InactiveState(2);
    temp33->Orientation(1);
    temp33->Transition(1);
    temp33->IsRouterOutlet(false);
    temp33->SourceLineNumber(831);
    temp33->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp507);
    temp32->SourceLineNumber(832);
    temp32->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp505);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp506);
    temp96->SourceLineNumber(832);
    temp96->SourceFileName(uString::Const("MainView.ux"));
    temp97->SourceLineNumber(831);
    temp97->SourceFileName(uString::Const("MainView.ux"));
    temp508->Value(uString::Const(":"));
    temp508->FontSize(22.0f);
    temp508->Alignment(10);
    temp508->SourceLineNumber(836);
    temp508->SourceFileName(uString::Const("MainView.ux"));
    temp35->InactiveState(2);
    temp35->Orientation(1);
    temp35->Transition(1);
    temp35->IsRouterOutlet(false);
    temp35->SourceLineNumber(837);
    temp35->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp511);
    temp34->SourceLineNumber(838);
    temp34->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp509);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp510);
    temp98->SourceLineNumber(838);
    temp98->SourceFileName(uString::Const("MainView.ux"));
    temp99->SourceLineNumber(837);
    temp99->SourceFileName(uString::Const("MainView.ux"));
    temp513->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp513->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp513->SourceLineNumber(846);
    temp513->SourceFileName(uString::Const("MainView.ux"));
    temp513->Background(temp522);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp513->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp514);
    temp514->Rows(uString::Const("1*"));
    temp514->RowCount(1);
    temp514->Columns(uString::Const("5*,5*"));
    temp514->ColumnCount(2);
    temp514->CellSpacing(0.0f);
    temp514->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp514->SourceLineNumber(847);
    temp514->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp514->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp515);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp514->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp517);
    temp515->SourceLineNumber(848);
    temp515->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp515->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp516);
    temp516->Value(uString::Const("Otin p\303\244iv\303\244torkut:"));
    temp516->TextAlignment(0);
    temp516->Alignment(9);
    temp516->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp516->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp516->SourceLineNumber(849);
    temp516->SourceFileName(uString::Const("MainView.ux"));
    temp517->SourceLineNumber(851);
    temp517->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp517->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp518);
    temp518->SourceLineNumber(852);
    temp518->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp518->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp519);
    temp519->SourceLineNumber(853);
    temp519->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp519->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp520);
    temp520->EventName(MainView::__selector16_);
    temp520->SourceLineNumber(854);
    temp520->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp520->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp521);
    temp521->StringValue(uString::Const("sleep_naps"));
    temp523->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp523->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp523->SourceLineNumber(862);
    temp523->SourceFileName(uString::Const("MainView.ux"));
    temp523->Background(temp532);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp523->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp524);
    temp524->Rows(uString::Const("1*"));
    temp524->RowCount(1);
    temp524->Columns(uString::Const("5*,5*"));
    temp524->ColumnCount(2);
    temp524->CellSpacing(0.0f);
    temp524->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp524->SourceLineNumber(863);
    temp524->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp524->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp525);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp524->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp527);
    temp525->SourceLineNumber(864);
    temp525->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp525->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp526);
    temp526->Value(uString::Const("Olin v\303\244synyt p\303\244iv\303\244ll\303\244:"));
    temp526->TextAlignment(0);
    temp526->Alignment(9);
    temp526->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp526->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp526->SourceLineNumber(865);
    temp526->SourceFileName(uString::Const("MainView.ux"));
    temp527->SourceLineNumber(867);
    temp527->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp527->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp528);
    temp528->SourceLineNumber(868);
    temp528->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp528->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp529);
    temp529->SourceLineNumber(869);
    temp529->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp529->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp530);
    temp530->EventName(MainView::__selector16_);
    temp530->SourceLineNumber(870);
    temp530->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp530->ArgList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL)), temp531);
    temp531->StringValue(uString::Const("sleep_tired"));
    temp38->Text(uString::Const(""));
    temp38->Margin(::g::Uno::Float4__New2(5.0f, 20.0f, 5.0f, 20.0f));
    temp38->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp38->SourceLineNumber(878);
    temp38->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp38, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp540);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp545);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb21);
    temp36->SourceLineNumber(879);
    temp36->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp533);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp534);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp536);
    temp533->Value(uString::Const("L\303\244het\303\244"));
    temp533->TextAlignment(1);
    temp533->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp533->Alignment(10);
    temp533->SourceLineNumber(880);
    temp533->SourceFileName(uString::Const("MainView.ux"));
    temp534->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp534->Color(::g::Uno::Float4__New2(0.003921569f, 0.6039216f, 0.7490196f, 1.0f));
    temp534->Layer(1);
    temp534->SourceLineNumber(881);
    temp534->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp534->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp535);
    temp535->Color(::g::Uno::Float4__New2(0.2470588f, 0.8352941f, 0.9215686f, 1.0f));
    temp535->Width(1.0f);
    temp535->Alignment(2);
    temp100->SourceLineNumber(879);
    temp100->SourceFileName(uString::Const("MainView.ux"));
    temp37->SourceLineNumber(885);
    temp37->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp537);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp538);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp539);
    temp537->Value(uString::Const("T\303\244yt\303\244 kaikki tiedot"));
    temp537->TextAlignment(1);
    temp537->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp537->Alignment(10);
    temp537->SourceLineNumber(886);
    temp537->SourceFileName(uString::Const("MainView.ux"));
    temp538->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp538->Color(::g::Uno::Float4__New2(0.5490196f, 0.8980392f, 0.9568627f, 1.0f));
    temp538->Layer(1);
    temp538->SourceLineNumber(887);
    temp538->SourceFileName(uString::Const("MainView.ux"));
    temp101->SourceLineNumber(885);
    temp101->SourceFileName(uString::Const("MainView.ux"));
    temp540->SourceLineNumber(889);
    temp540->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp540->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp541);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp540->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp542);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp540->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp543);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp540->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp544);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp541, uCRef(false));
    temp541->SourceLineNumber(890);
    temp541->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp542, uCRef<int32_t>(0));
    temp542->SourceLineNumber(891);
    temp542->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp543, uCRef<int32_t>(1));
    temp543->SourceLineNumber(892);
    temp543->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp544, uCRef<int32_t>(1));
    temp544->SourceLineNumber(893);
    temp544->SourceFileName(uString::Const("MainView.ux"));
    temp102->SourceLineNumber(878);
    temp102->SourceFileName(uString::Const("MainView.ux"));
    temp103->SourceLineNumber(878);
    temp103->SourceFileName(uString::Const("MainView.ux"));
    temp548->SourceLineNumber(929);
    temp548->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp548, 3);
    temp104->SourceLineNumber(646);
    temp104->SourceFileName(uString::Const("MainView.ux"));
    uPtr(eating_calendar)->Opacity(0.0f);
    uPtr(eating_calendar)->Name(MainView::__selector45_);
    uPtr(eating_calendar)->SourceLineNumber(932);
    uPtr(eating_calendar)->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp552);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp556);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp559);
    temp39->SourceLineNumber(933);
    temp39->SourceFileName(uString::Const("MainView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp550);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp551);
    ::g::Fuse::Animations::Change__set_Value_fn(temp550, uCRef(1.0f));
    temp550->Duration(0.4);
    temp550->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp105->SourceLineNumber(933);
    temp105->SourceFileName(uString::Const("MainView.ux"));
    temp552->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp552->SourceLineNumber(936);
    temp552->SourceFileName(uString::Const("MainView.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp552, 2);
    temp552->Background(temp555);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp552->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp553);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp552->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp554);
    temp553->Value(uString::Const("Eating content"));
    temp553->FontSize(21.0f);
    temp553->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp553->Alignment(10);
    temp553->SourceLineNumber(937);
    temp553->SourceFileName(uString::Const("MainView.ux"));
    temp554->Angle(90.0f);
    temp554->Distance(2.0f);
    temp554->Size(6.0f);
    temp554->Color(::g::Uno::Float4__New2(0.09411765f, 0.3490196f, 0.4352941f, 1.0f));
    temp554->SourceLineNumber(938);
    temp554->SourceFileName(uString::Const("MainView.ux"));
    temp556->SourceLineNumber(940);
    temp556->SourceFileName(uString::Const("MainView.ux"));
    temp556->Background(temp558);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp556->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp557);
    temp557->Value(uString::Const("Set calendar layout"));
    temp557->FontSize(21.0f);
    temp557->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp557->Alignment(10);
    temp557->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 60.0f));
    temp557->SourceLineNumber(942);
    temp557->SourceFileName(uString::Const("MainView.ux"));
    temp106->SourceLineNumber(932);
    temp106->SourceFileName(uString::Const("MainView.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), LinkButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), MoodEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), MoodEvent_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), ToggleEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), menu_is_open);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), popup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), box);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidePage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), normalMenuItems);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), home_page);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), web_view_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), wv);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), extra_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), mood_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sleep_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), eat_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), mood_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h_9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h_8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h_7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), n_6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), n_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), n_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), s_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), s_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), s_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sleep_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sleep_9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sleep_6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sleep_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), eating_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), LinkButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), MoodEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), MoodEvent_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ToggleEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp115);
}

// public MainView New() [static] :535
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
