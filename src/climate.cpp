#include "climate.h"
#include <string>

Climate::Climate() : temperature_(22), fanSpeed_(1) {}

void Climate::setTemperature(int temperature) {
    temperature_ = temperature;
    Logger::write("Temperature set to " + std::to_string(temperature));
}

void Climate::setFanSpeed(int fan) {
    fanSpeed_ = fan;
    Logger::write("Fan speed set to " + std::to_string(fan));
}

int Climate::getTemperature() const {
    return temperature_;
}

int Climate::getFanSpeed() const {
    return fanSpeed_;
}
