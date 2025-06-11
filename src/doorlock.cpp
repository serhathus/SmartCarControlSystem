#include "doorlock.h"

DoorLock::DoorLock() : locked_(true) {}

void DoorLock::lock() {
    if (!locked_) {
        locked_ = true;
        Logger::write("Doors locked");
    }
}

void DoorLock::unlock() {
    if (locked_) {
        locked_ = false;
        Logger::write("Doors unlocked");
    }
}

bool DoorLock::isLocked() const {
    return locked_;
}
