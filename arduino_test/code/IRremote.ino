#include <IRremote.h>
#include <stdlib.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD의 address 주소 및 크기 입력
 
int IRpin = 2;  
IRrecv irrecv(IRpin);
decode_results results;

int lcdshow(int num){
  lcd.clear();
  lcd.setCursor(0, 0); 
  lcd.print(num);
}

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // 리모콘 시작
  lcd.init();  
  lcd.backlight();
}

void loop() // 무한루프
{
  if (irrecv.decode(&results)) {
    if (results.decode_type == NEC) {
      switch (results.value) {
        case 0x00FF6897: // Key 0
          Serial.println("Press '0'"); // 시리얼통신으로 데이터 출력 "Press '0'"
          lcdshow(0);
          break;
        case 0x00FF30CF: // Key 1
          Serial.println("Press '1'"); // 시리얼통신으로 데이터 출력 "Press '1'"
          lcdshow(1);
          break;
        case 0x00FF18E7: // Key 2
          Serial.println("Press '2'"); // 시리얼통신으로 데이터 출력 "Press '2'"
          lcdshow(2);
          break;
        case 0x00FF7A85: // Key 3
          Serial.println("Press '3'"); // 시리얼통신으로 데이터 출력 "Press '3'"
          lcdshow(3);
          break;
        case 0x00FF10EF: // Key 4
          Serial.println("Press '4'"); // 시리얼통신으로 데이터 출력 "Press '4'"
          lcdshow(4);
          break;
        case 0x00FF38C7: // Key 5
          Serial.println("Press '5'"); // 시리얼통신으로 데이터 출력 "Press '5'"
          lcdshow(5);
          break;
        case 0x00FF5AA5: // Key 6
          Serial.println("Press '6'"); // 시리얼통신으로 데이터 출력 "Press '6'"
          lcdshow(6);
          break;
        case 0x00FF42BD: // Key 7
          Serial.println("Press '7'"); // 시리얼통신으로 데이터 출력 "Press '7'"
          lcdshow(7);
          break;
        case 0x00FF4AB5: // Key 8
          Serial.println("Press '8'"); // 시리얼통신으로 데이터 출력 "Press '8'"
          lcdshow(8);
          break;
        case 0x00FF52AD: // Key 9
          Serial.println("Press '9'"); // 시리얼통신으로 데이터 출력 "Press '9'"
          lcdshow(9);
          break;
        default:
          break;
      }
    }
    irrecv.resume();  // 다음 값 수신(Receive the next value)
  }
}