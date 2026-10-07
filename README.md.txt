Off-Grid Communication System - LoRa & ESP32

📡 Description

A decentralized communication network utilizing LoRa modules and ESP32 microcontrollers. This project features robust sender and receiver nodes programmed to handle seamless telemetry and message exchanges without relying on cellular networks or Wi-Fi. It implements low-power protocols to ensure sustained operation in remote environments, making it ideal for off-grid long-range data transmission.

✨ Features

Off-Grid Telemetry: Transmits and receives data over long distances without internet or cellular connectivity.

Low-Power Operation: Optimized protocols for sustained battery life in remote deployments.

Decentralized Network: Node-to-node communication using LoRa RF technology.

🛠️ Hardware Requirements

2x ESP32 Microcontrollers

2x LoRa Modules (e.g., SX1278 / SX1276)

LoRa Antennas

Jumper Wires & Breadboards

Power source (Power banks or Li-Po batteries)

🔌 Circuit / Wiring Diagram

(Note: Update these pins based on your exact wiring)

LoRa Module Pin

ESP32 Pin (Typical SPI)

VCC

3.3V

GND

GND

SCK

GPIO 5

MISO

GPIO 19

MOSI

GPIO 27

NSS (CS)

GPIO 18

DIO0

GPIO 26

📸 [Insert a clear photo or schematic of your wired ESP32 and LoRa modules here]

💻 Software & Libraries

IDE: Arduino IDE

Language: C/C++

Required Libraries:

sandeepmistry/arduino-LoRa (or equivalent LoRa library used)

🚀 How to Run

Clone this repository to your local machine.

Open the sender code .ino in Arduino IDE and upload it to the first ESP32.

Open the receiver code .ino in Arduino IDE and upload it to the second ESP32.

Open the Serial Monitor for the receiver to watch the incoming off-grid telemetry.