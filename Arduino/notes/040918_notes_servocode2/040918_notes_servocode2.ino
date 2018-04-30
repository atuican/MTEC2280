#include <Servo.h>
 
Servo servoX;  // create servo object to control an X axis servo
Servo servoY;

int servoXPin = 2;  // what pins are our servos connected to?
int servoYPin = 4;
 
int posX = 0;    // variable to store the servo position
int posY = 0;

void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.
 
  // "attach" servos
  servoX.attach(servoXPin);  // attaches the servo on pin 5 to the servo object
  servoY.attach(servoYPin);
}
 
void loop() {
 
  
  
  // see if there is available serial data
  if (Serial.available() > 1) {
 
    // read the incoming bytes
    posX = Serial.read();
    posY = Serial.read();
  }
 
  // "write" for a servo motor just tells it what angle to go to
  servoX.write(posX);
  servoY.write(posY);
}
