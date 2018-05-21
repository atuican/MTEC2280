#include <SoftwareSerial.h>
#include <Servo.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;
Servo servoZ;

int servoXPin = 4;  // what pins are our servos connected to
int servoYPin = 5;
int servoZPin = 6;

// which pins for RX and TX on arduino?
int rxPin = 2;
int txPin = 3;

// create a BT object u+sing rx and tx pins
SoftwareSerial bluetooth(rxPin, txPin); // RX, TX

// store incoming data
int inByte = 0;

void setup() {
  // set up both serials
  Serial.begin(9600);
  bluetooth.begin(9600);

  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);
}

void loop() {
//    while (bluetooth.available()) {
//      inByte = bluetooth.read();
//      Serial.println(inByte);
//    }
//    
//  int pot1 = analogRead(0);
//  int map1 = map(pot1, 0, 1023, 0, 180);
//  int pot2 = analogRead(1);
//  int map2 = map(pot2, 0, 1023, 0, 180);
//  int pot3 = analogRead(2);
//  int map3 = map(pot3, 0, 1023, 0, 180);

  while (bluetooth.available()) {
    inByte = bluetooth.read();
//    Serial.println(inByte);
    if (inByte == 60) {
      servoZ.write(inByte);
    }
    if (inByte == 120) {
      servoY.write(inByte);
    }
    if (inByte == 180) {
      servoX.write(inByte);
    }
    if (inByte == '0') {
      servoX.write(inByte);
      servoY.write(inByte);
      servoZ.write(inByte);
    }
  }
}
