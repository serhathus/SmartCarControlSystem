#include "media.h"
#include <string>

Media::Media() : playing_(false), volume_(5) {}

void Media::play() {
    playing_ = true;
    Logger::write("Media playback started");
}

void Media::stop() {
    playing_ = false;
    Logger::write("Media playback stopped");
}

void Media::setVolume(int volume) {
    volume_ = volume;
    Logger::write("Volume set to " + std::to_string(volume));
}

bool Media::isPlaying() const {
    return playing_;
}

int Media::getVolume() const {
    return volume_;
}
