#include <stdlib.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD의 address 주소 및 크기 입력
/* 10K옴 가변저항을 이용하여 아날로그전압을 0~5V로 변화한 후,
  AD컨버젼(10비트 분해능) 된 값을 시리얼모니터에 표현 하도록 한다.
  AD컨버젼 된 값은 0~1023으로 디지털 값이 표현됨을 확인 할 수 있다. */
void setup()  // 초기화
{
  Serial.begin(9600);  // 시리얼 통신속도 9600bps 설정
  lcd.init();  
  lcd.backlight();
}
void loop()  // 무한 루프
{
    
  // A0번 핀(Pin)에 아날로그 전압을 디지털 값으로 변환 후 sensorValue에 저장
  int sensorValue = analogRead(A0);
  Serial.print("[LKE LAB]  value : ");  // 시리얼 모니터에 출력할 내용
  Serial.println(sensorValue);  // 시리얼 모니터에 sensorValue 값 출력
  lcd.clear();
  lcd.setCursor(0, 0); 
  lcd.print(sensorValue);
  delay(750);
    
}