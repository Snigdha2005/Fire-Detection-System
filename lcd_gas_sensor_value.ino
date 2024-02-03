#include<LiquidCrystal_I2C_Hangul.h>
#include<Wire.h>

LiquidCrystal_I2C_Hangul lcd(0x27,16,2); //LCD 클래스 초기화

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.print("Hel");
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  lcd.setCursor(7, 1);
  lcd.print(sensorValue);
  delay(5000);
}
