void setup() {
    Serial.begin(9600);
    
}

void loop() {
  int cds = analogRead(A0);
  Serial.println(cds);

  delay(500);
}