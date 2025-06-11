#include "engine.h"
#include <string>

Engine::Engine() : running_(false), speed_(0) {}

void Engine::start() {
    if (!running_) {
        running_ = true;
        Logger::write("Engine started");
    }
}

void Engine::stop() {
    if (running_) {
        running_ = false;
        speed_ = 0;
        Logger::write("Engine stopped");
    }
}

void Engine::setSpeed(int speed) {
    if (running_) {
        speed_ = speed;
        Logger::write("Speed set to " + std::to_string(speed));
    }
}

bool Engine::isRunning() const {
    return running_;
}

int Engine::getSpeed() const {
    return speed_;
}
