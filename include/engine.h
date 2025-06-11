#ifndef ENGINE_H
#define ENGINE_H

#include "logger.h"

class Engine {
public:
    Engine();
    void start();
    void stop();
    void setSpeed(int speed);
    bool isRunning() const;
    int getSpeed() const;

private:
    bool running_;
    int speed_;
};

#endif
