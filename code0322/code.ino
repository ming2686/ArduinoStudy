int led0_Pin = 3;  // 1번째 LED
int led1_Pin = 4;  // 2번째 LED
int led2_Pin = 5;  // 3번째 LED
int led3_Pin = 6;  // 4번째 LED
int led4_Pin = 7;  // 5번째 LED
int button0_Pin = 8;   // 1번째 스위치
int button1_Pin = 9;   // 2번째 스위치
int button2_Pin = 10;  // 3번째 스위치
int button3_Pin = 11;  // 4번째 스위치
int button4_Pin = 12;  // 5번째 스위치

int time=50;

void setup()  // 초기화
{
  //pinMode(led0_Pin, OUTPUT);  // 1번째 LED 핀(Pin) 출력 포트 설정
  //pinMode(led1_Pin, OUTPUT);  // 2번째 LED 핀(Pin) 출력 포트 설정
  //pinMode(led2_Pin, OUTPUT);  // 3번째 LED 핀(Pin) 출력 포트 설정
  //pinMode(led3_Pin, OUTPUT);  // 4번째 LED 핀(Pin) 출력 포트 설정
  //pinMode(led4_Pin, OUTPUT);  // 5번째 LED 핀(Pin) 출력 포트 설정
  //pinMode(button0_Pin, INPUT);  // 1번째 스위치 핀(Pin) 입력 포트 설정
  //pinMode(button1_Pin, INPUT);  // 2번째 스위치 핀(Pin) 입력 포트 설정
  //pinMode(button2_Pin, INPUT);  // 3번째 스위치 핀(Pin) 입력 포트 설정
  //pinMode(button3_Pin, INPUT);  // 4번째 스위치 핀(Pin) 입력 포트 설정
  //pinMode(button4_Pin, INPUT);  // 5번째 스위치 핀(Pin) 입력 포트 설정
}
void loop(){
    static bool running = false;
    if (digitalRead(button0_Pin) == LOW)
      running = true;
  
    if (running){
      digitalWrite(led0_Pin, HIGH);
      delay(time);  
      digitalWrite(led0_Pin, LOW);
      delay(time); 

      digitalWrite(led1_Pin, HIGH);
      delay(time); 
      digitalWrite(led1_Pin, LOW);
      delay(time); 

      digitalWrite(led2_Pin, HIGH);
      delay(time); 
      digitalWrite(led2_Pin, LOW);
      delay(time); 

      digitalWrite(led3_Pin, HIGH);
      delay(time); ;
      digitalWrite(led3_Pin, LOW);
      delay(time); 

      digitalWrite(led4_Pin, HIGH);
      delay(time); 
      digitalWrite(led4_Pin, LOW);
      delay(time); 
    }
    /*
    if (digitalRead(button1_Pin) == LOW){
      digitalWrite(led0_Pin, LOW);
      digitalWrite(led1_Pin, LOW);
      digitalWrite(led2_Pin, LOW);
      digitalWrite(led3_Pin, LOW);
      digitalWrite(led4_Pin, LOW);
    }
    */
  
}

/* 스위치를 누를 시에 LED가 켜지도록 한다 */
/*
void loop()  // 무한 루프
{
  if (digitalRead(button0_Pin) == LOW)  // 1번째 스위치를 누르면
  {
    digitalWrite(led0_Pin, HIGH);  // 1번째 LED ON
  }
  else digitalWrite(led0_Pin, LOW);  // 1번째 LED OFF

  if (digitalRead(button1_Pin) == LOW)  // 2번째 스위치를 누르면
  {
    digitalWrite(led1_Pin, HIGH);  // 2번째 LED ON
  }
  else digitalWrite(led1_Pin, LOW);  // 2번째 LED OFF

  if (digitalRead(button2_Pin) == LOW)  // 3번째 스위치를 누르면
  {
    digitalWrite(led2_Pin, HIGH);  // 3번째 LED ON
  }
  else digitalWrite(led2_Pin, LOW);  // 3번째 LED OFF

  if (digitalRead(button3_Pin) == LOW)  // 4번째 스위치를 누르면
  {
    digitalWrite(led3_Pin, HIGH);  // 4번째 LED ON
  }
  else digitalWrite(led3_Pin, LOW);  // 4번째 LED OFF

  if (digitalRead(button4_Pin) == LOW)  // 5번째 스위치를 누르면
  {
    digitalWrite(led4_Pin, HIGH);  // 5번째 LED ON
  }
  else digitalWrite(led4_Pin, LOW);  // 5번째 LED OFF
}
*/