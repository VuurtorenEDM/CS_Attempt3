# Calculator Menu

Made in C++ for Arduino with Visual Studio Code

Outputs:
- Sum of 2 numbers
- Multiplictive of 2 numbers
- Blink of integrated LED on Arduino UNO R4 WiFi

## Table of Contents
- Requirements
- Installation
- Configuration
- How It Works

## Requirements
- [Visual Studio Code with C](https://code.visualstudio.com/download)
- [Platform IO IDE](https://platformio.org/platformio-ide)
- [Arduino (deprecated)](https://github.com/arduino/arduino-cli)
- Arduino UNO R4 WiFi or any compatable version of Arduino
- USB-C cable to connect Arduino to PC

### Optional
- Dev Containers
- Docker

## Installation
- Download Zip file from Github
- Extract the contents into Platform IO IDE folder

## Configuration
- Plug in Arduino UNO R4 WiFi or complatable version of Arduino via USB-C cable
- Verify the port and board are correctly connected and chosen
- Compile and upload the code
- Reset Arduino

## How It Works
This program first blinks with the integrated LED on the Arduino UNO R4 WiFi board.
It then presents a Menu with an option between 1, which allows the user to add 2 numbers and recieve their sum; and option 2, which allows the user to multiply 2 numbers and recieve that value.
After detected Input from either function the user will be re-prompted with the Menu function, and able to make another choice.


