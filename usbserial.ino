char character; // char 형 변수 선언
void call_A();
void call_SOS(); 

void setup(){ 
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);  // 시리얼통신속도를 9600bps 로 설정 
  Serial.println("Welcome to LK World.!");  // 시리얼모니터에 문자출력
}
void loop(){   
    if (Serial.available()){  
      character = Serial.read();  // 입력 받은 값을 변수에 저장  
      Serial.print(character);  // 변수를 시리얼모니터에 출력
      if(character=='a'){
          call_A();
      }
      if(character=='s'){
          call_SOS();
      }
    } 
}

void call_A(){
  while(1){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);
  }
}

void call_SOS(){
  while(1){
    for(int i=0;i<3;i++){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);
    }
    for(int i=0;i<3;i++){
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(100);  
    }
  }
}