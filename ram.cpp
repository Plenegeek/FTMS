#include "memory.hpp"
#include <fstream>
#include <string>

double memory_total() {
    std::ifstream file("/proc/meminfo");

    std::string name;
    double value;

    while (file >> name >> value) {
        if (name == "MemTotal:") {
            return value / 1024.0 / 1024.0;
        }
    }

    return 0;
}

double memory_free() {
    std::ifstream file("/proc/meminfo");

    std::string name;
    double value;

    while (file >> name >> value) {
        if (name == "MemAvailable:") {
            return value / 1024.0 / 1024.0;
        }
    }

    return 0;
}
