//#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  Serial.begin(9600);
  pinMode(D5, INPUT);
//  lcd.init();
//  lcd.display();
//  lcd.backlight();
//  lcd.clear();
//  lcd.print("Pump Status: ");
}

void loop() {
  if(digitalRead(D5)){
//    lcd.setCursor(13,0);
//    lcd.print("ON ");
      Serial.println("ON");
  }
  else{
//    lcd.setCursor(13,0);
//    lcd.print("OFF");
      Serial.println("OFF");
  }
//  lcd.setCursor(0,1);
//  lcd.print(analogRead(A0));
//    Serial.println(analogRead(A0));
  delay(100);
}
