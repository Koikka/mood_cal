// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-1265214f.h>
#include <Fuse.Controls.Native.-27540f3a.h>
#include <Fuse.Controls.Native.-36655cd1.h>
#include <Fuse.Controls.Native.-9055de0d.h>
#include <Fuse.Controls.Native.-bb2cda96.h>
#include <Fuse.Controls.Native.-c95850ba.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Visual.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Native/1.12.0/iOS/Button.uno
// -----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed extern class Button
// {
static void Button_build(uType* type)
{
}

uType* Button_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    return type;
}

// public Button()
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public Button New()
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public Button() [instance]
void Button::ctor_()
{
}

// public Button New() [static]
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Native/1.12.0/iOS/GraphicsView.uno
// -----------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed extern class GraphicsView
// {
static void GraphicsView_build(uType* type)
{
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host)
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView New(Fuse.Visual host)
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval)
{
    *__retval = GraphicsView::New1(host);
}

// public GraphicsView(Fuse.Visual host) [instance]
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}

// public GraphicsView New(Fuse.Visual host) [static]
GraphicsView* GraphicsView::New1(::g::Fuse::Visual* host)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Native/1.12.0/iOS/ScrollView.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed extern class ScrollView
// {
static void ScrollView_build(uType* type)
{
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance]
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static]
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.Native/1.12.0/iOS/TextView.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed extern class TextView
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView()
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New()
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance]
void TextView::ctor_()
{
}

// public generated TextView New() [static]
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Controls.TimePicker/1.12.0/iOS/TimePicker.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed extern class TimePickerView
// {
static void TimePickerView_build(uType* type)
{
}

uType* TimePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host)
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_(host);
}

// public TimePickerView New(Fuse.Controls.TimePicker host)
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New1(host);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance]
void TimePickerView::ctor_(::g::Fuse::Controls::TimePicker* host)
{
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static]
TimePickerView* TimePickerView::New1(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
