#pragma once
#include "KittyMemoryMgr.hpp"

namespace KittyMemory {
    // 占位定义
    template<typename T>
    bool read(uintptr_t address, T &buffer) { return true; }
}
