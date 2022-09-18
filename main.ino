#include <Servo.h>
#include <LiquidCrystal.h>

Servo serObj;

int servoPin = 7;
int potPin = A0;
int dt = 100;

void setup(){
    Serial.begin(9600);
    serObj.attach(servoPin);
}

void loop(){

    //___________Calculating the slop for interpolation___________ //
    int potRead = analogRead(potPin);
    int speed = ((420./1002.) * potRead) + 75;
    Serial.println(potRead);

    //____________________________________________________________ //
    serObj.write(180);
    delay(speed);
    serObj.write(0);
    delay(speed);
}









