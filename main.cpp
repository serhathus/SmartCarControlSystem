#include <iostream>
#include "include/engine.h"
#include "include/climate.h"
#include "include/media.h"
#include "include/doorlock.h"

int main() {
    Engine engine;
    Climate climate;
    Media media;
    DoorLock doors;

    bool running = true;
    while (running) {
        std::cout << "\n== Smart Car Control System ==\n";
        std::cout << "1. Start Engine\n";
        std::cout << "2. Stop Engine\n";
        std::cout << "3. Set Speed\n";
        std::cout << "4. Set Temperature\n";
        std::cout << "5. Set Fan Speed\n";
        std::cout << "6. Play Media\n";
        std::cout << "7. Stop Media\n";
        std::cout << "8. Set Volume\n";
        std::cout << "9. Lock Doors\n";
        std::cout << "10. Unlock Doors\n";
        std::cout << "0. Exit\n";
        std::cout << "Select option: ";
        int opt;
        std::cin >> opt;

        switch (opt) {
            case 1:
                engine.start();
                break;
            case 2:
                engine.stop();
                break;
            case 3: {
                int speed;
                std::cout << "Enter speed: ";
                std::cin >> speed;
                engine.setSpeed(speed);
                break;
            }
            case 4: {
                int temp;
                std::cout << "Enter temperature: ";
                std::cin >> temp;
                climate.setTemperature(temp);
                break;
            }
            case 5: {
                int fan;
                std::cout << "Enter fan speed: ";
                std::cin >> fan;
                climate.setFanSpeed(fan);
                break;
            }
            case 6:
                media.play();
                break;
            case 7:
                media.stop();
                break;
            case 8: {
                int vol;
                std::cout << "Enter volume: ";
                std::cin >> vol;
                media.setVolume(vol);
                break;
            }
            case 9:
                doors.lock();
                break;
            case 10:
                doors.unlock();
                break;
            case 0:
                running = false;
                break;
            default:
                std::cout << "Invalid option\n";
        }
    }

    std::cout << "Exiting...\n";
    return 0;
}
