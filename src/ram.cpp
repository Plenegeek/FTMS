#include "memory.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

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

    std::string line;

    while (std::getline(file, line)) {
        if (line.rfind("MemAvailable:", 0) == 0) {
            double value;

            std::stringstream ss(line);
            std::string name;

            ss >> name >> value;

            return value / 1024.0 / 1024.0;
        }
    }

    return 0;
}
