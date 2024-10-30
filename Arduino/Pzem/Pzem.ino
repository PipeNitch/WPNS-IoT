#include <PZEM004Tv30.h>
#include <LiquidCrystal_I2C.h> 
#include <Wire.h>

PZEM004Tv30 pzem(D3, D4); // Software Serial pin 8 (RX) & 9 (TX)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float voltage = pzem.voltage();
  if (voltage != NAN) {
    Serial.print("Voltage: ");
    Serial.print(voltage);
    Serial.println("V");
  } else {
    Serial.println("Error reading voltage");
  }

  float current = pzem.current();
  if (current != NAN) {
    Serial.print("Current: ");
    Serial.print(current);
    Serial.println("A");
  } else {
    Serial.println("Error reading current");
  }

  Serial.println();
  delay(1000);
}
