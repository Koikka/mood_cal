// This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Source/Uno/Content/Fonts/TextShader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public abstract class TextShader
// {
struct TextShader_type : uType
{
    void(*fp_Draw)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*);
};

TextShader_type* TextShader_typeof();
void TextShader__ctor__fn(TextShader* __this);

struct TextShader : uObject
{
    void ctor_();
    void Draw(::g::Uno::Content::Fonts::TextShaderData* data) { (((TextShader_type*)__type)->fp_Draw)(this, data); }
};
// }

}}}} // ::g::Uno::Content::Fonts
