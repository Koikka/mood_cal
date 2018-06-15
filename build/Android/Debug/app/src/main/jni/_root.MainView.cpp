// This file was generated based on '.uno/ux14/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hamburger.h>
#include <_root.MainView.h>
#include <_root.MenuButton.h>
#include <_root.mood_calendar_bundle.h>
#include <_root.mood_calendar_F-414d2f91.h>
#include <_root.mood_calendar_F-4ddbedff.h>
#include <_root.mood_calendar_F-9275aa33.h>
#include <_root.mood_calendar_F-92762d87.h>
#include <_root.mood_calendar_F-a38dff36.h>
#include <_root.mood_calendar_F-b7100a81.h>
#include <_root.mood_calendar_F-ea7a5c2c.h>
#include <_root.mood_calendar_F-f11d0779.h>
#include <_root.mood_calendar_H-31d9fdf0.h>
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
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInp-e41606bc.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
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
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
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
#include <Uno.UX.Unit.h>
static uString* STRINGS[191];
static uType* TYPES[18];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :150
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
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 41, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"ButtonEvent"*/], ::STRINGS[2/*"temp_eb0"*/], ::STRINGS[3/*"MoodEvent"*/], ::STRINGS[4/*"temp_eb1"*/], ::STRINGS[5/*"menu_is_open"*/], ::STRINGS[6/*"popup"*/], ::STRINGS[7/*"temp_eb2"*/], ::STRINGS[8/*"hamburger"*/], ::STRINGS[9/*"temp_eb3"*/], ::STRINGS[10/*"box"*/], ::STRINGS[11/*"sidePage"*/], ::STRINGS[12/*"menu"*/], ::STRINGS[13/*"normalMenuI...*/], ::STRINGS[14/*"temp_eb4"*/], ::STRINGS[15/*"temp_eb5"*/], ::STRINGS[16/*"temp_eb6"*/], ::STRINGS[17/*"home_page"*/], ::STRINGS[18/*"temp_eb7"*/], ::STRINGS[19/*"web_view_co...*/], ::STRINGS[20/*"temp_eb8"*/], ::STRINGS[21/*"wv"*/], ::STRINGS[22/*"extra_content"*/], ::STRINGS[23/*"temp_eb9"*/], ::STRINGS[24/*"mood_contai...*/], ::STRINGS[25/*"sleep_conta...*/], ::STRINGS[26/*"eat_container"*/], ::STRINGS[27/*"mood_calendar"*/], ::STRINGS[28/*"temp_eb10"*/], ::STRINGS[29/*"h_9"*/], ::STRINGS[30/*"h_8"*/], ::STRINGS[31/*"h_7"*/], ::STRINGS[32/*"n_6"*/], ::STRINGS[33/*"n_5"*/], ::STRINGS[34/*"n_4"*/], ::STRINGS[35/*"s_3"*/], ::STRINGS[36/*"s_2"*/], ::STRINGS[37/*"s_1"*/], ::STRINGS[38/*"temp_eb11"*/], ::STRINGS[39/*"sleep_calen...*/], ::STRINGS[40/*"eating_cale...*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"Opacity"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"IsOpen"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"Value"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"Visibility"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"Url"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[46/*"Color"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[47/*"IsEnabled"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ButtonEvent"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"MoodEvent"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"menu_is_open"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"popup"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"hamburger"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"box"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"sidePage"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"menu"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"normalMenuI...*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"home_page"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"web_view_co...*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"wv"*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"extra_content"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"mood_contai...*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"sleep_conta...*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"eat_container"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"mood_calendar"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"h_9"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"h_8"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"h_7"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"n_6"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"n_5"*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"n_4"*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"s_3"*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"s_2"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"s_1"*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"sleep_calen...*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"eating_cale...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), ::STRINGS[48/*"Device"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[49/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[50/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[51/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[52/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[53/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[54/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[55/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[56/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[57/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[58/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[59/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[60/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[61/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[62/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[63/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[64/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[65/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[66/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[67/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[68/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[69/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[70/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[71/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[72/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[73/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[74/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[75/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[76/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[77/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[78/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[79/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[80/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[80/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[81/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[81/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[82/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[82/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[83/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[83/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[84/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[84/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[85/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[85/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[86/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[86/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[87/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[87/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[88/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[88/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[89/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[89/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[90/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[90/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[91/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[91/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[92/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[92/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[93/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[93/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[94/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[94/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[95/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[95/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[96/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[96/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[97/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[98/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[99/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[100/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[101/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[102/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[103/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[104/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[105/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[105/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[106/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[107/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[107/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[108/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[109/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[110/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[110/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[111/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[112/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[113/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[114/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[115/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[116/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[117/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[118/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[119/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[120/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[121/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[122/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[123/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[124/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[125/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[126/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[127/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[128/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[129/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[130/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[131/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[132/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[133/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[134/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[135/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BackgroundColor_), ::STRINGS[136/*"BackgroundC...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::ForegroundColor_), ::STRINGS[137/*"ForegroundC...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::SpecialColor_), ::STRINGS[138/*"SpecialColor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::UX::Size_typeof(), MainView::MenuItemHeight_), ::STRINGS[139/*"MenuItemHei...*/]);
    MainView::BackgroundColor_ = ::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f);
    MainView::ForegroundColor_ = ::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f);
    MainView::SpecialColor_ = ::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f);
    MainView::MenuItemHeight_ = ::g::Uno::UX::Size__New1(40.0f, 1);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BackgroundColor_), ::STRINGS[136/*"BackgroundC...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::ForegroundColor_), ::STRINGS[137/*"ForegroundC...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::SpecialColor_), ::STRINGS[138/*"SpecialColor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::UX::Size_typeof(), MainView::MenuItemHeight_), ::STRINGS[139/*"MenuItemHei...*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("ButtonEvent");
    ::STRINGS[2] = uString::Const("temp_eb0");
    ::STRINGS[3] = uString::Const("MoodEvent");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("menu_is_open");
    ::STRINGS[6] = uString::Const("popup");
    ::STRINGS[7] = uString::Const("temp_eb2");
    ::STRINGS[8] = uString::Const("hamburger");
    ::STRINGS[9] = uString::Const("temp_eb3");
    ::STRINGS[10] = uString::Const("box");
    ::STRINGS[11] = uString::Const("sidePage");
    ::STRINGS[12] = uString::Const("menu");
    ::STRINGS[13] = uString::Const("normalMenuItems");
    ::STRINGS[14] = uString::Const("temp_eb4");
    ::STRINGS[15] = uString::Const("temp_eb5");
    ::STRINGS[16] = uString::Const("temp_eb6");
    ::STRINGS[17] = uString::Const("home_page");
    ::STRINGS[18] = uString::Const("temp_eb7");
    ::STRINGS[19] = uString::Const("web_view_content");
    ::STRINGS[20] = uString::Const("temp_eb8");
    ::STRINGS[21] = uString::Const("wv");
    ::STRINGS[22] = uString::Const("extra_content");
    ::STRINGS[23] = uString::Const("temp_eb9");
    ::STRINGS[24] = uString::Const("mood_container");
    ::STRINGS[25] = uString::Const("sleep_container");
    ::STRINGS[26] = uString::Const("eat_container");
    ::STRINGS[27] = uString::Const("mood_calendar");
    ::STRINGS[28] = uString::Const("temp_eb10");
    ::STRINGS[29] = uString::Const("h_9");
    ::STRINGS[30] = uString::Const("h_8");
    ::STRINGS[31] = uString::Const("h_7");
    ::STRINGS[32] = uString::Const("n_6");
    ::STRINGS[33] = uString::Const("n_5");
    ::STRINGS[34] = uString::Const("n_4");
    ::STRINGS[35] = uString::Const("s_3");
    ::STRINGS[36] = uString::Const("s_2");
    ::STRINGS[37] = uString::Const("s_1");
    ::STRINGS[38] = uString::Const("temp_eb11");
    ::STRINGS[39] = uString::Const("sleep_calendar");
    ::STRINGS[40] = uString::Const("eating_calendar");
    ::STRINGS[41] = uString::Const("Opacity");
    ::STRINGS[42] = uString::Const("IsOpen");
    ::STRINGS[43] = uString::Const("Value");
    ::STRINGS[44] = uString::Const("Visibility");
    ::STRINGS[45] = uString::Const("Url");
    ::STRINGS[46] = uString::Const("Color");
    ::STRINGS[47] = uString::Const("IsEnabled");
    ::STRINGS[48] = uString::Const("Device");
    ::STRINGS[49] = uString::Const("Linear");
    ::STRINGS[50] = uString::Const("QuadraticIn");
    ::STRINGS[51] = uString::Const("QuadraticOut");
    ::STRINGS[52] = uString::Const("QuadraticInOut");
    ::STRINGS[53] = uString::Const("CubicIn");
    ::STRINGS[54] = uString::Const("CubicOut");
    ::STRINGS[55] = uString::Const("CubicInOut");
    ::STRINGS[56] = uString::Const("QuarticIn");
    ::STRINGS[57] = uString::Const("QuarticOut");
    ::STRINGS[58] = uString::Const("QuarticInOut");
    ::STRINGS[59] = uString::Const("QuinticIn");
    ::STRINGS[60] = uString::Const("QuinticOut");
    ::STRINGS[61] = uString::Const("QuinticInOut");
    ::STRINGS[62] = uString::Const("SinusoidalIn");
    ::STRINGS[63] = uString::Const("SinusoidalOut");
    ::STRINGS[64] = uString::Const("SinusoidalInOut");
    ::STRINGS[65] = uString::Const("ExponentialIn");
    ::STRINGS[66] = uString::Const("ExponentialOut");
    ::STRINGS[67] = uString::Const("ExponentialInOut");
    ::STRINGS[68] = uString::Const("CircularIn");
    ::STRINGS[69] = uString::Const("CircularOut");
    ::STRINGS[70] = uString::Const("CircularInOut");
    ::STRINGS[71] = uString::Const("ElasticIn");
    ::STRINGS[72] = uString::Const("ElasticOut");
    ::STRINGS[73] = uString::Const("ElasticInOut");
    ::STRINGS[74] = uString::Const("BackIn");
    ::STRINGS[75] = uString::Const("BackOut");
    ::STRINGS[76] = uString::Const("BackInOut");
    ::STRINGS[77] = uString::Const("BounceIn");
    ::STRINGS[78] = uString::Const("BounceOut");
    ::STRINGS[79] = uString::Const("BounceInOut");
    ::STRINGS[80] = uString::Const("Transparent");
    ::STRINGS[81] = uString::Const("Black");
    ::STRINGS[82] = uString::Const("Silver");
    ::STRINGS[83] = uString::Const("Gray");
    ::STRINGS[84] = uString::Const("White");
    ::STRINGS[85] = uString::Const("Maroon");
    ::STRINGS[86] = uString::Const("Red");
    ::STRINGS[87] = uString::Const("Purple");
    ::STRINGS[88] = uString::Const("Fuchsia");
    ::STRINGS[89] = uString::Const("Green");
    ::STRINGS[90] = uString::Const("Lime");
    ::STRINGS[91] = uString::Const("Olive");
    ::STRINGS[92] = uString::Const("Yellow");
    ::STRINGS[93] = uString::Const("Navy");
    ::STRINGS[94] = uString::Const("Blue");
    ::STRINGS[95] = uString::Const("Teal");
    ::STRINGS[96] = uString::Const("Aqua");
    ::STRINGS[97] = uString::Const("TopLeft");
    ::STRINGS[98] = uString::Const("Center");
    ::STRINGS[99] = uString::Const("Anchor");
    ::STRINGS[100] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[101] = uString::Const("VerticalBoxCenter");
    ::STRINGS[102] = uString::Const("TransformOriginOffset");
    ::STRINGS[103] = uString::Const("PositionOffset");
    ::STRINGS[104] = uString::Const("SizeFactor");
    ::STRINGS[105] = uString::Const("Size");
    ::STRINGS[106] = uString::Const("GiveFocus");
    ::STRINGS[107] = uString::Const("LayoutChange");
    ::STRINGS[108] = uString::Const("WorldPositionChange");
    ::STRINGS[109] = uString::Const("PositionChange");
    ::STRINGS[110] = uString::Const("SizeChange");
    ::STRINGS[111] = uString::Const("Keyboard");
    ::STRINGS[112] = uString::Const("Points");
    ::STRINGS[113] = uString::Const("Pixels");
    ::STRINGS[114] = uString::Const("ContentSize");
    ::STRINGS[115] = uString::Const("ScrollViewSize");
    ::STRINGS[116] = uString::Const("PreloadRetain");
    ::STRINGS[117] = uString::Const("UnloadUnused");
    ::STRINGS[118] = uString::Const("QuickUnload");
    ::STRINGS[119] = uString::Const("UnloadInBackground");
    ::STRINGS[120] = uString::Const("Thin");
    ::STRINGS[121] = uString::Const("Light");
    ::STRINGS[122] = uString::Const("Regular");
    ::STRINGS[123] = uString::Const("Medium");
    ::STRINGS[124] = uString::Const("Bold");
    ::STRINGS[125] = uString::Const("ThinItalic");
    ::STRINGS[126] = uString::Const("LightItalic");
    ::STRINGS[127] = uString::Const("Italic");
    ::STRINGS[128] = uString::Const("MediumItalic");
    ::STRINGS[129] = uString::Const("BoldItalic");
    ::STRINGS[130] = uString::Const("PlatformDefault");
    ::STRINGS[131] = uString::Const("Identity");
    ::STRINGS[132] = uString::Const("Local");
    ::STRINGS[133] = uString::Const("ParentSize");
    ::STRINGS[134] = uString::Const("Width");
    ::STRINGS[135] = uString::Const("Height");
    ::STRINGS[136] = uString::Const("BackgroundColor");
    ::STRINGS[137] = uString::Const("ForegroundColor");
    ::STRINGS[138] = uString::Const("SpecialColor");
    ::STRINGS[139] = uString::Const("MenuItemHeight");
    ::STRINGS[140] = uString::Const("execute_button_select");
    ::STRINGS[141] = uString::Const("highlight_mood");
    ::STRINGS[142] = uString::Const("confirmed_save");
    ::STRINGS[143] = uString::Const("save_confirm");
    ::STRINGS[144] = uString::Const("toggle_cal_visibility");
    ::STRINGS[145] = uString::Const("handle_cal_visibility");
    ::STRINGS[146] = uString::Const("calendar_type");
    ::STRINGS[147] = uString::Const("set_page_according");
    ::STRINGS[148] = uString::Const("resetUrl");
    ::STRINGS[149] = uString::Const("chart_url");
    ::STRINGS[150] = uString::Const("extra_content_visible");
    ::STRINGS[151] = uString::Const("mood_container_color");
    ::STRINGS[152] = uString::Const("sleep_container_color");
    ::STRINGS[153] = uString::Const("eat_container_color");
    ::STRINGS[154] = uString::Const("fade_me_in");
    ::STRINGS[155] = uString::Const("set_mood");
    ::STRINGS[156] = uString::Const("save_mood");
    ::STRINGS[157] = uString::Const("enable_mood_send");
    ::STRINGS[158] = uString::Const("mood_cal_vis");
    ::STRINGS[159] = uString::Const("sleep_cal_vis");
    ::STRINGS[160] = uString::Const("eat_cal_vis");
    ::STRINGS[161] = uString::Const("C600");
    ::STRINGS[162] = uString::Const("C700");
    ::STRINGS[163] = uString::Const("mood");
    ::STRINGS[164] = uString::Const("MainView.ux");
    ::STRINGS[165] = uString::Const("\n"
        "\t\tconsole.log(\"Hello, FuseJS!\");\n"
        "\t");
    ::STRINGS[166] = uString::Const("Hello World!");
    ::STRINGS[167] = uString::Const("Information saved!");
    ::STRINGS[168] = uString::Const("");
    ::STRINGS[169] = uString::Const("OK");
    ::STRINGS[170] = uString::Const("Home");
    ::STRINGS[171] = uString::Const("Graphs");
    ::STRINGS[172] = uString::Const("Extra content");
    ::STRINGS[173] = uString::Const("Current calendar type is:");
    ::STRINGS[174] = uString::Const("Siirry kirjaamaan");
    ::STRINGS[175] = uString::Const("Home page content goes here");
    ::STRINGS[176] = uString::Const("\n"
        "\t\t\t\t\t\t\t\tfunction resetUrl() {\n"
        "\t\t\t\t\t\t\t\t\twv.goto(chart_url.value);\n"
        "\t\t\t\t\t\t\t\t}\n"
        "\t\t\t\t\t\t\t\tmodule.exports = {\n"
        "\t\t\t\t\t\t\t\t\tresetUrl: resetUrl\n"
        "\t\t\t\t\t\t\t\t};\n"
        "\t\t\t\t\t\t\t");
    ::STRINGS[177] = uString::Const("Select calendar type");
    ::STRINGS[178] = uString::Const("Mood calendar");
    ::STRINGS[179] = uString::Const("Select this");
    ::STRINGS[180] = uString::Const("Sleep calendar");
    ::STRINGS[181] = uString::Const("Eating calendar");
    ::STRINGS[182] = uString::Const("Each calendar works same way. Only content lists changes.");
    ::STRINGS[183] = uString::Const("Mood content");
    ::STRINGS[184] = uString::Const("Set calendar layout");
    ::STRINGS[185] = uString::Const("Write what did you do..");
    ::STRINGS[186] = uString::Const("1*");
    ::STRINGS[187] = uString::Const("1*,1*,1*");
    ::STRINGS[188] = uString::Const("BLAAH");
    ::STRINGS[189] = uString::Const("Sleep content");
    ::STRINGS[190] = uString::Const("Eating content");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::mood_calendar_bundle_typeof(),
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, menu_is_open_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, home_page_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, web_view_content_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, extra_content_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, wv_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, mood_container_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, sleep_container_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, eat_container_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp15_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, mood_calendar_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, sleep_calendar_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp17_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, eating_calendar_Visibility_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, ButtonEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(MainView, MoodEvent), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(MainView, menu_is_open), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, popup), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb2), 0,
        ::g::Hamburger_typeof(), offsetof(MainView, hamburger), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, box), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, sidePage), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(MainView, menu), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(MainView, normalMenuItems), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb6), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, home_page), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb7), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, web_view_content), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb8), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(MainView, wv), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, extra_content), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb9), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, mood_container), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, sleep_container), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, eat_container), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, mood_calendar), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb10), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_9), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_8), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, h_7), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_6), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_5), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, n_4), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_3), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_2), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, s_1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb11), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, sleep_calendar), 0,
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
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::BackgroundColor_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::ForegroundColor_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&MainView::SpecialColor_, uFieldFlagsStatic,
        ::g::Uno::UX::Size_typeof(), (uintptr_t)&MainView::MenuItemHeight_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector35_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 147;
    options.InterfaceCount = 1;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :274
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :278
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :274
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

// public MainView() [instance] :274
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :278
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
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[140/*"execute_but...*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[141/*"highlight_m...*/]);
    home_page = ::g::Fuse::Controls::DockPanel::New4();
    home_page_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(home_page, MainView::__selector0_);
    web_view_content = ::g::Fuse::Controls::DockPanel::New4();
    web_view_content_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(web_view_content, MainView::__selector0_);
    extra_content = ::g::Fuse::Controls::DockPanel::New4();
    extra_content_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(extra_content, MainView::__selector0_);
    mood_calendar = ::g::Fuse::Controls::DockPanel::New4();
    mood_calendar_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(mood_calendar, MainView::__selector0_);
    sleep_calendar = ::g::Fuse::Controls::DockPanel::New4();
    sleep_calendar_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(sleep_calendar, MainView::__selector0_);
    eating_calendar = ::g::Fuse::Controls::DockPanel::New4();
    eating_calendar_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(eating_calendar, MainView::__selector0_);
    menu = ::g::Fuse::Controls::StackPanel::New4();
    menu_Opacity_inst = ::g::mood_calendar_FuseElementsElement_Opacity_Property::New1(menu, MainView::__selector0_);
    hamburger = ::g::Hamburger::New4();
    hamburger_IsOpen_inst = ::g::mood_calendar_Hamburger_IsOpen_Property::New1(hamburger, MainView::__selector1_);
    ::g::Uno::Float4 temp20 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    ::g::Uno::Float4 temp21 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    menu_is_open = ::g::Fuse::Triggers::WhileTrue::New2();
    menu_is_open_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(menu_is_open, MainView::__selector2_);
    home_page_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(home_page, MainView::__selector3_);
    web_view_content_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(web_view_content, MainView::__selector3_);
    extra_content_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(extra_content, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[142/*"confirmed_s...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[143/*"save_confirm"*/]);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[144/*"toggle_cal_...*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[145/*"handle_cal_...*/]);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[145/*"handle_cal_...*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[145/*"handle_cal_...*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::mood_calendar_FuseControlsTextControl_Value_Property::New1(temp1, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[146/*"calendar_type"*/]);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[147/*"set_page_ac...*/]);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[148/*"resetUrl"*/]);
    wv = ::g::Fuse::Controls::WebView::New4();
    wv_Url_inst = ::g::mood_calendar_FuseControlsWebView_Url_Property::New1(wv, MainView::__selector4_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[149/*"chart_url"*/]);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[150/*"extra_conte...*/]);
    mood_container = ::g::Fuse::Controls::Panel::New3();
    mood_container_Color_inst = ::g::mood_calendar_FuseControlsPanel_Color_Property::New1(mood_container, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[151/*"mood_contai...*/]);
    sleep_container = ::g::Fuse::Controls::Panel::New3();
    sleep_container_Color_inst = ::g::mood_calendar_FuseControlsPanel_Color_Property::New1(sleep_container, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[152/*"sleep_conta...*/]);
    eat_container = ::g::Fuse::Controls::Panel::New3();
    eat_container_Color_inst = ::g::mood_calendar_FuseControlsPanel_Color_Property::New1(eat_container, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(::STRINGS[153/*"eat_contain...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp2_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp2, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(::STRINGS[154/*"fade_me_in"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::mood_calendar_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(::STRINGS[155/*"set_mood"*/]);
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(::STRINGS[156/*"save_mood"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp4, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"h_9"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp5 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp5_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp5, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(::STRINGS[30/*"h_8"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp6 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp6_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp6, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(::STRINGS[31/*"h_7"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp7 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp7_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp7, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(::STRINGS[32/*"n_6"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp8 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp8_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp8, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(::STRINGS[33/*"n_5"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp9 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp9_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp9, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(::STRINGS[34/*"n_4"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp10 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp10_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp10, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(::STRINGS[35/*"s_3"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp11 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp11_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp11, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(::STRINGS[36/*"s_2"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp12 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp12_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp12, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp47 = ::g::Fuse::Reactive::Data::New1(::STRINGS[37/*"s_1"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp13 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp13_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp13, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(::STRINGS[157/*"enable_mood...*/]);
    ::g::Fuse::Triggers::WhileFalse* temp14 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp14_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp14, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(::STRINGS[157/*"enable_mood...*/]);
    ::g::Fuse::Controls::Button* temp15 = ::g::Fuse::Controls::Button::New5();
    temp15_IsEnabled_inst = ::g::mood_calendar_FuseVisual_IsEnabled_Property::New1(temp15, MainView::__selector6_);
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(::STRINGS[157/*"enable_mood...*/]);
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(::STRINGS[156/*"save_mood"*/]);
    mood_calendar_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(mood_calendar, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(::STRINGS[158/*"mood_cal_vis"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp16 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp16_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp16, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp53 = ::g::Fuse::Reactive::Data::New1(::STRINGS[154/*"fade_me_in"*/]);
    sleep_calendar_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(sleep_calendar, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp54 = ::g::Fuse::Reactive::Data::New1(::STRINGS[159/*"sleep_cal_vis"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp17 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp17_Value_inst = ::g::mood_calendar_FuseTriggersWhileBool_Value_Property::New1(temp17, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp55 = ::g::Fuse::Reactive::Data::New1(::STRINGS[154/*"fade_me_in"*/]);
    eating_calendar_Visibility_inst = ::g::mood_calendar_FuseElementsElement_Visibility_Property::New1(eating_calendar, MainView::__selector3_);
    ::g::Fuse::Reactive::Data* temp56 = ::g::Fuse::Reactive::Data::New1(::STRINGS[160/*"eat_cal_vis"*/]);
    ::g::Fuse::Reactive::JavaScript* temp57 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    router = ::g::Fuse::Navigation::Router::New2();
    ButtonEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp58 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    MoodEvent = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Triggers::OnUserEvent* temp59 = ::g::Fuse::Triggers::OnUserEvent::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp19);
    ::g::Fuse::iOS::StatusBarConfig* temp60 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp61 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Elements::Viewport* temp62 = ::g::Fuse::Elements::Viewport::New2();
    ::g::Fuse::Controls::DockPanel* temp63 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp64 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Triggers::Actions::DebugAction* temp65 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Animations::Rotate* temp66 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Change* temp67 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], home_page_Opacity_inst);
    ::g::Fuse::Animations::Change* temp68 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], web_view_content_Opacity_inst);
    ::g::Fuse::Animations::Change* temp69 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], extra_content_Opacity_inst);
    ::g::Fuse::Animations::Change* temp70 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], mood_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp71 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], sleep_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp72 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], eating_calendar_Opacity_inst);
    ::g::Fuse::Animations::Change* temp73 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], menu_Opacity_inst);
    ::g::Fuse::Animations::Change* temp74 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<bool>*/], hamburger_IsOpen_inst);
    ::g::Fuse::Triggers::Actions::DebugAction* temp75 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Panel* temp76 = ::g::Fuse::Controls::Panel::New3();
    popup = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp77 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp78 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp79 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp80 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Button* temp81 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp82 = ::g::Fuse::Controls::Text::New3();
    ::g::Uno::UX::Resource* temp83 = ::g::Uno::UX::Resource::New1(::STRINGS[161/*"C600"*/], uBox(::g::Uno::Float4_typeof(), temp20));
    ::g::Uno::UX::Resource* temp84 = ::g::Uno::UX::Resource::New1(::STRINGS[162/*"C700"*/], uBox(::g::Uno::Float4_typeof(), temp21));
    ::g::Fuse::Controls::Rectangle* temp85 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp86 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp87 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp88 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp89 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp90 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22);
    ::g::Fuse::Drawing::StaticSolidColor* temp91 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.9843137f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp92 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Panel* temp93 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp94 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp95 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    box = ::g::Fuse::Controls::Panel::New3();
    sidePage = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Rotation* temp96 = ::g::Fuse::Rotation::New2();
    normalMenuItems = ::g::Fuse::Controls::StackPanel::New4();
    ::g::MenuButton* temp97 = ::g::MenuButton::New5();
    ::g::Fuse::Gestures::Clicked* temp98 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp99 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp100 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp101 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp102 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::MenuButton* temp103 = ::g::MenuButton::New5();
    ::g::Fuse::Gestures::Clicked* temp104 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp105 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp106 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp107 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp108 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp26);
    ::g::MenuButton* temp109 = ::g::MenuButton::New5();
    ::g::Fuse::Gestures::Clicked* temp110 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp112 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp113 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp114 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Controls::Panel* temp115 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp116 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp117 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp118 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp119 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Button* temp120 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp121 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp122 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp123 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp124 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp125 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp126 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp127 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Controls::Button* temp128 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp129 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp130 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp131 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Controls::Text* temp132 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp133 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Controls::Panel* temp134 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp135 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp136 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp137 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Navigation::Activated* temp138 = ::g::Fuse::Navigation::Activated::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp139 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::Fuse::Controls::NativeViewHost* temp140 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Reactive::DataBinding* temp141 = ::g::Fuse::Reactive::DataBinding::New1(wv_Url_inst, (uObject*)temp31, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp142 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Triggers::WhileVisible* temp143 = ::g::Fuse::Triggers::WhileVisible::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp144 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp32);
    ::g::Fuse::Controls::Panel* temp145 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp146 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp147 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp148 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp149 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp150 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp151 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp152 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp153 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp154 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp155 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp156 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp157 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp158 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp159 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp160 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[146/*"calendar_type"*/]);
    ::g::Fuse::Reactive::DataBinding* temp161 = ::g::Fuse::Reactive::DataBinding::New1(mood_container_Color_inst, (uObject*)temp33, 3);
    ::g::Fuse::Controls::StackPanel* temp162 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp163 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp164 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp165 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp166 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp167 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp168 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp169 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp170 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp171 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp172 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp173 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[146/*"calendar_type"*/]);
    ::g::Fuse::Reactive::DataBinding* temp174 = ::g::Fuse::Reactive::DataBinding::New1(sleep_container_Color_inst, (uObject*)temp34, 3);
    ::g::Fuse::Controls::StackPanel* temp175 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp176 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp177 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp178 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp179 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp180 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp181 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp182 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp183 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp184 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp185 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp186 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[146/*"calendar_type"*/]);
    ::g::Fuse::Reactive::DataBinding* temp187 = ::g::Fuse::Reactive::DataBinding::New1(eat_container_Color_inst, (uObject*)temp35, 3);
    ::g::Fuse::Controls::Text* temp188 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp189 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Animations::Change* temp190 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], mood_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp191 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp36, 3);
    ::g::Fuse::Controls::Panel* temp192 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp193 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp194 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp195 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp196 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp197 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp198 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp199 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp200 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp37, 3);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp38);
    ::g::Fuse::Controls::Panel* temp201 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp202 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp203 = ::g::Fuse::Controls::Panel::New3();
    h_9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp204 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp205 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp206 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp207 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp208 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp209 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp39, 3);
    ::g::Fuse::Drawing::Stroke* temp210 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp211 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp212 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp213 = ::g::Fuse::Controls::Panel::New3();
    h_8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp214 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp215 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp216 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp217 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp218 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp219 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp40, 3);
    ::g::Fuse::Drawing::Stroke* temp220 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp221 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp222 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp223 = ::g::Fuse::Controls::Panel::New3();
    h_7 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp224 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp225 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp226 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp227 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp228 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp229 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp41, 3);
    ::g::Fuse::Drawing::Stroke* temp230 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp231 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp232 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp233 = ::g::Fuse::Controls::Panel::New3();
    n_6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp234 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp235 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp236 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp237 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp238 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp239 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp42, 3);
    ::g::Fuse::Drawing::Stroke* temp240 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp241 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.7372549f, 0.254902f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp242 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp243 = ::g::Fuse::Controls::Panel::New3();
    n_5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp244 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp245 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp246 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp247 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp248 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp249 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp43, 3);
    ::g::Fuse::Drawing::Stroke* temp250 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp251 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.8039216f, 0.4666667f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp252 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp253 = ::g::Fuse::Controls::Panel::New3();
    n_4 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp254 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp255 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp256 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp257 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp258 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp259 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp44, 3);
    ::g::Fuse::Drawing::Stroke* temp260 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp261 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.8509804f, 0.6117647f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp262 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp263 = ::g::Fuse::Controls::Panel::New3();
    s_3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp264 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp265 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp266 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp267 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp268 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp269 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp45, 3);
    ::g::Fuse::Drawing::Stroke* temp270 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp271 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.5372549f, 0.5137255f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp272 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp273 = ::g::Fuse::Controls::Panel::New3();
    s_2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp274 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp275 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp276 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp277 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp278 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp279 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp46, 3);
    ::g::Fuse::Drawing::Stroke* temp280 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp281 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.4f, 0.3686275f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp282 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp283 = ::g::Fuse::Controls::Panel::New3();
    s_1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Tapped* temp284 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp285 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Triggers::Actions::UserEventArg* temp286 = ::g::Fuse::Triggers::Actions::UserEventArg::New2(::STRINGS[163/*"mood"*/]);
    ::g::Fuse::Effects::DropShadow* temp287 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Animations::Scale* temp288 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp289 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp47, 3);
    ::g::Fuse::Drawing::Stroke* temp290 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp291 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8705882f, 0.2f, 0.1529412f, 1.0f));
    ::g::Fuse::Drawing::ImageFill* temp292 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Text* temp293 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp294 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp295 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp48, 3);
    ::g::Fuse::Controls::Text* temp296 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp297 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp298 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp49, 3);
    ::g::Fuse::Gestures::Clicked* temp299 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp300 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<bool>*/], menu_is_open_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp301 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], home_page_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp302 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], web_view_content_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp303 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], extra_content_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp304 = ::g::Fuse::Reactive::DataBinding::New1(temp15_IsEnabled_inst, (uObject*)temp50, 3);
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp51);
    ::g::Fuse::Controls::Text* temp305 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp306 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp307 = ::g::Fuse::Reactive::DataBinding::New1(mood_calendar_Visibility_inst, (uObject*)temp52, 3);
    ::g::Fuse::Animations::Change* temp308 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], sleep_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp309 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp53, 3);
    ::g::Fuse::Controls::Panel* temp310 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp311 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp312 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp313 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp314 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp315 = ::g::Fuse::Reactive::DataBinding::New1(sleep_calendar_Visibility_inst, (uObject*)temp54, 3);
    ::g::Fuse::Animations::Change* temp316 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], eating_calendar_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp317 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Value_inst, (uObject*)temp55, 3);
    ::g::Fuse::Controls::Panel* temp318 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp319 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp320 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp321 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp322 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.9764706f, 0.9764706f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp323 = ::g::Fuse::Reactive::DataBinding::New1(eating_calendar_Visibility_inst, (uObject*)temp56, 3);
    Background(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp57->LineNumber(2);
    temp57->FileName(::STRINGS[164/*"MainView.ux"*/]);
    temp57->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::main85dc14ca()));
    uPtr(router)->Name(MainView::__selector7_);
    uPtr(ButtonEvent)->Name(MainView::__selector8_);
    temp58->EventName(MainView::__selector8_);
    temp58->Filter(1);
    temp58->add_Handler(uDelegate::New(::TYPES[5/*Fuse.UserEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    uPtr(MoodEvent)->Name(MainView::__selector9_);
    temp59->EventName(MainView::__selector9_);
    temp59->Filter(1);
    temp59->add_Handler(uDelegate::New(::TYPES[5/*Fuse.UserEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp60->Style(1);
    temp61->Code(::STRINGS[165/*"\n\t\tconso...*/]);
    temp61->LineNumber(24);
    temp61->FileName(::STRINGS[164/*"MainView.ux"*/]);
    temp62->CullFace(2);
    temp62->Perspective(1.7f);
    temp62->PerspectiveRelativeTo(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), menu_is_open);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Fuse::Controls::DockPanel::SetDock(temp64, 2);
    uPtr(menu_is_open)->Value1(false);
    uPtr(menu_is_open)->Name(MainView::__selector10_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu_is_open)->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp65);
    temp65->Message(::STRINGS[5/*"menu_is_open"*/]);
    temp66->DegreesY(-90.0f);
    temp66->Duration(0.7);
    temp66->DelayBack(0.0);
    temp66->Delay(0.0);
    temp66->Target(box);
    temp66->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp66->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp67, uCRef(0.0f));
    temp67->Duration(0.7);
    temp67->DelayBack(0.0);
    temp67->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp67->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp68, uCRef(0.0f));
    temp68->Duration(0.7);
    temp68->DelayBack(0.0);
    temp68->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp68->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp69, uCRef(0.0f));
    temp69->Duration(0.7);
    temp69->DelayBack(0.0);
    temp69->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp69->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp70, uCRef(0.0f));
    temp70->Duration(0.7);
    temp70->DelayBack(0.0);
    temp70->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp70->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp71, uCRef(0.0f));
    temp71->Duration(0.7);
    temp71->DelayBack(0.0);
    temp71->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp71->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp72, uCRef(0.0f));
    temp72->Duration(0.7);
    temp72->DelayBack(0.0);
    temp72->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp72->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp73, uCRef(1.0f));
    temp73->Duration(0.3);
    temp73->DelayBack(0.0);
    temp73->Easing(::g::Fuse::Animations::Easing::QuarticIn());
    temp73->EasingBack(::g::Fuse::Animations::Easing::QuarticIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp74, uCRef(true));
    temp74->DelayBack(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp92);
    temp75->Message(::STRINGS[166/*"Hello World!"*/]);
    temp76->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8470588f));
    temp76->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp76->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp76->X(::g::Uno::UX::Size__New1(0.0f, 1));
    temp76->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), popup);
    uPtr(popup)->Color(::g::Uno::Float4__New2(0.9803922f, 0.9803922f, 0.9803922f, 1.0f));
    uPtr(popup)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popup)->Height(::g::Uno::UX::Size__New1(260.0f, 1));
    uPtr(popup)->Alignment(10);
    uPtr(popup)->Name(MainView::__selector11_);
    uPtr(popup)->Background(temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popup)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp77->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp78->Margin(::g::Uno::Float4__New2(5.0f, 30.0f, 5.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    temp79->Value(::STRINGS[167/*"Information...*/]);
    temp79->FontSize(30.0f);
    temp79->TextAlignment(1);
    temp79->Color(::g::Uno::Float4__New2(0.1372549f, 0.6078432f, 0.3372549f, 1.0f));
    temp80->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    temp81->Text(::STRINGS[168/*""*/]);
    temp81->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp81->Alignment(10);
    temp81->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp81->Padding(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp81, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Resources()), ::TYPES[11/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Resources()), ::TYPES[11/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp82->Value(::STRINGS[169/*"OK"*/]);
    temp82->TextAlignment(1);
    temp82->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp82->Alignment(10);
    temp85->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp85->Color(::g::Uno::Float4__New2(0.2745098f, 0.6666667f, 0.1215686f, 1.0f));
    temp85->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp90);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp87, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp88, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp89, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp90, uCRef<int32_t>(1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), box);
    uPtr(hamburger)->Alignment(5);
    uPtr(hamburger)->Name(MainView::__selector12_);
    ::g::Fuse::Gestures::Clicked::AddHandler(hamburger, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hamburger)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hamburger)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp95);
    temp95->Target((uObject*)menu_is_open);
    uPtr(box)->Name(MainView::__selector13_);
    uPtr(box)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sidePage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), home_page);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), web_view_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), extra_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), mood_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sleep_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(box)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), eating_calendar);
    uPtr(sidePage)->Name(MainView::__selector14_);
    uPtr(sidePage)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidePage)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidePage)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), menu);
    temp96->DegreesY(90.0f);
    uPtr(menu)->ItemSpacing(50.0f);
    uPtr(menu)->ContentAlignment(8);
    uPtr(menu)->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 0.0f, 0.0f));
    uPtr(menu)->Opacity(0.0f);
    uPtr(menu)->Name(MainView::__selector15_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), normalMenuItems);
    uPtr(normalMenuItems)->ItemSpacing(50.0f);
    uPtr(normalMenuItems)->Name(MainView::__selector16_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(normalMenuItems)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    temp97->Text(::STRINGS[170/*"Home"*/]);
    temp97->Alignment(1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp97, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp102);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp99, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp100, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp101, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp102, uCRef<int32_t>(1));
    temp103->Text(::STRINGS[171/*"Graphs"*/]);
    temp103->Alignment(1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp103, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp108);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp105, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp106, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp107, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp108, uCRef<int32_t>(1));
    temp109->Text(::STRINGS[172/*"Extra content"*/]);
    temp109->Alignment(1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp109, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp114);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp112, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp113, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp114, uCRef<int32_t>(0));
    uPtr(home_page)->Visibility(0);
    uPtr(home_page)->Name(MainView::__selector17_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home_page)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    temp115->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp115, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    temp116->Value(::STRINGS[170/*"Home"*/]);
    temp116->FontSize(21.0f);
    temp116->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp116->Alignment(10);
    temp117->Background(temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    temp118->Value(::STRINGS[173/*"Current cal...*/]);
    temp118->TextAlignment(1);
    temp118->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp118->Alignment(10);
    temp1->TextAlignment(1);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp119);
    temp120->Text(::STRINGS[168/*""*/]);
    temp120->Margin(::g::Uno::Float4__New2(20.0f, 40.0f, 20.0f, 20.0f));
    temp120->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp120, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp121->Value(::STRINGS[174/*"Siirry kirj...*/]);
    temp121->TextAlignment(1);
    temp121->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp121->Alignment(10);
    temp122->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp122->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp122->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp127);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp124, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp125, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp126, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp127, uCRef<int32_t>(1));
    temp128->Text(::STRINGS[168/*""*/]);
    temp128->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp128->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    temp129->Value(::STRINGS[168/*""*/]);
    temp129->TextAlignment(1);
    temp129->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp129->Alignment(10);
    temp130->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp130->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp130->Layer(1);
    temp132->Value(::STRINGS[175/*"Home page c...*/]);
    temp132->FontSize(21.0f);
    temp132->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp132->Alignment(10);
    uPtr(web_view_content)->Visibility(1);
    uPtr(web_view_content)->Name(MainView::__selector18_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(web_view_content)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    temp134->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp134, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    temp135->Value(::STRINGS[171/*"Graphs"*/]);
    temp135->FontSize(21.0f);
    temp135->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp135->Alignment(10);
    temp136->Background(temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    temp137->Code(::STRINGS[176/*"\n\t\t\t\t\...*/]);
    temp137->LineNumber(206);
    temp137->FileName(::STRINGS[164/*"MainView.ux"*/]);
    temp138->When(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp139->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), wv);
    uPtr(wv)->Name(MainView::__selector19_);
    ::g::Fuse::Controls::DockPanel::SetDock(wv, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(wv)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp141);
    uPtr(extra_content)->Visibility(1);
    uPtr(extra_content)->Name(MainView::__selector20_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(extra_content)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp144->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    temp145->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp145, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    temp146->Value(::STRINGS[172/*"Extra content"*/]);
    temp146->FontSize(21.0f);
    temp146->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp146->Alignment(10);
    temp147->Background(temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), mood_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sleep_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), eat_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    temp148->Value(::STRINGS[177/*"Select cale...*/]);
    temp148->FontSize(21.0f);
    temp148->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp148->Alignment(10);
    temp148->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    uPtr(mood_container)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(mood_container)->Name(MainView::__selector21_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_container)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_container)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    temp150->Value(::STRINGS[178/*"Mood calendar"*/]);
    temp150->FontSize(21.0f);
    temp150->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp150->Alignment(10);
    temp150->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp151->Text(::STRINGS[168/*""*/]);
    temp151->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp151->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    temp152->Value(::STRINGS[179/*"Select this"*/]);
    temp152->TextAlignment(1);
    temp152->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp152->Alignment(10);
    temp153->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp153->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp153->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp159);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp155, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp156, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp157, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp158, uCRef<int32_t>(1));
    temp159->EventName(MainView::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp160);
    temp160->StringValue(::STRINGS[27/*"mood_calendar"*/]);
    uPtr(sleep_container)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(sleep_container)->Name(MainView::__selector22_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_container)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_container)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp174);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    temp163->Value(::STRINGS[180/*"Sleep calen...*/]);
    temp163->FontSize(21.0f);
    temp163->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp163->Alignment(10);
    temp163->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp164->Text(::STRINGS[168/*""*/]);
    temp164->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp164->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    temp165->Value(::STRINGS[179/*"Select this"*/]);
    temp165->TextAlignment(1);
    temp165->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp165->Alignment(10);
    temp166->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp166->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp166->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp170);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp172);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp168, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp169, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp170, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp171, uCRef<int32_t>(1));
    temp172->EventName(MainView::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp173);
    temp173->StringValue(::STRINGS[39/*"sleep_calen...*/]);
    uPtr(eat_container)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(eat_container)->Name(MainView::__selector23_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eat_container)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eat_container)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp187);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    temp176->Value(::STRINGS[181/*"Eating cale...*/]);
    temp176->FontSize(21.0f);
    temp176->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp176->Alignment(10);
    temp176->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp177->Text(::STRINGS[168/*""*/]);
    temp177->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp177->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    temp178->Value(::STRINGS[179/*"Select this"*/]);
    temp178->TextAlignment(1);
    temp178->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp178->Alignment(10);
    temp179->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp179->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp179->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp183);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp185);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp181, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp182, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp183, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp184, uCRef<int32_t>(1));
    temp185->EventName(MainView::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp186);
    temp186->StringValue(::STRINGS[40/*"eating_cale...*/]);
    temp188->Value(::STRINGS[182/*"Each calend...*/]);
    temp188->TextWrapping(1);
    temp188->FontSize(18.0f);
    temp188->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp188->Alignment(10);
    temp188->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 10.0f));
    uPtr(mood_calendar)->Opacity(0.0f);
    uPtr(mood_calendar)->Name(MainView::__selector24_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mood_calendar)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp307);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp191);
    ::g::Fuse::Animations::Change__set_Value_fn(temp190, uCRef(1.0f));
    temp190->Duration(0.4);
    temp190->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp192->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp192, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    temp193->Value(::STRINGS[183/*"Mood content"*/]);
    temp193->FontSize(21.0f);
    temp193->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp193->Alignment(10);
    temp194->Background(temp306);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp305);
    temp195->Value(::STRINGS[184/*"Set calenda...*/]);
    temp195->FontSize(21.0f);
    temp195->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp195->Alignment(10);
    temp195->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->PlaceholderText(::STRINGS[185/*"Write what ...*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp3->FontSize(20.0f);
    temp3->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 10.0f));
    temp3->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->add_ActionTriggered(uDelegate::New(::TYPES[14/*Fuse.Controls.TextInputActionHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    temp197->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp197->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp199);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp198);
    temp198->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp198->Width(1.0f);
    temp199->Color(::g::Fuse::Drawing::Colors::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp202);
    temp202->Rows(::STRINGS[186/*"1*"*/]);
    temp202->RowCount(3);
    temp202->Columns(::STRINGS[187/*"1*,1*,1*"*/]);
    temp202->ColumnCount(3);
    temp202->CellSpacing(15.0f);
    temp202->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp213);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp233);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp243);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp253);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp263);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp273);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp283);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), h_9);
    uPtr(h_9)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_9)->Color(::g::Uno::Float4__New2(0.3333333f, 0.7372549f, 0.2392157f, 1.0f));
    uPtr(h_9)->Aspect(1.0f);
    uPtr(h_9)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_9)->BoxSizing(4);
    uPtr(h_9)->Name(MainView::__selector25_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp210);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_9)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp205);
    temp205->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp205->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp206);
    temp206->StringValue(::STRINGS[29/*"h_9"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp208);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp209);
    temp207->Size(1.0f);
    temp207->Angle(135.0f);
    temp207->Distance(3.0f);
    temp207->Spread(0.5f);
    temp207->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp208->Factor(1.4f);
    temp208->Duration(0.1);
    temp208->Target(h_9);
    temp210->Width(4.0f);
    temp210->Brush(temp211);
    temp212->StretchMode(3);
    temp212->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_921602852()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp213->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), h_8);
    uPtr(h_8)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_8)->Color(::g::Uno::Float4__New2(0.454902f, 0.7372549f, 0.3882353f, 1.0f));
    uPtr(h_8)->Aspect(1.0f);
    uPtr(h_8)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_8)->BoxSizing(4);
    uPtr(h_8)->Name(MainView::__selector26_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp220);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp214);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_8)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp214->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp215);
    temp215->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp216);
    temp216->StringValue(::STRINGS[30/*"h_8"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp218);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp217);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp219);
    temp217->Size(1.0f);
    temp217->Angle(135.0f);
    temp217->Distance(3.0f);
    temp217->Spread(0.5f);
    temp217->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp218->Factor(1.4f);
    temp218->Duration(0.1);
    temp218->Target(h_8);
    temp220->Width(4.0f);
    temp220->Brush(temp221);
    temp222->StretchMode(3);
    temp222->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_821602c53()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), h_7);
    uPtr(h_7)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(h_7)->Color(::g::Uno::Float4__New2(0.5372549f, 0.7372549f, 0.4901961f, 1.0f));
    uPtr(h_7)->Aspect(1.0f);
    uPtr(h_7)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(h_7)->BoxSizing(4);
    uPtr(h_7)->Name(MainView::__selector27_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp232);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp230);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp224);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(h_7)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp225);
    temp225->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp225->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp226);
    temp226->StringValue(::STRINGS[31/*"h_7"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp228);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp227);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp229);
    temp227->Size(1.0f);
    temp227->Angle(135.0f);
    temp227->Distance(3.0f);
    temp227->Spread(0.5f);
    temp227->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp228->Factor(1.4f);
    temp228->Duration(0.1);
    temp228->Target(h_7);
    temp230->Width(4.0f);
    temp230->Brush(temp231);
    temp232->StretchMode(3);
    temp232->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_7215fed4c()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), n_6);
    uPtr(n_6)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_6)->Color(::g::Uno::Float4__New2(0.9647059f, 0.7372549f, 0.254902f, 1.0f));
    uPtr(n_6)->Aspect(1.0f);
    uPtr(n_6)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_6)->BoxSizing(4);
    uPtr(n_6)->Name(MainView::__selector28_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp242);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp240);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp234);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_6)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp234->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp235);
    temp235->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp236);
    temp236->StringValue(::STRINGS[32/*"n_6"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp238);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp239);
    temp237->Size(1.0f);
    temp237->Angle(135.0f);
    temp237->Distance(3.0f);
    temp237->Spread(0.5f);
    temp237->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp238->Factor(1.4f);
    temp238->Duration(0.1);
    temp238->Target(n_6);
    temp240->Width(4.0f);
    temp240->Brush(temp241);
    temp242->StretchMode(3);
    temp242->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_6215ff14d()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp243->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), n_5);
    uPtr(n_5)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_5)->Color(::g::Uno::Float4__New2(0.9647059f, 0.8039216f, 0.4666667f, 1.0f));
    uPtr(n_5)->Aspect(1.0f);
    uPtr(n_5)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_5)->BoxSizing(4);
    uPtr(n_5)->Name(MainView::__selector29_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp252);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp250);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp244);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_5)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp244->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp245);
    temp245->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp246);
    temp246->StringValue(::STRINGS[33/*"n_5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp248);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp247);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp249);
    temp247->Size(1.0f);
    temp247->Angle(135.0f);
    temp247->Distance(3.0f);
    temp247->Spread(0.5f);
    temp247->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp248->Factor(1.4f);
    temp248->Duration(0.1);
    temp248->Target(n_5);
    temp250->Width(4.0f);
    temp250->Brush(temp251);
    temp252->StretchMode(3);
    temp252->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_5215ff54e()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp253->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), n_4);
    uPtr(n_4)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(n_4)->Color(::g::Uno::Float4__New2(0.9647059f, 0.8509804f, 0.6117647f, 1.0f));
    uPtr(n_4)->Aspect(1.0f);
    uPtr(n_4)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(n_4)->BoxSizing(4);
    uPtr(n_4)->Name(MainView::__selector30_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp262);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp260);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp254);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(n_4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp254->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp255);
    temp255->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp255->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp256);
    temp256->StringValue(::STRINGS[34/*"n_4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp258);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp257);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp259);
    temp257->Size(1.0f);
    temp257->Angle(135.0f);
    temp257->Distance(3.0f);
    temp257->Spread(0.5f);
    temp257->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp258->Factor(1.4f);
    temp258->Duration(0.1);
    temp258->Target(n_4);
    temp260->Width(4.0f);
    temp260->Brush(temp261);
    temp262->StretchMode(3);
    temp262->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_4215ff94f()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), s_3);
    uPtr(s_3)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_3)->Color(::g::Uno::Float4__New2(0.8705882f, 0.5372549f, 0.5137255f, 1.0f));
    uPtr(s_3)->Aspect(1.0f);
    uPtr(s_3)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_3)->BoxSizing(4);
    uPtr(s_3)->Name(MainView::__selector31_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp272);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp270);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp265);
    temp265->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp265->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp266);
    temp266->StringValue(::STRINGS[35/*"s_3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp268);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp267);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp269);
    temp267->Size(1.0f);
    temp267->Angle(135.0f);
    temp267->Distance(3.0f);
    temp267->Spread(0.5f);
    temp267->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp268->Factor(1.4f);
    temp268->Duration(0.1);
    temp268->Target(s_3);
    temp270->Width(4.0f);
    temp270->Brush(temp271);
    temp272->StretchMode(3);
    temp272->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_3215ffe48()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp273->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), s_2);
    uPtr(s_2)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_2)->Color(::g::Uno::Float4__New2(0.8705882f, 0.4f, 0.3686275f, 1.0f));
    uPtr(s_2)->Aspect(1.0f);
    uPtr(s_2)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_2)->BoxSizing(4);
    uPtr(s_2)->Name(MainView::__selector32_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp282);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp280);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp274);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_2)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp274->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp275);
    temp275->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp276);
    temp276->StringValue(::STRINGS[36/*"s_2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp277);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp279);
    temp277->Size(1.0f);
    temp277->Angle(135.0f);
    temp277->Distance(3.0f);
    temp277->Spread(0.5f);
    temp277->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp278->Factor(1.4f);
    temp278->Duration(0.1);
    temp278->Target(s_2);
    temp280->Width(4.0f);
    temp280->Brush(temp281);
    temp282->StretchMode(3);
    temp282->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_221600249()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), s_1);
    uPtr(s_1)->CornerRadius(::g::Uno::Float4__New2(150.0f, 150.0f, 150.0f, 150.0f));
    uPtr(s_1)->Color(::g::Uno::Float4__New2(0.8705882f, 0.2f, 0.1529412f, 1.0f));
    uPtr(s_1)->Aspect(1.0f);
    uPtr(s_1)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(s_1)->BoxSizing(4);
    uPtr(s_1)->Name(MainView::__selector33_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Fills()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp292);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Strokes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp290);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp284);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s_1)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp285);
    temp285->EventName(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp285->ArgList()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/]), temp286);
    temp286->StringValue(::STRINGS[37/*"s_1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp288);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp287);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp289);
    temp287->Size(1.0f);
    temp287->Angle(135.0f);
    temp287->Distance(3.0f);
    temp287->Spread(0.5f);
    temp287->Color(::g::Uno::Float4__New2(0.8352941f, 0.8470588f, 0.8627451f, 1.0f));
    temp288->Factor(1.4f);
    temp288->Duration(0.1);
    temp288->Target(s_1);
    temp290->Width(4.0f);
    temp290->Brush(temp291);
    temp292->StretchMode(3);
    temp292->File(::g::Uno::UX::BundleFileSource::New1(::g::mood_calendar_bundle::_12160064a()));
    temp15->Text(::STRINGS[168/*""*/]);
    temp15->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 10.0f));
    temp15->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[10/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp299);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp304);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp293);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp294);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp295);
    temp293->Value(::STRINGS[179/*"Select this"*/]);
    temp293->TextAlignment(1);
    temp293->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp293->Alignment(10);
    temp294->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp294->Color(::g::Uno::Float4__New2(0.0f, 0.6470588f, 0.8039216f, 1.0f));
    temp294->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp296);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp297);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp298);
    temp296->Value(::STRINGS[188/*"BLAAH"*/]);
    temp296->TextAlignment(1);
    temp296->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp296->Alignment(10);
    temp297->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp297->Color(::g::Uno::Float4__New2(0.5490196f, 0.8980392f, 0.9568627f, 1.0f));
    temp297->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp300);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp301);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp302);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp303);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp300, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp301, uCRef<int32_t>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp302, uCRef<int32_t>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp303, uCRef<int32_t>(1));
    temp305->Value(::STRINGS[184/*"Set calenda...*/]);
    temp305->FontSize(21.0f);
    temp305->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp305->Alignment(10);
    temp305->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 60.0f));
    uPtr(sleep_calendar)->Opacity(0.0f);
    uPtr(sleep_calendar)->Name(MainView::__selector34_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp310);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp312);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sleep_calendar)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp315);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp308);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp309);
    ::g::Fuse::Animations::Change__set_Value_fn(temp308, uCRef(1.0f));
    temp308->Duration(0.4);
    temp308->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp310->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp310, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp310->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp311);
    temp311->Value(::STRINGS[189/*"Sleep content"*/]);
    temp311->FontSize(21.0f);
    temp311->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp311->Alignment(10);
    temp312->Background(temp314);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp312->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp313);
    temp313->Value(::STRINGS[184/*"Set calenda...*/]);
    temp313->FontSize(21.0f);
    temp313->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp313->Alignment(10);
    temp313->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 60.0f));
    uPtr(eating_calendar)->Opacity(0.0f);
    uPtr(eating_calendar)->Name(MainView::__selector35_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp318);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp320);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(eating_calendar)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp323);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp316);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp317);
    ::g::Fuse::Animations::Change__set_Value_fn(temp316, uCRef(1.0f));
    temp316->Duration(0.4);
    temp316->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp318->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp318, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp319);
    temp319->Value(::STRINGS[190/*"Eating cont...*/]);
    temp319->FontSize(21.0f);
    temp319->Color(::g::Uno::Float4__New2(0.9254902f, 0.9372549f, 0.945098f, 1.0f));
    temp319->Alignment(10);
    temp320->Background(temp322);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp320->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp321);
    temp321->Value(::STRINGS[184/*"Set calenda...*/]);
    temp321->FontSize(21.0f);
    temp321->Color(::g::Uno::Float4__New2(0.8823529f, 0.2941177f, 0.945098f, 1.0f));
    temp321->Alignment(10);
    temp321->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 60.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), ButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), MoodEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), menu_is_open);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), popup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), hamburger);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), box);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), sidePage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), normalMenuItems);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), home_page);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), web_view_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), wv);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), extra_content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), mood_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), sleep_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), eat_container);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), mood_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), h_9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), h_8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), h_7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), n_6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), n_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), n_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), s_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), s_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), s_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), sleep_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), eating_calendar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ButtonEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), MoodEvent);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
}

// public MainView New() [static] :274
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
