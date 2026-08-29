#include "cpu.hpp"
#include <fstream>
#include <thread>
#include <chrono>

double cpu_usage() {
    std::ifstream file("/proc/stat");

    std::string cpu;
    long long user, nice, system, idle;

    file >> cpu >> user >> nice >> system >> idle;

    long long idle1 = idle;
    long long total1 = user + nice + system + idle;

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    file.close();
    file.open("/proc/stat");

    file >> cpu >> user >> nice >> system >> idle;

    long long idle2 = idle;
    long long total2 = user + nice + system + idle;

    long long total_delta = total2 - total1;
    long long idle_delta = idle2 - idle1;

    return (double)(total_delta - idle_delta) / total_delta * 100.0;
}

double cpu_temp() {


        std::ifstream file("/sys/class/thermal/thermal_zone0/temp"); // Gets the temp for the CPU

        int temp;
        file >> temp;

        return temp / 1000.0;  // The Temp in the file is showed at  micro or milli C. This converts it to normal C Temp

}


