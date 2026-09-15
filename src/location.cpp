#include <fstream>
#include <string>
#include <sstream>




std::string location() {
	std::ifstream file("/etc/timezone");


	if (!file) {
		return "Unknown!";
	}

	std::stringstream buffer;
	buffer << file.rdbuf();

	return buffer.str();

}
