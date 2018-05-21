#include <SoftwareSerial.h>
#include <Servo.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;
Servo servoZ;

int servoXPin = 4;  // what pins are our servos connected to
int servoYPin = 5;
int servoZPin = 6;


void setup() {
  Serial.begin(9600);

  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);
}

void loop() {
  //  int pot1 = analogRead(0);
  //  int map1 = map(pot1, 0, 1023, 0, 180);
  //  int pot2 = analogRead(1);
  //  int map2 = map(pot2, 0, 1023, 0, 180);
  //  int pot3 = analogRead(2);
  //  int map3 = map(pot3, 0, 1023, 0, 180);


  servoX.write(0);
  servoY.write(0);
  servoZ.write(0);
}
