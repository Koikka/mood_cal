// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawingPrim-aed6b1dd.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-b905dd3.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal-1b31e5ea.h>
#include <Fuse.Drawing.Internal-2ca76543.h>
#include <Fuse.Drawing.Internal-acfd08d8.h>
#include <Fuse.Drawing.Internal-ec458cdf.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitiv-30868a07.h>
#include <Fuse.Drawing.Primitiv-3957723a.h>
#include <Fuse.Drawing.Primitiv-428f9697.h>
#include <Fuse.Drawing.Primitiv-5d7d52a9.h>
#include <Fuse.Drawing.Primitiv-6ecbad8d.h>
#include <Fuse.Drawing.Primitiv-8a696e91.h>
#include <Fuse.Drawing.Primitiv-a2f4a135.h>
#include <Fuse.Drawing.Primitiv-a3dfd6e2.h>
#include <Fuse.Drawing.Primitiv-a93ed644.h>
#include <Fuse.Drawing.Primitiv-c2bde4f1.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitiv-f20d5f1c.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implement-e843a30a.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Circle
// {
// static generated Circle()
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Circle, _strokeCoverage), 0,
        ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(Circle, _bufferVertex), 0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(Circle, _bufferIndex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_2a7897af), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_381877d6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c049787e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_b10a9dbb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_93267da2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_22061cc2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_25966248), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_648c56fb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_25ed247a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_7a46b9d6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_797b524), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_edd754f9), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_6284fe65), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_ad41be70), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_d62feaf8), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_80aa6c7f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_5aea75fd), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_6751d938), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_159c86b6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_e19c5b2d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c23596bb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_d2f1197a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_eb7847c4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_a1a67e1), 0,
        type, (uintptr_t)&Circle::Singleton_, uFieldFlagsStatic);
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle()
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness)
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness)
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls()
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New()
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness)
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance]
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness) [instance]
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float extend, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;

    if (radius <= 0.0f)
        return;

    if (_bufferVertex == NULL)
        InitBuffers();

    float radiusRcp = 1.0f / radius;

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_2a7897af_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_2a7897af_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_2a7897af_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_2a7897af.BlendEnabled(true);
                _draw_2a7897af.DepthTestEnabled(false);
                _draw_2a7897af.CullFace(uPtr(dc)->CullFace());
                _draw_2a7897af.BlendSrcAlpha(7);
                _draw_2a7897af.BlendDstRgb(3);
                _draw_2a7897af.Const(0, DP_2a7897af_14_8_4.NeedFract);
                _draw_2a7897af.Const(1, DP_2a7897af_14_8_4.Texture == NULL);
                _draw_2a7897af.Use();
                _draw_2a7897af.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2a7897af.Uniform(3, radius + (extend * 2.0f));
                _draw_2a7897af.Uniform2(4, center);
                _draw_2a7897af.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_2a7897af.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_2a7897af.Uniform2(7, DP_2a7897af_14_8_4.Origin);
                _draw_2a7897af.Uniform2(8, DP_2a7897af_14_8_4.Size);
                _draw_2a7897af.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_2a7897af.Uniform2(10, (ind3 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_2a7897af.Uniform2(11, DP_2a7897af_14_8_4.TexCoordScale1);
                _draw_2a7897af.Uniform2(12, DP_2a7897af_14_8_4.TexCoordBias1);
                _draw_2a7897af.Uniform2(13, DP_2a7897af_14_8_4.TexCoordScale2);
                _draw_2a7897af.Uniform2(14, DP_2a7897af_14_8_4.TexCoordBias2);
                _draw_2a7897af.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_2a7897af.Uniform(16, radiusRcp);
                _draw_2a7897af.Uniform(17, radius);
                _draw_2a7897af.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2a7897af.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2a7897af.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_2a7897af.Uniform(21, 1.0f / smoothness);
                _draw_2a7897af.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_2a7897af.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_2a7897af_20_2_17, EndVec_2a7897af_20_3_18)));
                _draw_2a7897af.Uniform2(24, StartVec_2a7897af_20_2_17);
                _draw_2a7897af.Uniform2(25, EndVec_2a7897af_20_3_18);
                _draw_2a7897af.Sampler3(26, DP_2a7897af_14_8_4.Texture, DP_2a7897af_14_8_4.SamplerState);
                _draw_2a7897af.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_381877d6_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_381877d6_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_381877d6_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_381877d6.BlendEnabled(true);
                _draw_381877d6.DepthTestEnabled(false);
                _draw_381877d6.CullFace(uPtr(dc)->CullFace());
                _draw_381877d6.BlendSrcAlpha(7);
                _draw_381877d6.BlendDstRgb(3);
                _draw_381877d6.Const(0, DP_381877d6_14_8_4.NeedFract);
                _draw_381877d6.Const(1, DP_381877d6_14_8_4.Texture == NULL);
                _draw_381877d6.Use();
                _draw_381877d6.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_381877d6.Uniform(3, radius + (extend * 2.0f));
                _draw_381877d6.Uniform2(4, center);
                _draw_381877d6.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_381877d6.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_381877d6.Uniform2(7, DP_381877d6_14_8_4.Origin);
                _draw_381877d6.Uniform2(8, DP_381877d6_14_8_4.Size);
                _draw_381877d6.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_381877d6.Uniform2(10, (ind6 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_381877d6.Uniform2(11, DP_381877d6_14_8_4.TexCoordScale1);
                _draw_381877d6.Uniform2(12, DP_381877d6_14_8_4.TexCoordBias1);
                _draw_381877d6.Uniform2(13, DP_381877d6_14_8_4.TexCoordScale2);
                _draw_381877d6.Uniform2(14, DP_381877d6_14_8_4.TexCoordBias2);
                _draw_381877d6.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_381877d6.Uniform(16, radiusRcp);
                _draw_381877d6.Uniform(17, radius);
                _draw_381877d6.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_381877d6.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_381877d6.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_381877d6.Uniform(21, 1.0f / smoothness);
                _draw_381877d6.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_381877d6.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_381877d6_20_2_17, EndVec_381877d6_20_3_18)));
                _draw_381877d6.Uniform2(24, StartVec_381877d6_20_2_17);
                _draw_381877d6.Uniform2(25, EndVec_381877d6_20_3_18);
                _draw_381877d6.Sampler3(26, DP_381877d6_14_8_4.Texture, DP_381877d6_14_8_4.SamplerState);
                _draw_381877d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c049787e_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_c049787e.BlendEnabled(true);
                _draw_c049787e.DepthTestEnabled(false);
                _draw_c049787e.CullFace(uPtr(dc)->CullFace());
                _draw_c049787e.BlendSrcAlpha(7);
                _draw_c049787e.BlendDstRgb(3);
                _draw_c049787e.Const(0, DP_c049787e_14_8_4.NeedFract);
                _draw_c049787e.Const(1, DP_c049787e_14_8_4.Texture == NULL);
                _draw_c049787e.Use();
                _draw_c049787e.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c049787e.Uniform(3, radius + (extend * 2.0f));
                _draw_c049787e.Uniform2(4, center);
                _draw_c049787e.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c049787e.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c049787e.Uniform2(7, DP_c049787e_14_8_4.Origin);
                _draw_c049787e.Uniform2(8, DP_c049787e_14_8_4.Size);
                _draw_c049787e.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_c049787e.Uniform2(10, (ind9 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_c049787e.Uniform2(11, DP_c049787e_14_8_4.TexCoordScale1);
                _draw_c049787e.Uniform2(12, DP_c049787e_14_8_4.TexCoordBias1);
                _draw_c049787e.Uniform2(13, DP_c049787e_14_8_4.TexCoordScale2);
                _draw_c049787e.Uniform2(14, DP_c049787e_14_8_4.TexCoordBias2);
                _draw_c049787e.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c049787e.Uniform(16, radiusRcp);
                _draw_c049787e.Uniform(17, radius);
                _draw_c049787e.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_c049787e.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_c049787e.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_c049787e.Uniform(21, 1.0f / smoothness);
                _draw_c049787e.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c049787e.Sampler3(23, DP_c049787e_14_8_4.Texture, DP_c049787e_14_8_4.SamplerState);
                _draw_c049787e.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_b10a9dbb_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_b10a9dbb_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_b10a9dbb.BlendEnabled(true);
                _draw_b10a9dbb.DepthTestEnabled(false);
                _draw_b10a9dbb.CullFace(uPtr(dc)->CullFace());
                _draw_b10a9dbb.BlendSrcAlpha(7);
                _draw_b10a9dbb.BlendDstRgb(3);
                _draw_b10a9dbb.Use();
                _draw_b10a9dbb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b10a9dbb.Uniform(1, radius + (extend * 2.0f));
                _draw_b10a9dbb.Uniform2(2, center);
                _draw_b10a9dbb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b10a9dbb.Uniform(4, radiusRcp);
                _draw_b10a9dbb.Uniform(5, radius);
                _draw_b10a9dbb.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_b10a9dbb.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_b10a9dbb.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_b10a9dbb.Uniform(9, 1.0f / smoothness);
                _draw_b10a9dbb.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_b10a9dbb.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_b10a9dbb.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_b10a9dbb_20_2_8, EndVec_b10a9dbb_20_3_9)));
                _draw_b10a9dbb.Uniform2(13, StartVec_b10a9dbb_20_2_8);
                _draw_b10a9dbb.Uniform2(14, EndVec_b10a9dbb_20_3_9);
                _draw_b10a9dbb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_93267da2_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_93267da2_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_93267da2.BlendEnabled(true);
                _draw_93267da2.DepthTestEnabled(false);
                _draw_93267da2.CullFace(uPtr(dc)->CullFace());
                _draw_93267da2.BlendSrcAlpha(7);
                _draw_93267da2.BlendDstRgb(3);
                _draw_93267da2.Use();
                _draw_93267da2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_93267da2.Uniform(1, radius + (extend * 2.0f));
                _draw_93267da2.Uniform2(2, center);
                _draw_93267da2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_93267da2.Uniform(4, radiusRcp);
                _draw_93267da2.Uniform(5, radius);
                _draw_93267da2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_93267da2.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_93267da2.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_93267da2.Uniform(9, 1.0f / smoothness);
                _draw_93267da2.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind11 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind11.X, ind11.Y, ind11.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_93267da2.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_93267da2.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_93267da2_20_2_8, EndVec_93267da2_20_3_9)));
                _draw_93267da2.Uniform2(13, StartVec_93267da2_20_2_8);
                _draw_93267da2.Uniform2(14, EndVec_93267da2_20_3_9);
                _draw_93267da2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_22061cc2.BlendEnabled(true);
                _draw_22061cc2.DepthTestEnabled(false);
                _draw_22061cc2.CullFace(uPtr(dc)->CullFace());
                _draw_22061cc2.BlendSrcAlpha(7);
                _draw_22061cc2.BlendDstRgb(3);
                _draw_22061cc2.Use();
                _draw_22061cc2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_22061cc2.Uniform(1, radius + (extend * 2.0f));
                _draw_22061cc2.Uniform2(2, center);
                _draw_22061cc2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_22061cc2.Uniform(4, radiusRcp);
                _draw_22061cc2.Uniform(5, radius);
                _draw_22061cc2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_22061cc2.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_22061cc2.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_22061cc2.Uniform(9, 1.0f / smoothness);
                _draw_22061cc2.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind12 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_22061cc2.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_22061cc2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_25966248_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_25966248_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_25966248_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_25966248.BlendEnabled(true);
                _draw_25966248.DepthTestEnabled(false);
                _draw_25966248.CullFace(uPtr(dc)->CullFace());
                _draw_25966248.BlendSrcAlpha(7);
                _draw_25966248.BlendDstRgb(3);
                _draw_25966248.Use();
                _draw_25966248.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_25966248.Uniform(1, radius + (extend * 2.0f));
                _draw_25966248.Uniform2(2, center);
                _draw_25966248.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_25966248.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_25966248.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_25966248.Uniform(6, radiusRcp);
                _draw_25966248.Uniform(7, radius);
                _draw_25966248.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_25966248.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_25966248.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_25966248.Uniform(11, 1.0f / smoothness);
                _draw_25966248.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_25966248.Uniform10(13, endPoints_25966248_14_17_6);
                _draw_25966248.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25966248_14_17_6.Z, endPoints_25966248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25966248_14_17_6.X, endPoints_25966248_14_17_6.Y))));
                _draw_25966248.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25966248_14_17_6.Z, endPoints_25966248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25966248_14_17_6.X, endPoints_25966248_14_17_6.Y))));
                _draw_25966248.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_25966248_20_2_15, EndVec_25966248_20_3_16)));
                _draw_25966248.Uniform2(17, StartVec_25966248_20_2_15);
                _draw_25966248.Uniform2(18, EndVec_25966248_20_3_16);
                _draw_25966248.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_25966248.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_648c56fb_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_648c56fb_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_648c56fb_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_648c56fb.BlendEnabled(true);
                _draw_648c56fb.DepthTestEnabled(false);
                _draw_648c56fb.CullFace(uPtr(dc)->CullFace());
                _draw_648c56fb.BlendSrcAlpha(7);
                _draw_648c56fb.BlendDstRgb(3);
                _draw_648c56fb.Use();
                _draw_648c56fb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_648c56fb.Uniform(1, radius + (extend * 2.0f));
                _draw_648c56fb.Uniform2(2, center);
                _draw_648c56fb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_648c56fb.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_648c56fb.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_648c56fb.Uniform(6, radiusRcp);
                _draw_648c56fb.Uniform(7, radius);
                _draw_648c56fb.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_648c56fb.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_648c56fb.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_648c56fb.Uniform(11, 1.0f / smoothness);
                _draw_648c56fb.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_648c56fb.Uniform10(13, endPoints_648c56fb_14_17_6);
                _draw_648c56fb.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.Z, endPoints_648c56fb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.X, endPoints_648c56fb_14_17_6.Y))));
                _draw_648c56fb.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.Z, endPoints_648c56fb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.X, endPoints_648c56fb_14_17_6.Y))));
                _draw_648c56fb.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_648c56fb_20_2_15, EndVec_648c56fb_20_3_16)));
                _draw_648c56fb.Uniform2(17, StartVec_648c56fb_20_2_15);
                _draw_648c56fb.Uniform2(18, EndVec_648c56fb_20_3_16);
                _draw_648c56fb.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_648c56fb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_25ed247a_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_25ed247a.BlendEnabled(true);
                _draw_25ed247a.DepthTestEnabled(false);
                _draw_25ed247a.CullFace(uPtr(dc)->CullFace());
                _draw_25ed247a.BlendSrcAlpha(7);
                _draw_25ed247a.BlendDstRgb(3);
                _draw_25ed247a.Use();
                _draw_25ed247a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_25ed247a.Uniform(1, radius + (extend * 2.0f));
                _draw_25ed247a.Uniform2(2, center);
                _draw_25ed247a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_25ed247a.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_25ed247a.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_25ed247a.Uniform(6, radiusRcp);
                _draw_25ed247a.Uniform(7, radius);
                _draw_25ed247a.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_25ed247a.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_25ed247a.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_25ed247a.Uniform(11, 1.0f / smoothness);
                _draw_25ed247a.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_25ed247a.Uniform10(13, endPoints_25ed247a_14_17_6);
                _draw_25ed247a.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.Z, endPoints_25ed247a_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.X, endPoints_25ed247a_14_17_6.Y))));
                _draw_25ed247a.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.Z, endPoints_25ed247a_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.X, endPoints_25ed247a_14_17_6.Y))));
                _draw_25ed247a.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_25ed247a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_7a46b9d6_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_7a46b9d6_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_7a46b9d6.BlendEnabled(true);
                _draw_7a46b9d6.DepthTestEnabled(false);
                _draw_7a46b9d6.CullFace(uPtr(dc)->CullFace());
                _draw_7a46b9d6.BlendSrcAlpha(7);
                _draw_7a46b9d6.BlendDstRgb(3);
                _draw_7a46b9d6.Use();
                _draw_7a46b9d6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_7a46b9d6.Uniform(1, radius + (extend * 2.0f));
                _draw_7a46b9d6.Uniform2(2, center);
                _draw_7a46b9d6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_7a46b9d6.Uniform(4, radiusRcp);
                _draw_7a46b9d6.Uniform(5, radius);
                _draw_7a46b9d6.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_7a46b9d6.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_7a46b9d6.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_7a46b9d6.Uniform(9, 1.0f / smoothness);
                _draw_7a46b9d6.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind13 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_7a46b9d6.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_7a46b9d6_20_2_8, EndVec_7a46b9d6_20_3_9)));
                _draw_7a46b9d6.Uniform2(12, StartVec_7a46b9d6_20_2_8);
                _draw_7a46b9d6.Uniform2(13, EndVec_7a46b9d6_20_3_9);
                _draw_7a46b9d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_797b524_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_797b524_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_797b524.BlendEnabled(true);
                _draw_797b524.DepthTestEnabled(false);
                _draw_797b524.CullFace(uPtr(dc)->CullFace());
                _draw_797b524.BlendSrcAlpha(7);
                _draw_797b524.BlendDstRgb(3);
                _draw_797b524.Use();
                _draw_797b524.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_797b524.Uniform(1, radius + (extend * 2.0f));
                _draw_797b524.Uniform2(2, center);
                _draw_797b524.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_797b524.Uniform(4, radiusRcp);
                _draw_797b524.Uniform(5, radius);
                _draw_797b524.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_797b524.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_797b524.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_797b524.Uniform(9, 1.0f / smoothness);
                _draw_797b524.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind14 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_797b524.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_797b524_20_2_8, EndVec_797b524_20_3_9)));
                _draw_797b524.Uniform2(12, StartVec_797b524_20_2_8);
                _draw_797b524.Uniform2(13, EndVec_797b524_20_3_9);
                _draw_797b524.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_edd754f9.BlendEnabled(true);
                _draw_edd754f9.DepthTestEnabled(false);
                _draw_edd754f9.CullFace(uPtr(dc)->CullFace());
                _draw_edd754f9.BlendSrcAlpha(7);
                _draw_edd754f9.BlendDstRgb(3);
                _draw_edd754f9.Use();
                _draw_edd754f9.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_edd754f9.Uniform(1, radius + (extend * 2.0f));
                _draw_edd754f9.Uniform2(2, center);
                _draw_edd754f9.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_edd754f9.Uniform(4, radiusRcp);
                _draw_edd754f9.Uniform(5, radius);
                _draw_edd754f9.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_edd754f9.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_edd754f9.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_edd754f9.Uniform(9, 1.0f / smoothness);
                _draw_edd754f9.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind15 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_edd754f9.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_6284fe65_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_6284fe65_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_6284fe65_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_6284fe65.BlendEnabled(true);
                _draw_6284fe65.DepthTestEnabled(false);
                _draw_6284fe65.CullFace(uPtr(dc)->CullFace());
                _draw_6284fe65.BlendSrcAlpha(7);
                _draw_6284fe65.BlendDstRgb(3);
                _draw_6284fe65.Const(0, DP_6284fe65_14_8_4.NeedFract);
                _draw_6284fe65.Const(1, DP_6284fe65_14_8_4.Texture == NULL);
                _draw_6284fe65.Use();
                _draw_6284fe65.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_6284fe65.Uniform(3, radius + (extend * 2.0f));
                _draw_6284fe65.Uniform2(4, center);
                _draw_6284fe65.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_6284fe65.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_6284fe65.Uniform2(7, DP_6284fe65_14_8_4.Origin);
                _draw_6284fe65.Uniform2(8, DP_6284fe65_14_8_4.Size);
                _draw_6284fe65.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind16 = DP_6284fe65_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.Z, ind16.W)), (ind17 = DP_6284fe65_14_8_4.UVClip, ::g::Uno::Float2__New2(ind17.X, ind17.Y))));
                _draw_6284fe65.Uniform2(10, (ind18 = DP_6284fe65_14_8_4.UVClip, ::g::Uno::Float2__New2(ind18.X, ind18.Y)));
                _draw_6284fe65.Uniform2(11, DP_6284fe65_14_8_4.TexCoordScale1);
                _draw_6284fe65.Uniform2(12, DP_6284fe65_14_8_4.TexCoordBias1);
                _draw_6284fe65.Uniform2(13, DP_6284fe65_14_8_4.TexCoordScale2);
                _draw_6284fe65.Uniform2(14, DP_6284fe65_14_8_4.TexCoordBias2);
                _draw_6284fe65.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_6284fe65.Uniform(16, radiusRcp);
                _draw_6284fe65.Uniform(17, radius);
                _draw_6284fe65.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_6284fe65.Uniform(19, 1.0f / smoothness);
                _draw_6284fe65.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_6284fe65.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_6284fe65_20_2_16, EndVec_6284fe65_20_3_17)));
                _draw_6284fe65.Uniform2(22, StartVec_6284fe65_20_2_16);
                _draw_6284fe65.Uniform2(23, EndVec_6284fe65_20_3_17);
                _draw_6284fe65.Sampler3(24, DP_6284fe65_14_8_4.Texture, DP_6284fe65_14_8_4.SamplerState);
                _draw_6284fe65.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_ad41be70_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_ad41be70_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ad41be70_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_ad41be70.BlendEnabled(true);
                _draw_ad41be70.DepthTestEnabled(false);
                _draw_ad41be70.CullFace(uPtr(dc)->CullFace());
                _draw_ad41be70.BlendSrcAlpha(7);
                _draw_ad41be70.BlendDstRgb(3);
                _draw_ad41be70.Const(0, DP_ad41be70_14_8_4.NeedFract);
                _draw_ad41be70.Const(1, DP_ad41be70_14_8_4.Texture == NULL);
                _draw_ad41be70.Use();
                _draw_ad41be70.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ad41be70.Uniform(3, radius + (extend * 2.0f));
                _draw_ad41be70.Uniform2(4, center);
                _draw_ad41be70.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_ad41be70.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_ad41be70.Uniform2(7, DP_ad41be70_14_8_4.Origin);
                _draw_ad41be70.Uniform2(8, DP_ad41be70_14_8_4.Size);
                _draw_ad41be70.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind19 = DP_ad41be70_14_8_4.UVClip, ::g::Uno::Float2__New2(ind19.Z, ind19.W)), (ind20 = DP_ad41be70_14_8_4.UVClip, ::g::Uno::Float2__New2(ind20.X, ind20.Y))));
                _draw_ad41be70.Uniform2(10, (ind21 = DP_ad41be70_14_8_4.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_ad41be70.Uniform2(11, DP_ad41be70_14_8_4.TexCoordScale1);
                _draw_ad41be70.Uniform2(12, DP_ad41be70_14_8_4.TexCoordBias1);
                _draw_ad41be70.Uniform2(13, DP_ad41be70_14_8_4.TexCoordScale2);
                _draw_ad41be70.Uniform2(14, DP_ad41be70_14_8_4.TexCoordBias2);
                _draw_ad41be70.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_ad41be70.Uniform(16, radiusRcp);
                _draw_ad41be70.Uniform(17, radius);
                _draw_ad41be70.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_ad41be70.Uniform(19, 1.0f / smoothness);
                _draw_ad41be70.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_ad41be70.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ad41be70_20_2_16, EndVec_ad41be70_20_3_17)));
                _draw_ad41be70.Uniform2(22, StartVec_ad41be70_20_2_16);
                _draw_ad41be70.Uniform2(23, EndVec_ad41be70_20_3_17);
                _draw_ad41be70.Sampler3(24, DP_ad41be70_14_8_4.Texture, DP_ad41be70_14_8_4.SamplerState);
                _draw_ad41be70.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_d62feaf8_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_d62feaf8.BlendEnabled(true);
                _draw_d62feaf8.DepthTestEnabled(false);
                _draw_d62feaf8.CullFace(uPtr(dc)->CullFace());
                _draw_d62feaf8.BlendSrcAlpha(7);
                _draw_d62feaf8.BlendDstRgb(3);
                _draw_d62feaf8.Const(0, DP_d62feaf8_14_8_4.NeedFract);
                _draw_d62feaf8.Const(1, DP_d62feaf8_14_8_4.Texture == NULL);
                _draw_d62feaf8.Use();
                _draw_d62feaf8.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_d62feaf8.Uniform(3, radius + (extend * 2.0f));
                _draw_d62feaf8.Uniform2(4, center);
                _draw_d62feaf8.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_d62feaf8.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_d62feaf8.Uniform2(7, DP_d62feaf8_14_8_4.Origin);
                _draw_d62feaf8.Uniform2(8, DP_d62feaf8_14_8_4.Size);
                _draw_d62feaf8.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_d62feaf8_14_8_4.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_d62feaf8_14_8_4.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_d62feaf8.Uniform2(10, (ind24 = DP_d62feaf8_14_8_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_d62feaf8.Uniform2(11, DP_d62feaf8_14_8_4.TexCoordScale1);
                _draw_d62feaf8.Uniform2(12, DP_d62feaf8_14_8_4.TexCoordBias1);
                _draw_d62feaf8.Uniform2(13, DP_d62feaf8_14_8_4.TexCoordScale2);
                _draw_d62feaf8.Uniform2(14, DP_d62feaf8_14_8_4.TexCoordBias2);
                _draw_d62feaf8.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_d62feaf8.Uniform(16, radiusRcp);
                _draw_d62feaf8.Uniform(17, radius);
                _draw_d62feaf8.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_d62feaf8.Uniform(19, 1.0f / smoothness);
                _draw_d62feaf8.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_d62feaf8.Sampler3(21, DP_d62feaf8_14_8_4.Texture, DP_d62feaf8_14_8_4.SamplerState);
                _draw_d62feaf8.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_80aa6c7f_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_80aa6c7f_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_80aa6c7f.BlendEnabled(true);
                _draw_80aa6c7f.DepthTestEnabled(false);
                _draw_80aa6c7f.CullFace(uPtr(dc)->CullFace());
                _draw_80aa6c7f.BlendSrcAlpha(7);
                _draw_80aa6c7f.BlendDstRgb(3);
                _draw_80aa6c7f.Use();
                _draw_80aa6c7f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_80aa6c7f.Uniform(1, radius + (extend * 2.0f));
                _draw_80aa6c7f.Uniform2(2, center);
                _draw_80aa6c7f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_80aa6c7f.Uniform(4, radiusRcp);
                _draw_80aa6c7f.Uniform(5, radius);
                _draw_80aa6c7f.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_80aa6c7f.Uniform(7, 1.0f / smoothness);
                _draw_80aa6c7f.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind25 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind25.X, ind25.Y, ind25.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_80aa6c7f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_80aa6c7f.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_80aa6c7f_20_2_7, EndVec_80aa6c7f_20_3_8)));
                _draw_80aa6c7f.Uniform2(11, StartVec_80aa6c7f_20_2_7);
                _draw_80aa6c7f.Uniform2(12, EndVec_80aa6c7f_20_3_8);
                _draw_80aa6c7f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_5aea75fd_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_5aea75fd_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_5aea75fd.BlendEnabled(true);
                _draw_5aea75fd.DepthTestEnabled(false);
                _draw_5aea75fd.CullFace(uPtr(dc)->CullFace());
                _draw_5aea75fd.BlendSrcAlpha(7);
                _draw_5aea75fd.BlendDstRgb(3);
                _draw_5aea75fd.Use();
                _draw_5aea75fd.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_5aea75fd.Uniform(1, radius + (extend * 2.0f));
                _draw_5aea75fd.Uniform2(2, center);
                _draw_5aea75fd.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_5aea75fd.Uniform(4, radiusRcp);
                _draw_5aea75fd.Uniform(5, radius);
                _draw_5aea75fd.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_5aea75fd.Uniform(7, 1.0f / smoothness);
                _draw_5aea75fd.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind26 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind26.X, ind26.Y, ind26.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_5aea75fd.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_5aea75fd.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_5aea75fd_20_2_7, EndVec_5aea75fd_20_3_8)));
                _draw_5aea75fd.Uniform2(11, StartVec_5aea75fd_20_2_7);
                _draw_5aea75fd.Uniform2(12, EndVec_5aea75fd_20_3_8);
                _draw_5aea75fd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_6751d938.BlendEnabled(true);
                _draw_6751d938.DepthTestEnabled(false);
                _draw_6751d938.CullFace(uPtr(dc)->CullFace());
                _draw_6751d938.BlendSrcAlpha(7);
                _draw_6751d938.BlendDstRgb(3);
                _draw_6751d938.Use();
                _draw_6751d938.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_6751d938.Uniform(1, radius + (extend * 2.0f));
                _draw_6751d938.Uniform2(2, center);
                _draw_6751d938.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_6751d938.Uniform(4, radiusRcp);
                _draw_6751d938.Uniform(5, radius);
                _draw_6751d938.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_6751d938.Uniform(7, 1.0f / smoothness);
                _draw_6751d938.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind27 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind27.X, ind27.Y, ind27.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_6751d938.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_6751d938.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_159c86b6_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_159c86b6_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_159c86b6_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_159c86b6.BlendEnabled(true);
                _draw_159c86b6.DepthTestEnabled(false);
                _draw_159c86b6.CullFace(uPtr(dc)->CullFace());
                _draw_159c86b6.BlendSrcAlpha(7);
                _draw_159c86b6.BlendDstRgb(3);
                _draw_159c86b6.Use();
                _draw_159c86b6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_159c86b6.Uniform(1, radius + (extend * 2.0f));
                _draw_159c86b6.Uniform2(2, center);
                _draw_159c86b6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_159c86b6.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_159c86b6.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_159c86b6.Uniform(6, radiusRcp);
                _draw_159c86b6.Uniform(7, radius);
                _draw_159c86b6.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_159c86b6.Uniform(9, 1.0f / smoothness);
                _draw_159c86b6.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_159c86b6.Uniform10(11, endPoints_159c86b6_14_17_6);
                _draw_159c86b6.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_159c86b6_14_17_6.Z, endPoints_159c86b6_14_17_6.W), ::g::Uno::Float2__New2(endPoints_159c86b6_14_17_6.X, endPoints_159c86b6_14_17_6.Y))));
                _draw_159c86b6.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_159c86b6_14_17_6.Z, endPoints_159c86b6_14_17_6.W), ::g::Uno::Float2__New2(endPoints_159c86b6_14_17_6.X, endPoints_159c86b6_14_17_6.Y))));
                _draw_159c86b6.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_159c86b6_20_2_14, EndVec_159c86b6_20_3_15)));
                _draw_159c86b6.Uniform2(15, StartVec_159c86b6_20_2_14);
                _draw_159c86b6.Uniform2(16, EndVec_159c86b6_20_3_15);
                _draw_159c86b6.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_159c86b6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_e19c5b2d_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_e19c5b2d_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_e19c5b2d_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_e19c5b2d.BlendEnabled(true);
                _draw_e19c5b2d.DepthTestEnabled(false);
                _draw_e19c5b2d.CullFace(uPtr(dc)->CullFace());
                _draw_e19c5b2d.BlendSrcAlpha(7);
                _draw_e19c5b2d.BlendDstRgb(3);
                _draw_e19c5b2d.Use();
                _draw_e19c5b2d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e19c5b2d.Uniform(1, radius + (extend * 2.0f));
                _draw_e19c5b2d.Uniform2(2, center);
                _draw_e19c5b2d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_e19c5b2d.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_e19c5b2d.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e19c5b2d.Uniform(6, radiusRcp);
                _draw_e19c5b2d.Uniform(7, radius);
                _draw_e19c5b2d.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_e19c5b2d.Uniform(9, 1.0f / smoothness);
                _draw_e19c5b2d.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e19c5b2d.Uniform10(11, endPoints_e19c5b2d_14_17_6);
                _draw_e19c5b2d.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e19c5b2d_14_17_6.Z, endPoints_e19c5b2d_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e19c5b2d_14_17_6.X, endPoints_e19c5b2d_14_17_6.Y))));
                _draw_e19c5b2d.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e19c5b2d_14_17_6.Z, endPoints_e19c5b2d_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e19c5b2d_14_17_6.X, endPoints_e19c5b2d_14_17_6.Y))));
                _draw_e19c5b2d.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_e19c5b2d_20_2_14, EndVec_e19c5b2d_20_3_15)));
                _draw_e19c5b2d.Uniform2(15, StartVec_e19c5b2d_20_2_14);
                _draw_e19c5b2d.Uniform2(16, EndVec_e19c5b2d_20_3_15);
                _draw_e19c5b2d.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_e19c5b2d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_c23596bb_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_c23596bb.BlendEnabled(true);
                _draw_c23596bb.DepthTestEnabled(false);
                _draw_c23596bb.CullFace(uPtr(dc)->CullFace());
                _draw_c23596bb.BlendSrcAlpha(7);
                _draw_c23596bb.BlendDstRgb(3);
                _draw_c23596bb.Use();
                _draw_c23596bb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c23596bb.Uniform(1, radius + (extend * 2.0f));
                _draw_c23596bb.Uniform2(2, center);
                _draw_c23596bb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c23596bb.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_c23596bb.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_c23596bb.Uniform(6, radiusRcp);
                _draw_c23596bb.Uniform(7, radius);
                _draw_c23596bb.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_c23596bb.Uniform(9, 1.0f / smoothness);
                _draw_c23596bb.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_c23596bb.Uniform10(11, endPoints_c23596bb_14_17_6);
                _draw_c23596bb.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_c23596bb_14_17_6.Z, endPoints_c23596bb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_c23596bb_14_17_6.X, endPoints_c23596bb_14_17_6.Y))));
                _draw_c23596bb.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_c23596bb_14_17_6.Z, endPoints_c23596bb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_c23596bb_14_17_6.X, endPoints_c23596bb_14_17_6.Y))));
                _draw_c23596bb.Sampler3(14, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_c23596bb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_d2f1197a_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_d2f1197a_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_d2f1197a.BlendEnabled(true);
                _draw_d2f1197a.DepthTestEnabled(false);
                _draw_d2f1197a.CullFace(uPtr(dc)->CullFace());
                _draw_d2f1197a.BlendSrcAlpha(7);
                _draw_d2f1197a.BlendDstRgb(3);
                _draw_d2f1197a.Use();
                _draw_d2f1197a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_d2f1197a.Uniform(1, radius + (extend * 2.0f));
                _draw_d2f1197a.Uniform2(2, center);
                _draw_d2f1197a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_d2f1197a.Uniform(4, radiusRcp);
                _draw_d2f1197a.Uniform(5, radius);
                _draw_d2f1197a.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_d2f1197a.Uniform(7, 1.0f / smoothness);
                _draw_d2f1197a.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind28 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind28.X, ind28.Y, ind28.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_d2f1197a.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_d2f1197a_20_2_7, EndVec_d2f1197a_20_3_8)));
                _draw_d2f1197a.Uniform2(10, StartVec_d2f1197a_20_2_7);
                _draw_d2f1197a.Uniform2(11, EndVec_d2f1197a_20_3_8);
                _draw_d2f1197a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_eb7847c4_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_eb7847c4_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_eb7847c4.BlendEnabled(true);
                _draw_eb7847c4.DepthTestEnabled(false);
                _draw_eb7847c4.CullFace(uPtr(dc)->CullFace());
                _draw_eb7847c4.BlendSrcAlpha(7);
                _draw_eb7847c4.BlendDstRgb(3);
                _draw_eb7847c4.Use();
                _draw_eb7847c4.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_eb7847c4.Uniform(1, radius + (extend * 2.0f));
                _draw_eb7847c4.Uniform2(2, center);
                _draw_eb7847c4.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_eb7847c4.Uniform(4, radiusRcp);
                _draw_eb7847c4.Uniform(5, radius);
                _draw_eb7847c4.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_eb7847c4.Uniform(7, 1.0f / smoothness);
                _draw_eb7847c4.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind29 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind29.X, ind29.Y, ind29.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_eb7847c4.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_eb7847c4_20_2_7, EndVec_eb7847c4_20_3_8)));
                _draw_eb7847c4.Uniform2(10, StartVec_eb7847c4_20_2_7);
                _draw_eb7847c4.Uniform2(11, EndVec_eb7847c4_20_3_8);
                _draw_eb7847c4.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_a1a67e1.BlendEnabled(true);
                _draw_a1a67e1.DepthTestEnabled(false);
                _draw_a1a67e1.CullFace(uPtr(dc)->CullFace());
                _draw_a1a67e1.BlendSrcAlpha(7);
                _draw_a1a67e1.BlendDstRgb(3);
                _draw_a1a67e1.Use();
                _draw_a1a67e1.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a1a67e1.Uniform(1, radius + (extend * 2.0f));
                _draw_a1a67e1.Uniform2(2, center);
                _draw_a1a67e1.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_a1a67e1.Uniform(4, radiusRcp);
                _draw_a1a67e1.Uniform(5, radius);
                _draw_a1a67e1.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_a1a67e1.Uniform(7, 1.0f / smoothness);
                _draw_a1a67e1.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind30 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind30.X, ind30.Y, ind30.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_a1a67e1.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance]
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, smoothness, center, smoothness);
}

