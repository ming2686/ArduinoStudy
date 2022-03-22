char character; // char 형 변수 선언
void call_A();
void call_SOS(); 

void setup(){ 
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello World");
}
void loop()
{
  if(Serial.available()){
    character = Serial.read();  // 입력 받은 값을 변수에 저장 
    if(character=='a'){
          call_A();
    }
    else if(character=='s'){
          call_SOS();
    }
    Serial.print(character); 
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
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(500);  
    }
    for(int i=0;i<3;i++){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(100);  
    }
  }
}