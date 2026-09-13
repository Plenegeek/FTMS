#include <fstream>
#include <string>

std::string model() {
    std::ifstream file("/proc/cpuinfo");
    std::string line;

    while (std::getline(file, line)) {
        if (line.rfind("model name", 0) == 0) {
            return line.substr(line.find(":") + 2);
        }
    }

    file.clear();
    file.seekg(0);

    while (std::getline(file, line)) {
        if (line.rfind("Model", 0) == 0) {
            return line.substr(line.find(":") + 2);
        }
    }

    return "Unknown";
}
