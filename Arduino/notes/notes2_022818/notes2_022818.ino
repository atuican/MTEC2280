int blinkDelay = 0;

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  for (int i = 0; i < 100; i += 10) {
    digitalWrite(2, HIGH);
    delay(i);
    digitalWrite(2, LOW);
    delay(i);
  }
}

