int ledPin[] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }

   for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
  }
}
