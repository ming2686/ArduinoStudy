#include <stdlib.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD의 address 주소 및 크기 입력

void setup() {
    Serial.begin(9600);
    lcd.init();  
    lcd.backlight();
}

void loop() {
  int cds = analogRead(A0);
  Serial.println(cds);
  lcd.clear();
  lcd.setCursor(0, 0); 
  lcd.print(cds);
  delay(10);
}