// private generated void init_DrawCalls() [instance]
void Circle::init_DrawCalls()
{
    _draw_2a7897af = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6fa31eb0());
    _draw_381877d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled03fdf74());
    _draw_c049787e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle08faad29());
    _draw_b10a9dbb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle2ad0f86f());
    _draw_93267da2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle14c4da1d());
    _draw_22061cc2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlebe0c57c7());
    _draw_25966248 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle749c4263());
    _draw_648c56fb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5116898d());
    _draw_25ed247a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef89e5004());
    _draw_7a46b9d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6f96fc09());
    _draw_797b524 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0756ecfb());
    _draw_edd754f9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle91d9beaf());
    _draw_6284fe65 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle59bbb374());
    _draw_ad41be70 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4151b807());
    _draw_d62feaf8 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle573295ca());
    _draw_80aa6c7f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle939abdb4());
    _draw_5aea75fd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6a2abd4a());
    _draw_6751d938 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle3860003b());
    _draw_159c86b6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle3fbc2b9b());
    _draw_e19c5b2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlec3de8816());
    _draw_c23596bb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee81e0147());
    _draw_d2f1197a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle12718a64());
    _draw_eb7847c4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle044c5e8c());
    _draw_a1a67e1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle8f7703ba());
}

// private void InitBuffers() [instance]
void Circle::InitBuffers()
{
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int32_t numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int32_t i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance]
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, extend, center, smoothness);
}

