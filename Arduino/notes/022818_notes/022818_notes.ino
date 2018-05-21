int blinkDelay = 0;

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  blinkDelay += 5;
  digitalWrite(2, HIGH);
  delay(blinkDelay);
  digitalWrite(2, LOW);
  delay(blinkDelay);
}

