int speakerPin = 7;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  //  for (int i = 10000; i > 100; i -= 10) {
  //    digitalWrite(speakerPin, HIGH);
  //    delayMicroseconds(i);
  //
  //    for (int i = 1000; i > 100; i -= 10) {
  //      digitalWrite(speakerPin, HIGH);
  //      delayMicroseconds(3000);
  //    }
  //
  //    digitalWrite(speakerPin, LOW);
  //    delayMicroseconds(i);
  //    }

  for (int i = 50; i > 1; i -= 5) {
    digitalWrite(speakerPin, HIGH);
    delay(i);
    digitalWrite(speakerPin, LOW);
    delay(i);
  }
}
