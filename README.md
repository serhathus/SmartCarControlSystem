# Smart Car Control System

A modular and extensible C++ project that simulates core functionalities of a modern smart vehicle. This project is designed for educational and prototyping purposes and demonstrates object-oriented design with clean code architecture.

## Features

- **Engine Control**: Start/stop the engine and manage speed settings.
- **Climate Management**: Adjust fan speed and temperature to simulate a vehicle's climate control system.
- **Media System**: Basic playback and volume management for in-car entertainment.
- **Door Locking**: Lock and unlock doors via a simple interface.
- **Action Logging**: Record key actions to a log file for traceability.
- **CLI Interface**: Interact with the system through a command-line menu.
- **Modular Architecture**: Each subsystem is isolated for easy extension.

## Getting Started

### Prerequisites

- A C++17 compatible compiler (e.g., g++ 9 or later)
- CMake (optional, for out-of-source builds)

### Building

1. Clone the repository and change to the project directory:

   ```bash
   git clone <repo-url>
   cd SmartCarControlSystem
   ```

2. Compile with g++ directly:


   g++ -std=c++17 main.cpp src/*.cpp -o SmartCarControlSystem


   Or use CMake if you prefer:

   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```

### Running

Run the resulting binary:

```bash
./SmartCarControlSystem
```

This will present a simple command-line menu to control the engine, climate, media, and door locks.

## Future Plans

- JSON-based configuration files
- Unit testing framework
- MQTT integration for remote control
- Qt GUI for desktop interaction

## License

This project is provided for educational purposes. See the `LICENSE` file for more information.

