#ifndef MEDIA_H
#define MEDIA_H

#include "logger.h"

class Media {
public:
    Media();
    void play();
    void stop();
    void setVolume(int volume);
    bool isPlaying() const;
    int getVolume() const;

private:
    bool playing_;
    int volume_;
};

#endif