// public generated Circle New() [static]
Circle* Circle::New1()
{
    Circle* obj31 = (Circle*)uNew(Circle_typeof());
    obj31->ctor_();
    return obj31;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage()
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New()
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance]
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static]
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage()
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New()
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance]
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static]
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// internal abstract class Coverage
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage()
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance]
void Coverage::ctor_()
{
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// internal class Falloff
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff()
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New()
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance]
void Falloff::ctor_()
{
}

// public generated Falloff New() [static]
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FillCoverage
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage()
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New()
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance]
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static]
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// internal abstract class LimitCoverage
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage()
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance]
void LimitCoverage::ctor_()
{
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Circle.uno
// ----------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class OneLimitCoverage
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage()
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New()
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance]
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static]
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Rectangle
// {
// static generated Rectangle()
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[9] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[12] = ::TYPES[9/*float[]*/]->Array();
    ::TYPES[13] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Rectangle, _strokeCoverage), 0,
        ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(Rectangle, _shadowFalloff), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _edgeInfo), 0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(Rectangle, _bufferDistance), 0,
        ::TYPES[9/*float[]*/], offsetof(Rectangle, _uniforms), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8ea59fa1), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_756a815), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_db3963ea), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_46d298b5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_ececdec4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1fb4228), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_9f25b31c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e693f66d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_20daab84), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_ed4f3bf), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_a74e71d3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_86152fe3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8de95790), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8a1f08e4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_4ceac7b6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_47dafdd1), 0,
        type, (uintptr_t)&Rectangle::Singleton_, uFieldFlagsStatic);
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle()
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b)
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff])
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness])
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls()
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a)
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New()
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness])
void Rectangle__Shadow_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Shadow(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness])
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b)
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance]
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[9/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance]
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance]
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int32_t i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    float float16MaxValue = 65504.0f;
    float distanceScale = ::g::Uno::Math::Max1(1.0f, ::g::Uno::Math::Max1(Size.X + extend.X, Size.Y + extend.Y) / ::g::Uno::Math::Sqrt1(float16MaxValue * 0.5f));
    distanceScale = ::g::Uno::Math::Exp22(::g::Uno::Math::Ceil1(::g::Uno::Math::Log22(distanceScale)));
    float distanceScaleRcp = 1.0f / distanceScale;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[10/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_8ea59fa1_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_8ea59fa1.BlendEnabled(true);
                _draw_8ea59fa1.DepthTestEnabled(false);
                _draw_8ea59fa1.CullFace(uPtr(dc)->CullFace());
                _draw_8ea59fa1.BlendSrcAlpha(7);
                _draw_8ea59fa1.BlendDstRgb(3);
                _draw_8ea59fa1.Const1(0, uPtr(_uniforms)->Length());
                _draw_8ea59fa1.Const(1, DP_8ea59fa1_14_8_4.NeedFract);
                _draw_8ea59fa1.Const(2, DP_8ea59fa1_14_8_4.Texture == NULL);
                _draw_8ea59fa1.Use();
                _draw_8ea59fa1.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8ea59fa1.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8ea59fa1.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8ea59fa1.Uniform1(6, _uniforms);
                _draw_8ea59fa1.Uniform2(7, position);
                _draw_8ea59fa1.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_8ea59fa1.Uniform2(9, csz);
                _draw_8ea59fa1.Uniform2(10, DP_8ea59fa1_14_8_4.Origin);
                _draw_8ea59fa1.Uniform2(11, DP_8ea59fa1_14_8_4.Size);
                _draw_8ea59fa1.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_8ea59fa1.Uniform2(13, (ind3 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_8ea59fa1.Uniform2(14, DP_8ea59fa1_14_8_4.TexCoordScale1);
                _draw_8ea59fa1.Uniform2(15, DP_8ea59fa1_14_8_4.TexCoordBias1);
                _draw_8ea59fa1.Uniform2(16, DP_8ea59fa1_14_8_4.TexCoordScale2);
                _draw_8ea59fa1.Uniform2(17, DP_8ea59fa1_14_8_4.TexCoordBias2);
                _draw_8ea59fa1.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_8ea59fa1.Uniform(19, distanceScaleRcp);
                _draw_8ea59fa1.Uniform(20, distanceScale);
                _draw_8ea59fa1.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8ea59fa1.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8ea59fa1.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_8ea59fa1.Uniform(24, 1.0f / smoothness);
                _draw_8ea59fa1.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_8ea59fa1.Sampler3(26, DP_8ea59fa1_14_8_4.Texture, DP_8ea59fa1_14_8_4.SamplerState);
                _draw_8ea59fa1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_756a815_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_756a815.BlendEnabled(true);
                _draw_756a815.DepthTestEnabled(false);
                _draw_756a815.CullFace(uPtr(dc)->CullFace());
                _draw_756a815.BlendSrcAlpha(7);
                _draw_756a815.BlendDstRgb(3);
                _draw_756a815.Const1(0, uPtr(_uniforms)->Length());
                _draw_756a815.Const(1, DP_756a815_14_8_4.NeedFract);
                _draw_756a815.Const(2, DP_756a815_14_8_4.Texture == NULL);
                _draw_756a815.Use();
                _draw_756a815.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_756a815.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_756a815.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_756a815.Uniform1(6, _uniforms);
                _draw_756a815.Uniform2(7, position);
                _draw_756a815.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_756a815.Uniform2(9, csz);
                _draw_756a815.Uniform2(10, DP_756a815_14_8_4.Origin);
                _draw_756a815.Uniform2(11, DP_756a815_14_8_4.Size);
                _draw_756a815.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_756a815.Uniform2(13, (ind6 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_756a815.Uniform2(14, DP_756a815_14_8_4.TexCoordScale1);
                _draw_756a815.Uniform2(15, DP_756a815_14_8_4.TexCoordBias1);
                _draw_756a815.Uniform2(16, DP_756a815_14_8_4.TexCoordScale2);
                _draw_756a815.Uniform2(17, DP_756a815_14_8_4.TexCoordBias2);
                _draw_756a815.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_756a815.Uniform(19, distanceScaleRcp);
                _draw_756a815.Uniform(20, distanceScale);
                _draw_756a815.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_756a815.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_756a815.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_756a815.Uniform(24, 1.0f / smoothness);
                _draw_756a815.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_756a815.Sampler3(26, DP_756a815_14_8_4.Texture, DP_756a815_14_8_4.SamplerState);
                _draw_756a815.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_db3963ea.BlendEnabled(true);
                _draw_db3963ea.DepthTestEnabled(false);
                _draw_db3963ea.CullFace(uPtr(dc)->CullFace());
                _draw_db3963ea.BlendSrcAlpha(7);
                _draw_db3963ea.BlendDstRgb(3);
                _draw_db3963ea.Const1(0, uPtr(_uniforms)->Length());
                _draw_db3963ea.Use();
                _draw_db3963ea.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_db3963ea.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_db3963ea.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_db3963ea.Uniform1(4, _uniforms);
                _draw_db3963ea.Uniform2(5, position);
                _draw_db3963ea.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_db3963ea.Uniform(7, distanceScaleRcp);
                _draw_db3963ea.Uniform(8, distanceScale);
                _draw_db3963ea.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_db3963ea.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_db3963ea.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_db3963ea.Uniform(12, 1.0f / smoothness);
                _draw_db3963ea.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_db3963ea.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_db3963ea.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_46d298b5.BlendEnabled(true);
                _draw_46d298b5.DepthTestEnabled(false);
                _draw_46d298b5.CullFace(uPtr(dc)->CullFace());
                _draw_46d298b5.BlendSrcAlpha(7);
                _draw_46d298b5.BlendDstRgb(3);
                _draw_46d298b5.Const1(0, uPtr(_uniforms)->Length());
                _draw_46d298b5.Use();
                _draw_46d298b5.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_46d298b5.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_46d298b5.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_46d298b5.Uniform1(4, _uniforms);
                _draw_46d298b5.Uniform2(5, position);
                _draw_46d298b5.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_46d298b5.Uniform(7, distanceScaleRcp);
                _draw_46d298b5.Uniform(8, distanceScale);
                _draw_46d298b5.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46d298b5.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46d298b5.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_46d298b5.Uniform(12, 1.0f / smoothness);
                _draw_46d298b5.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_46d298b5.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_46d298b5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_ececdec4_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_ececdec4.BlendEnabled(true);
                _draw_ececdec4.DepthTestEnabled(false);
                _draw_ececdec4.CullFace(uPtr(dc)->CullFace());
                _draw_ececdec4.BlendSrcAlpha(7);
                _draw_ececdec4.BlendDstRgb(3);
                _draw_ececdec4.Const1(0, uPtr(_uniforms)->Length());
                _draw_ececdec4.Use();
                _draw_ececdec4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_ececdec4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_ececdec4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_ececdec4.Uniform1(4, _uniforms);
                _draw_ececdec4.Uniform2(5, position);
                _draw_ececdec4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_ececdec4.Uniform2(7, csz);
                _draw_ececdec4.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ececdec4.Uniform(9, distanceScaleRcp);
                _draw_ececdec4.Uniform(10, distanceScale);
                _draw_ececdec4.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_ececdec4.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_ececdec4.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_ececdec4.Uniform(14, 1.0f / smoothness);
                _draw_ececdec4.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ececdec4.Uniform10(16, endPoints_ececdec4_14_17_6);
                _draw_ececdec4.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.Z, endPoints_ececdec4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.X, endPoints_ececdec4_14_17_6.Y))));
                _draw_ececdec4.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.Z, endPoints_ececdec4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.X, endPoints_ececdec4_14_17_6.Y))));
                _draw_ececdec4.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_ececdec4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_e1fb4228_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_e1fb4228.BlendEnabled(true);
                _draw_e1fb4228.DepthTestEnabled(false);
                _draw_e1fb4228.CullFace(uPtr(dc)->CullFace());
                _draw_e1fb4228.BlendSrcAlpha(7);
                _draw_e1fb4228.BlendDstRgb(3);
                _draw_e1fb4228.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1fb4228.Use();
                _draw_e1fb4228.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1fb4228.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1fb4228.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1fb4228.Uniform1(4, _uniforms);
                _draw_e1fb4228.Uniform2(5, position);
                _draw_e1fb4228.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1fb4228.Uniform2(7, csz);
                _draw_e1fb4228.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e1fb4228.Uniform(9, distanceScaleRcp);
                _draw_e1fb4228.Uniform(10, distanceScale);
                _draw_e1fb4228.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1fb4228.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1fb4228.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_e1fb4228.Uniform(14, 1.0f / smoothness);
                _draw_e1fb4228.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e1fb4228.Uniform10(16, endPoints_e1fb4228_14_17_6);
                _draw_e1fb4228.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.Z, endPoints_e1fb4228_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.X, endPoints_e1fb4228_14_17_6.Y))));
                _draw_e1fb4228.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.Z, endPoints_e1fb4228_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.X, endPoints_e1fb4228_14_17_6.Y))));
                _draw_e1fb4228.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_e1fb4228.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_9f25b31c.BlendEnabled(true);
                _draw_9f25b31c.DepthTestEnabled(false);
                _draw_9f25b31c.CullFace(uPtr(dc)->CullFace());
                _draw_9f25b31c.BlendSrcAlpha(7);
                _draw_9f25b31c.BlendDstRgb(3);
                _draw_9f25b31c.Const1(0, uPtr(_uniforms)->Length());
                _draw_9f25b31c.Use();
                _draw_9f25b31c.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_9f25b31c.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_9f25b31c.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_9f25b31c.Uniform1(4, _uniforms);
                _draw_9f25b31c.Uniform2(5, position);
                _draw_9f25b31c.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_9f25b31c.Uniform(7, distanceScaleRcp);
                _draw_9f25b31c.Uniform(8, distanceScale);
                _draw_9f25b31c.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_9f25b31c.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_9f25b31c.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_9f25b31c.Uniform(12, 1.0f / smoothness);
                _draw_9f25b31c.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind9 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_9f25b31c.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e693f66d.BlendEnabled(true);
                _draw_e693f66d.DepthTestEnabled(false);
                _draw_e693f66d.CullFace(uPtr(dc)->CullFace());
                _draw_e693f66d.BlendSrcAlpha(7);
                _draw_e693f66d.BlendDstRgb(3);
                _draw_e693f66d.Const1(0, uPtr(_uniforms)->Length());
                _draw_e693f66d.Use();
                _draw_e693f66d.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e693f66d.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e693f66d.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e693f66d.Uniform1(4, _uniforms);
                _draw_e693f66d.Uniform2(5, position);
                _draw_e693f66d.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e693f66d.Uniform(7, distanceScaleRcp);
                _draw_e693f66d.Uniform(8, distanceScale);
                _draw_e693f66d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e693f66d.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e693f66d.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e693f66d.Uniform(12, 1.0f / smoothness);
                _draw_e693f66d.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_e693f66d.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_20daab84_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_20daab84.BlendEnabled(true);
                _draw_20daab84.DepthTestEnabled(false);
                _draw_20daab84.CullFace(uPtr(dc)->CullFace());
                _draw_20daab84.BlendSrcAlpha(7);
                _draw_20daab84.BlendDstRgb(3);
                _draw_20daab84.Const1(0, uPtr(_uniforms)->Length());
                _draw_20daab84.Const(1, DP_20daab84_14_8_4.NeedFract);
                _draw_20daab84.Const(2, DP_20daab84_14_8_4.Texture == NULL);
                _draw_20daab84.Use();
                _draw_20daab84.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_20daab84.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_20daab84.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_20daab84.Uniform1(6, _uniforms);
                _draw_20daab84.Uniform2(7, position);
                _draw_20daab84.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_20daab84.Uniform2(9, csz);
                _draw_20daab84.Uniform2(10, DP_20daab84_14_8_4.Origin);
                _draw_20daab84.Uniform2(11, DP_20daab84_14_8_4.Size);
                _draw_20daab84.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind11 = DP_20daab84_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.Z, ind11.W)), (ind12 = DP_20daab84_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y))));
                _draw_20daab84.Uniform2(13, (ind13 = DP_20daab84_14_8_4.UVClip, ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_20daab84.Uniform2(14, DP_20daab84_14_8_4.TexCoordScale1);
                _draw_20daab84.Uniform2(15, DP_20daab84_14_8_4.TexCoordBias1);
                _draw_20daab84.Uniform2(16, DP_20daab84_14_8_4.TexCoordScale2);
                _draw_20daab84.Uniform2(17, DP_20daab84_14_8_4.TexCoordBias2);
                _draw_20daab84.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_20daab84.Uniform(19, distanceScaleRcp);
                _draw_20daab84.Uniform(20, distanceScale);
                _draw_20daab84.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_20daab84.Uniform(22, 1.0f / smoothness);
                _draw_20daab84.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_20daab84.Sampler3(24, DP_20daab84_14_8_4.Texture, DP_20daab84_14_8_4.SamplerState);
                _draw_20daab84.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_ed4f3bf_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_ed4f3bf.BlendEnabled(true);
                _draw_ed4f3bf.DepthTestEnabled(false);
                _draw_ed4f3bf.CullFace(uPtr(dc)->CullFace());
                _draw_ed4f3bf.BlendSrcAlpha(7);
                _draw_ed4f3bf.BlendDstRgb(3);
                _draw_ed4f3bf.Const1(0, uPtr(_uniforms)->Length());
                _draw_ed4f3bf.Const(1, DP_ed4f3bf_14_8_4.NeedFract);
                _draw_ed4f3bf.Const(2, DP_ed4f3bf_14_8_4.Texture == NULL);
                _draw_ed4f3bf.Use();
                _draw_ed4f3bf.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_ed4f3bf.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_ed4f3bf.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_ed4f3bf.Uniform1(6, _uniforms);
                _draw_ed4f3bf.Uniform2(7, position);
                _draw_ed4f3bf.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_ed4f3bf.Uniform2(9, csz);
                _draw_ed4f3bf.Uniform2(10, DP_ed4f3bf_14_8_4.Origin);
                _draw_ed4f3bf.Uniform2(11, DP_ed4f3bf_14_8_4.Size);
                _draw_ed4f3bf.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind14 = DP_ed4f3bf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind14.Z, ind14.W)), (ind15 = DP_ed4f3bf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y))));
                _draw_ed4f3bf.Uniform2(13, (ind16 = DP_ed4f3bf_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.X, ind16.Y)));
                _draw_ed4f3bf.Uniform2(14, DP_ed4f3bf_14_8_4.TexCoordScale1);
                _draw_ed4f3bf.Uniform2(15, DP_ed4f3bf_14_8_4.TexCoordBias1);
                _draw_ed4f3bf.Uniform2(16, DP_ed4f3bf_14_8_4.TexCoordScale2);
                _draw_ed4f3bf.Uniform2(17, DP_ed4f3bf_14_8_4.TexCoordBias2);
                _draw_ed4f3bf.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_ed4f3bf.Uniform(19, distanceScaleRcp);
                _draw_ed4f3bf.Uniform(20, distanceScale);
                _draw_ed4f3bf.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_ed4f3bf.Uniform(22, 1.0f / smoothness);
                _draw_ed4f3bf.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_ed4f3bf.Sampler3(24, DP_ed4f3bf_14_8_4.Texture, DP_ed4f3bf_14_8_4.SamplerState);
                _draw_ed4f3bf.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_a74e71d3.BlendEnabled(true);
                _draw_a74e71d3.DepthTestEnabled(false);
                _draw_a74e71d3.CullFace(uPtr(dc)->CullFace());
                _draw_a74e71d3.BlendSrcAlpha(7);
                _draw_a74e71d3.BlendDstRgb(3);
                _draw_a74e71d3.Const1(0, uPtr(_uniforms)->Length());
                _draw_a74e71d3.Use();
                _draw_a74e71d3.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_a74e71d3.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_a74e71d3.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_a74e71d3.Uniform1(4, _uniforms);
                _draw_a74e71d3.Uniform2(5, position);
                _draw_a74e71d3.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_a74e71d3.Uniform(7, distanceScaleRcp);
                _draw_a74e71d3.Uniform(8, distanceScale);
                _draw_a74e71d3.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_a74e71d3.Uniform(10, 1.0f / smoothness);
                _draw_a74e71d3.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_a74e71d3.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_a74e71d3.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_86152fe3.BlendEnabled(true);
                _draw_86152fe3.DepthTestEnabled(false);
                _draw_86152fe3.CullFace(uPtr(dc)->CullFace());
                _draw_86152fe3.BlendSrcAlpha(7);
                _draw_86152fe3.BlendDstRgb(3);
                _draw_86152fe3.Const1(0, uPtr(_uniforms)->Length());
                _draw_86152fe3.Use();
                _draw_86152fe3.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_86152fe3.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_86152fe3.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_86152fe3.Uniform1(4, _uniforms);
                _draw_86152fe3.Uniform2(5, position);
                _draw_86152fe3.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_86152fe3.Uniform(7, distanceScaleRcp);
                _draw_86152fe3.Uniform(8, distanceScale);
                _draw_86152fe3.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_86152fe3.Uniform(10, 1.0f / smoothness);
                _draw_86152fe3.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_86152fe3.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_86152fe3.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_8de95790_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_8de95790.BlendEnabled(true);
                _draw_8de95790.DepthTestEnabled(false);
                _draw_8de95790.CullFace(uPtr(dc)->CullFace());
                _draw_8de95790.BlendSrcAlpha(7);
                _draw_8de95790.BlendDstRgb(3);
                _draw_8de95790.Const1(0, uPtr(_uniforms)->Length());
                _draw_8de95790.Use();
                _draw_8de95790.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8de95790.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8de95790.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8de95790.Uniform1(4, _uniforms);
                _draw_8de95790.Uniform2(5, position);
                _draw_8de95790.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8de95790.Uniform2(7, csz);
                _draw_8de95790.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_8de95790.Uniform(9, distanceScaleRcp);
                _draw_8de95790.Uniform(10, distanceScale);
                _draw_8de95790.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_8de95790.Uniform(12, 1.0f / smoothness);
                _draw_8de95790.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_8de95790.Uniform10(14, endPoints_8de95790_14_17_6);
                _draw_8de95790.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8de95790_14_17_6.Z, endPoints_8de95790_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8de95790_14_17_6.X, endPoints_8de95790_14_17_6.Y))));
                _draw_8de95790.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8de95790_14_17_6.Z, endPoints_8de95790_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8de95790_14_17_6.X, endPoints_8de95790_14_17_6.Y))));
                _draw_8de95790.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_8de95790.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_8a1f08e4_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_8a1f08e4.BlendEnabled(true);
                _draw_8a1f08e4.DepthTestEnabled(false);
                _draw_8a1f08e4.CullFace(uPtr(dc)->CullFace());
                _draw_8a1f08e4.BlendSrcAlpha(7);
                _draw_8a1f08e4.BlendDstRgb(3);
                _draw_8a1f08e4.Const1(0, uPtr(_uniforms)->Length());
                _draw_8a1f08e4.Use();
                _draw_8a1f08e4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8a1f08e4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8a1f08e4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8a1f08e4.Uniform1(4, _uniforms);
                _draw_8a1f08e4.Uniform2(5, position);
                _draw_8a1f08e4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8a1f08e4.Uniform2(7, csz);
                _draw_8a1f08e4.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_8a1f08e4.Uniform(9, distanceScaleRcp);
                _draw_8a1f08e4.Uniform(10, distanceScale);
                _draw_8a1f08e4.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_8a1f08e4.Uniform(12, 1.0f / smoothness);
                _draw_8a1f08e4.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_8a1f08e4.Uniform10(14, endPoints_8a1f08e4_14_17_6);
                _draw_8a1f08e4.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8a1f08e4_14_17_6.Z, endPoints_8a1f08e4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8a1f08e4_14_17_6.X, endPoints_8a1f08e4_14_17_6.Y))));
                _draw_8a1f08e4.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8a1f08e4_14_17_6.Z, endPoints_8a1f08e4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8a1f08e4_14_17_6.X, endPoints_8a1f08e4_14_17_6.Y))));
                _draw_8a1f08e4.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_8a1f08e4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_4ceac7b6.BlendEnabled(true);
                _draw_4ceac7b6.DepthTestEnabled(false);
                _draw_4ceac7b6.CullFace(uPtr(dc)->CullFace());
                _draw_4ceac7b6.BlendSrcAlpha(7);
                _draw_4ceac7b6.BlendDstRgb(3);
                _draw_4ceac7b6.Const1(0, uPtr(_uniforms)->Length());
                _draw_4ceac7b6.Use();
                _draw_4ceac7b6.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_4ceac7b6.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_4ceac7b6.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_4ceac7b6.Uniform1(4, _uniforms);
                _draw_4ceac7b6.Uniform2(5, position);
                _draw_4ceac7b6.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_4ceac7b6.Uniform(7, distanceScaleRcp);
                _draw_4ceac7b6.Uniform(8, distanceScale);
                _draw_4ceac7b6.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_4ceac7b6.Uniform(10, 1.0f / smoothness);
                _draw_4ceac7b6.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind19 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind19.X, ind19.Y, ind19.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4ceac7b6.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_47dafdd1.BlendEnabled(true);
                _draw_47dafdd1.DepthTestEnabled(false);
                _draw_47dafdd1.CullFace(uPtr(dc)->CullFace());
                _draw_47dafdd1.BlendSrcAlpha(7);
                _draw_47dafdd1.BlendDstRgb(3);
                _draw_47dafdd1.Const1(0, uPtr(_uniforms)->Length());
                _draw_47dafdd1.Use();
                _draw_47dafdd1.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_47dafdd1.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_47dafdd1.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_47dafdd1.Uniform1(4, _uniforms);
                _draw_47dafdd1.Uniform2(5, position);
                _draw_47dafdd1.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_47dafdd1.Uniform(7, distanceScaleRcp);
                _draw_47dafdd1.Uniform(8, distanceScale);
                _draw_47dafdd1.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_47dafdd1.Uniform(10, 1.0f / smoothness);
                _draw_47dafdd1.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind20 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind20.X, ind20.Y, ind20.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_47dafdd1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance]
