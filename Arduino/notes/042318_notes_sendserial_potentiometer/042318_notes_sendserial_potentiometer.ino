#include <SoftwareSerial.h>

// which pins for RX and TX on arduino?
int rxPin = 3;
int txPin = 2;

// create a BT object using rx and tx pins
SoftwareSerial bluetooth(rxPin, txPin); // RX, TX

int buttonPin = 5;

void setup() {
  // set up both serials
  Serial.begin(9600);
}

void loop() {
  int pot = analogRead(0);
  int potmap = map(pot, 0, 1023, 0, 255);

  Serial.write(potmap);
  bluetooth.write(potmap);
  delay(5); // be nice

}
