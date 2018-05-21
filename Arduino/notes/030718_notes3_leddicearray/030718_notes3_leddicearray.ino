int ledPin[] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  int rando = random(6);
  Serial.println(rando);

  delay(500);

}
