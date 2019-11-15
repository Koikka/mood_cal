// This file was generated based on node_modules/@fuse-open/fuselibs/Source/build/Fuse.Triggers/1.12.0/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-e1385512.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Stop;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Stop
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target);

struct Stop : ::g::Fuse::Triggers::Actions::PlaybackAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
