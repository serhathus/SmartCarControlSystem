#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "logger.h"

class DoorLock {
public:
    DoorLock();
    void lock();
    void unlock();
    bool isLocked() const;

private:
    bool locked_;
};

#endif
