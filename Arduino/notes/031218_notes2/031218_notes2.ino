void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(7, HIGH);
    delayMicroseconds(1000);

    digitalWrite(7, LOW);
    delayMicroseconds(1000);
  }

  for (int i = 0; i < 100; i++) {
    digitalWrite(7, HIGH);
    delayMicroseconds(900);

    digitalWrite(7, LOW);
    delayMicroseconds(900);
  }

  for (int i = 0; i < 50; i++) {
    digitalWrite(7, HIGH);
    delayMicroseconds(500);

    digitalWrite(7, LOW);
    delayMicroseconds(500);
  }
}
