const int relayPin = 2; //the base of the transistor attach to
int Switch=9;

void setup()
{
  Serial.begin(9600);  // start serial port at 9600 bps:
  pinMode(relayPin, OUTPUT);  //initialize the LED as output
  pinMode(Switch, INPUT_PULLUP);
}

void loop()
{
 if(digitalRead(Switch)==LOW){
     digitalWrite(relayPin,HIGH);
     delay(100);
 }
 else{
     digitalWrite(Relaypin,LOW);
     delay(100);
 }
}