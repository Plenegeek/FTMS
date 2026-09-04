#include <iostream>
#include "cpu.hpp"
#include "memory.hpp"
#include "uptime.hpp"
#include <iomanip>
// Made by Pieter Tschopp
// FTMS - Fast Terminal Monitoring System is a free-open-source program to moniter your hardware without covering your terminal(I.E. btop, htop, ect.)
// Modify and change at will.
// For any bugs, questions, or suggestions: Contact pietertschopp065@gmail.com.
// Thanks! And have a good day!
int main() {
    std::cout << std::fixed << std::setprecision(2);
  std::cout << "-----------------------------------------\n";
  std::cout << "FTMS -- Fast Terminal Monitoring System\n";
  std::cout << "-----------------------------------------\n";
  std::cout << "CPU Usage:      " << cpu_usage() << "%\n";
  std::cout << "CPU Temp:       " << cpu_temp() << "C\n";
  std::cout << "RAM:            " << memory_total() << " GB\n";
  std::cout << "RAM free:       "  << memory_free() << " GB\n";
    double uptime = get_uptime();

    int days = static_cast<int>(uptime / 86400);
    int hours = static_cast<int>((uptime / 3600)) % 24;
    int minutes = static_cast<int>((uptime / 60)) % 60;

    std::cout << "Uptime:         "
              << days << " Day(s) "
              << hours << " Hour(s) "
              << minutes << " Minute(s)\n";

    std::cout << "-----------------------------------------\n";

        return 0;
}
