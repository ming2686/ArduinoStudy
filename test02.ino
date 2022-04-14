int Shock=3;
int ShockLED=13;

void setup(){
   pinMode(Shock,INPUT);
   pinMode(ShockLED,OUTPUT);
}

void loop(){
   if(digitalRead(Shock)==HIGH){
      digitalWrite(ShockLED,HIGH);
      delay(30);
   }
   else{
      digitalWrite(ShockLED,LOW);
      delay(100);
   }
}