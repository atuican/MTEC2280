int ledPin[] = {2, 3, 4, 5, 6};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {

  // turn on each LEDs upwards
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[random(i)], HIGH);
    delay(75);
  }
  // turn off each LEDs upwards
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[random(i)], LOW);
    delay(75);
  }
}
