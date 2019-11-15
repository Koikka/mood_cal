// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Nodes/1.12.0/PerspectiveFrustum.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IFrustum.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PerspectiveFrustum;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public sealed class PerspectiveFrustum
// {
struct PerspectiveFrustum_type : uType
{
    ::g::Fuse::IFrustum interface0;
};

PerspectiveFrustum_type* PerspectiveFrustum_typeof();
void PerspectiveFrustum__ctor__fn(PerspectiveFrustum* __this);
void PerspectiveFrustum__get_Distance_fn(PerspectiveFrustum* __this, float* __retval);
void PerspectiveFrustum__set_Distance_fn(PerspectiveFrustum* __this, float* value);
void PerspectiveFrustum__GetViewTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void PerspectiveFrustum__GetViewTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void PerspectiveFrustum__New1_fn(PerspectiveFrustum** __retval);
void PerspectiveFrustum__TryGetProjectionTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);
void PerspectiveFrustum__TryGetProjectionTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);

struct PerspectiveFrustum : uObject
{
    float _Distance;

    void ctor_();
    float Distance();
    void Distance(float value);
    ::g::Uno::Float4x4 GetViewTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransformInverse(uObject* viewport);
    bool TryGetProjectionTransform(uObject* viewport, ::g::Uno::Float4x4* result);
    bool TryGetProjectionTransformInverse(uObject* viewport, ::g::Uno::Float4x4* result);
    static PerspectiveFrustum* New1();
};
// }

}} // ::g::Fuse
