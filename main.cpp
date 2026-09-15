#include <iostream>
#include "cpu.hpp"
#include "memory.hpp"
#include "uptime.hpp"
#include "model.hpp"
#include "location.hpp"
#include <iomanip>

// Made by Pieter Tschopp
// FTMS - Fast Terminal Monitoring System is a free-open-source program to moniter your hardware without covering your terminal(I.E. btop, htop, ect.)
// Modify and change at will.
// For any bugs, questions, or suggestions: Contact pietertschopp065@gmail.com.
// Thanks! And have a good day!

int main() {
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "───────────────────────────────────────────────────────\n";
  std::cout << "FTMS - Fast Terminal Monitoring System         \033[36mBY: P.T.\033[0m\n";
  std::cout << "───────────────────────────────────────────────────────\n";
  std::cout << "           \033[32m" << model() << "\033[0m\n";
  std::cout << "CPU Usage: \033[32m" << cpu_usage() << "%	\033[0m";
  std::cout << "CPU Temp:  \033[32m" << cpu_temp() << "C\033[0m\n";
  std::cout << "RAM:       \033[32m" << memory_total() << " GB	\033[0m";
  std::cout << "RAM free   \033[32m" << memory_free() << " GB\033[0m\n";
  std::cout << "RAM Used:  \033[32m" << memory_total() - memory_free() << " GB\033[0m\n";
    double uptime = get_uptime();

    int days = static_cast<int>(uptime / 86400);
    int hours = static_cast<int>((uptime / 3600)) % 24;
    int minutes = static_cast<int>((uptime / 60)) % 60;

    std::cout << "Uptime:    "
              << days << " Day(s) "
              << hours << " Hour(s) "
              << minutes << " Minute(s)\n";
   std::cout << "Location:  \033[32m" << location() << "\033[0m";
    std::cout << "───────────────────────────────────────────────────────\n";
        return 0;
}

