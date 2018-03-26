//Create a sketch with four LEDs. When you reset the Arduino, two of the four lights should turn on, and it should be truly random (or at least as random as we discussed). Print out the pin #s of the LEDs that are on.

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
