#pragma once

#include "../types.hpp"

namespace System
{
    class Scene
    {
    public:
        virtual ~Scene() = default;

        u8 gap_0x4[476];
    };
    static_assert(sizeof(Scene) == 0x1E0);
}