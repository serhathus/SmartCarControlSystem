#ifndef CLIMATE_H
#define CLIMATE_H

#include "logger.h"

class Climate {
public:
    Climate();
    void setTemperature(int temperature);
    void setFanSpeed(int fan);
    int getTemperature() const;
    int getFanSpeed() const;

private:
    int temperature_;
    int fanSpeed_;
};

#endif
