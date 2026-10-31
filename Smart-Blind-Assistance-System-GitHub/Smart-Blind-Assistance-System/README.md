# Smart Blind Assistance System

An ESP32-based ultrasonic obstacle-detection and buzzer-alert prototype.

## Repository structure

- `src/` — Arduino IDE source code.
- `hardware/` — Add circuit diagrams, wiring details, and component information here.
- `docs/` — Add the project report and supporting documentation here.
- `images/` — Add project, hardware, and testing photographs here.

## Hardware and pin configuration

| Component | ESP32 GPIO |
|---|---:|
| HC-SR04 TRIG | 5 |
| HC-SR04 ECHO | 18 |
| Buzzer | 19 |

## Working principle

The ESP32 triggers the HC-SR04 ultrasonic sensor and measures the echo pulse duration. It calculates the distance in centimeters and changes the buzzer tone/pulse pattern according to the measured distance:

- 0–30 cm: 2000 Hz warning pattern
- Above 30–60 cm: 1500 Hz warning pattern
- Above 60–100 cm: 1000 Hz warning pattern
- Above 100 cm: buzzer remains off

If no valid echo is received within the timeout, the buzzer is turned off.

## Requirements

- ESP32 development board
- HC-SR04 ultrasonic sensor
- Buzzer
- Arduino IDE with ESP32 board support

## Uploading the code

1. Open `src/Blind_Assistance_System.ino` in Arduino IDE.
2. Select the appropriate ESP32 board and serial port.
3. Verify the wiring and voltage levels.
4. Upload the sketch.

## Electrical safety

The HC-SR04 ECHO pin typically outputs 5 V, while ESP32 GPIO pins are not 5 V tolerant. Use a suitable voltage divider or logic-level shifter between the sensor's ECHO pin and ESP32 GPIO 18.

## Project documentation

Place the final report in `docs/`, circuit diagrams in `hardware/`, and project photographs in `images/`. Replace the placeholder files in those folders with the actual project materials.

## Project status

This repository documents the ESP32 source-code implementation. Ensure the report describes the implemented ESP32-based version accurately.
