#include <SPI.h>
#include <LoRa.h>

// LoRa pins
#define SS      5
#define RST     14
#define DIO0    26

// LoRa frequency
#define BAND 433E6

void setup() {

  Serial.begin(115200);

  Serial.println();
  Serial.println("LoRa Receiver");

  // Configure LoRa pins
  LoRa.setPins(SS, RST, DIO0);

  // Start LoRa
  if (!LoRa.begin(BAND)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }

  Serial.println("LoRa initialization successful!");
  Serial.println("Waiting for messages...");
}

void loop() {

  // Check for incoming packet
  int packetSize = LoRa.parsePacket();

  if (packetSize) {

    Serial.println();
    Serial.println("----- RECEIVED PACKET -----");

    Serial.print("Message: ");

    while (LoRa.available()) {
      Serial.print((char)LoRa.read());
    }

    Serial.println();

    // Signal strength
    Serial.print("RSSI: ");
    Serial.print(LoRa.packetRssi());
    Serial.println(" dBm");

    // Signal-to-noise ratio
    Serial.print("SNR: ");
    Serial.print(LoRa.packetSnr());
    Serial.println(" dB");

    Serial.println("---------------------------");
  }
}