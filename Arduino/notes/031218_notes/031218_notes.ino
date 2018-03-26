int ledPin[] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);
  Serial.println("Radical dude!");

  // generate a new random seed
  randomSeed(analogRead(3));

  int rando = random(6);
  Serial.println(rando);

  // sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // turn them all off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }

  // turn ON as many LEDs as rando
  for (int i = 0; i < rando; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}

void loop() {

}
