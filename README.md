# Smart Blind Assistance System

### An ESP32-Based Ultrasonic Obstacle Detection and Alert System

## 1. Project Overview

The **Smart Blind Assistance System** is an assistive technology project designed to help visually impaired individuals detect nearby obstacles using ultrasonic sensing technology. The system uses an HC-SR04 ultrasonic sensor connected to an ESP32 microcontroller to measure the distance between the user and surrounding obstacles.

Based on the measured distance, the system generates different buzzer warning patterns to inform the user about nearby obstacles. The primary objective is to develop a simple, affordable, and practical obstacle-detection prototype that can support safer movement.

## 2. Objectives

- To detect nearby obstacles using an ultrasonic sensor.
- To measure obstacle distance in centimeters.
- To generate audio warnings based on obstacle distance.
- To implement a simple and low-cost assistive prototype.
- To demonstrate the practical application of embedded systems in assistive technology.

## 3. Hardware Components

| Component | Description |
|---|---|
| ESP32 | Main microcontroller |
| HC-SR04 | Ultrasonic distance sensor |
| Buzzer | Audio warning output |
| Jumper Wires | Electrical connections |
| Power Supply | Power for the circuit |

## 4. Pin Configuration

| Component | ESP32 GPIO Pin |
|---|---|
| HC-SR04 TRIG | GPIO 5 |
| HC-SR04 ECHO | GPIO 18 |
| Buzzer | GPIO 19 |

**Important:** The HC-SR04 ECHO pin typically outputs 5V, while ESP32 GPIO pins are not 5V tolerant. A suitable voltage divider or logic-level shifter must be used before connecting ECHO to GPIO 18.

## 5. Working Principle

The HC-SR04 ultrasonic sensor sends ultrasonic waves and receives the reflected waves from nearby objects. The ESP32 measures the echo duration and calculates the distance using the ultrasonic time-of-flight principle.

The buzzer responds according to the detected obstacle distance.

| Obstacle Distance | Buzzer Frequency | Warning Level |
|---|---:|---|
| 0–30 cm | 2000 Hz | Very Close |
| Above 30–60 cm | 1500 Hz | Medium |
| Above 60–100 cm | 1000 Hz | Low |
| Above 100 cm | OFF | No Warning |

If the sensor does not receive a valid echo signal, the buzzer remains off.

## 6. Software and Tools

- Arduino IDE
- ESP32 Board Support Package
- Embedded C/C++ (Arduino framework)
- GitHub for source-code management

## 7. Repository Structure

```text
Smart-Blind-Assistance-System/
│
├── README.md
│
├── src/
│   └── Blind_Assistance_System.ino
│
├── hardware/
│   └── Circuit Diagram
│
├── docs/
│   └── Project Report
│
└── images/
    └── Project Photos
```

## 8. How to Run the Project

1. Install the Arduino IDE on your computer.
2. Install the ESP32 board package.
3. Connect the HC-SR04 sensor and buzzer to the specified ESP32 GPIO pins.
4. Open `Blind_Assistance_System.ino` from the `src` folder.
5. Select the appropriate ESP32 board and COM port.
6. Upload the program to the ESP32.
7. Place an object in front of the ultrasonic sensor and observe the buzzer response.

## 9. Future Improvements

- Integration of a vibration motor for silent alerts.
- Voice-based obstacle notifications.
- GPS-based navigation assistance.
- Wireless emergency notifications to caregivers.
- Improved obstacle detection and environmental awareness.

## 10. Project Contributors

**Mst Sabrina Yasmin**
- Initial project idea generation.
- Project proposal preparation.
- Research and technical documentation.
- Final project report preparation
  
**Rubayat Hasan Rohan**
- Hardware circuit development and implementation.
- Hardware setup and testing.
- Presentation slide preparation.

Both members contributed equally to the overall project.

## 11. Project Disclaimer

This project is an academic prototype developed for educational and experimental purposes. It is not a certified medical or mobility device and should not replace a traditional white cane or other established mobility aids.

## 12. License

This project is intended for academic and educational purposes. Please contact the project contributors before reusing or redistributing the project materials.
