// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.8.1/Element.UnoHostInterface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element__DefaultDisposable;}}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.DefaultDisposable :11
// {
struct Element__DefaultDisposable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__DefaultDisposable_type* Element__DefaultDisposable_typeof();
void Element__DefaultDisposable__ctor__fn(Element__DefaultDisposable* __this);
void Element__DefaultDisposable__get_Instance_fn(uObject** __retval);
void Element__DefaultDisposable__New1_fn(Element__DefaultDisposable** __retval);
void Element__DefaultDisposable__UnoIDisposableDispose_fn(Element__DefaultDisposable* __this);

struct Element__DefaultDisposable : uObject
{
    static uSStrong<uObject*> _instance_;
    static uSStrong<uObject*>& _instance() { return _instance_; }

    void ctor_();
    static Element__DefaultDisposable* New1();
    static uObject* Instance();
};
// }

}}} // ::g::Fuse::Elements
