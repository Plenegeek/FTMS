#include "uptime.hpp"
#include <fstream>

double get_uptime() {
    std::ifstream file("/proc/uptime");

    double uptime;

    if (file >> uptime) {
        return uptime;
    }

    return 0;
}
