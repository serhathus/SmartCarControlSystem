#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    static void write(const std::string& message);
};

#endif
