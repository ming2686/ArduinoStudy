int led = 13; // initializing pin 13 as the LED pin
int digitalPin = 2; // initializing pin 2 as KY-026 digital interface
int speakerpin = 3;
int analogPin = A0; // initializing pin A0 as KY-026 analog interface
int digitalVal; // state of digital readings
int analogVal; // state of analog readings


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if flame is detected
  {
    Serial.println("FIRE!");
    digitalWrite(led, HIGH); // turn ON Arduino's LED if a flame is detected
    tone(speakerpin,700,1000);
    delay(1000);
    tone(speakerpin,1500,1000);
    delay(1000);
  }
  else
  {
    digitalWrite(led, LOW); // otherwise turn OFF Arduino's LED
  }

  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial

  delay(100);
}