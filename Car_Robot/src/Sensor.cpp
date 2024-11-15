#include <Common.hpp>

int Sensor::distance(){
    long duration;
    int distance;
    digitalWrite(TRIG, LOW);  
    delayMicroseconds(2); 
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10); 
    digitalWrite(TRIG, LOW);
    duration = pulseIn(ECHO, HIGH);  
    distance = duration * 0.0344 / 2;
    return distance;
}

bool Sensor::infrared(int IR_pin){
    bool ir = digitalRead(IR_pin);
    return ir;
}
