#include <iostream>
#include "cpu.hpp"
#include "memory.hpp"
// Made by Pieter Tschopp
// FTMS - Fast Terminal Monitoring System is a free-open-source program to moniter your hardware without covering your terminal(I.E. btop, htop, ect.)
// Modify and change at will.
// For any bugs, questions, or suggestions: Contact pietertschopp065@gmail.com.
// Thanks! And have a good day!
int main() {

  std::cout << "----------------------------------------\n";
  std::cout << "FTMS -- Fast Terminal Monitoring System\n";
  std::cout << "----------------------------------------\n";
  std::cout << "CPU Usage:      " << cpu_usage() << "%\n";
  std::cout << "CPU Temp:       " << cpu_temp() << "C\n";
  std::cout << "RAM:            " << memory_total() << " GB\n";
  std::cout << "RAM free:      "  << memory_free() << " GB\n";
  std::cout << "----------------------------------------\n";
        return 0;

}



