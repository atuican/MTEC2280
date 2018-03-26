int speakerPin = 7;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (int i = 10000; i > 1000; i -= 100) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);

    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }
}

