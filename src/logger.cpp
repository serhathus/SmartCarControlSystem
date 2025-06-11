#include "logger.h"
#include <fstream>
#include <ctime>

void Logger::write(const std::string& message) {
    std::ofstream file("system.log", std::ios::app);
    if (!file) return;
    std::time_t t = std::time(nullptr);
    file << std::ctime(&t) << ": " << message << '\n';
}
