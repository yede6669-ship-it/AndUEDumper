#pragma once
#include <string>
#include <vector>
#include <stdint.h>

namespace KittyMemory {
    // 基础定义，确保 Dumper 能够编译通过
    struct ProcMap {
        uintptr_t startAddress;
        uintptr_t endAddress;
        std::string permissions;
        std::string fileName;
    };
}