void Rectangle::init_DrawCalls()
{
    _draw_8ea59fa1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleeea60686());
    _draw_756a815 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle92dbce62());
    _draw_db3963ea = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle277ecc8b());
    _draw_46d298b5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle0d95ac89());
    _draw_ececdec4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb9bd3313());
    _draw_e1fb4228 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle96567dcc());
    _draw_9f25b31c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle443ab62b());
    _draw_e693f66d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle2a980758());
    _draw_20daab84 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle75703f79());
    _draw_ed4f3bf = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglee8cfc82c());
    _draw_a74e71d3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglebaa33711());
    _draw_86152fe3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle6cdb4f8f());
    _draw_8de95790 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangled7aaac71());
    _draw_8a1f08e4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle51c89986());
    _draw_4ceac7b6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangled8fb961e());
    _draw_47dafdd1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle71ff40b1());
}

// private void InitBuffers() [instance]
void Rectangle::InitBuffers()
{
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[12/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[13/*float2[]*/], vr->Length());

    for (int32_t i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int32_t j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int32_t o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int32_t>(::TYPES[14/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int32_t>(::TYPES[14/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    uArray* bufferVertex = uArray::New(::TYPES[15/*byte[]*/], vsr->Length() * 16);
    uArray* bufferEdge = uArray::New(::TYPES[15/*byte[]*/], vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New8(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New8(0);

    for (int32_t i1 = 0; i1 < vsr->Length(); ++i1)
    {
        ::g::Uno::ByteArrayExtensions::Set8(bufferVertex, i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int32_t>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int32_t>(i1) * 2) + 1)), true);
        ::g::Uno::ByteArrayExtensions::Set8(bufferEdge, i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int32_t>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int32_t>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance]
uArray* Rectangle::neg(uArray* a)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Shadow(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, _shadowFalloff);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance]
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static]
Rectangle* Rectangle::New1()
{
    Rectangle* obj21 = (Rectangle*)uNew(Rectangle_typeof());
    obj21->ctor_();
    return obj21;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class ShadowFalloff
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff()
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New()
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance]
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static]
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Rectangle.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class StrokeCoverage
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Radius), 0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Center), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage()
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New()
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance]
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static]
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class Wedge
// {
// static generated Wedge()
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Primitives::Circle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(Wedge, _strokeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(Wedge, _fillCoverage), 0,
        type, (uintptr_t)&Wedge::Singleton_, uFieldFlagsStatic);
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge()
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New()
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle)
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance]
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, smoothness, center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance]
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, extend, center, smoothness);
}

// public generated Wedge New() [static]
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/@fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/1.12.0/Wedge.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------

// internal abstract class WedgeCoverage
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, StartAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, EndAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage()
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance]
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
