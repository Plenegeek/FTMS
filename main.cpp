#include <iostream>
// Take
#include "cpu.hpp" 



int main() {

  std::cout << "----------------------------------------\n";
  std::cout << "FTMS -- Fast Terminal Monitoring System\n";
  std::cout << "----------------------------------------\n";
  std::cout << "\n"
  std::cout << "CPU Usage:      " << cpu_usage() << "%\n";
  std::cout << "CPU Temp:       " << cpu_temp() << "C\n";
  std::cout << "----------------------------------------\n";
        return 0;

}
