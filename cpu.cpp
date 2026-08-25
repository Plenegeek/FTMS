#include "cpu.hpp"
#include <fstream>


double cpu_usage() {
	return 42.0 // Placeholder. Need to work on getting usage correctly
}
double cpu_temp() {


	std::ifstream file("/sys/class/termal_zone0/temp"); // Gets the temp for the CPU WARNING!!!!: ONLY FOR LINUX!!!!

	int temp;

	return temp / 1000.0;  // The Temp in the file is showed at  micro or milli C. This converts it to normal C

}
// End program
