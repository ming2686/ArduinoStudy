int sensor=13;

void setup(){
    pinMode(sensor, INPUT);
    Serial.begin(9600);
}

void loop(){
    Serial.println(digitalRead(sensor));
    if(Serial.available()>0){
        Serial.println("hi!!");
    }
    else{
        Serial.println("bye!!");
    }
}