#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events { 
struct ReloadStartEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsReloadStartEvent";
    static constexpr const char* ALIAS = "WeaponReloadStartEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ReloadStartEvent, 0x48);
} // namespace game::weapon::events
using WeaponReloadStartEvent = game::weapon::events::ReloadStartEvent;
} // namespace RED4ext