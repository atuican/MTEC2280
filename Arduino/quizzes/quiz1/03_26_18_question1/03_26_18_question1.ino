//Create a sketch with four LEDs. When you reset the Arduino, two of the four lights should turn on, and it should be truly random (or at least as random as we discussed). Print out the pin #s of the LEDs that are on.

int ledPin[] = {2, 3, 4, 5};

void setup() {
  Serial.begin(9600);

  // generate a new random seed
  randomSeed(analogRead(0));

  int rando1 = random(2, 6);
  int rando2 = random(2, 6);
  Serial.print(rando1);
  Serial.print(" , ");
  Serial.print(rando2);
  Serial.println(" ");

  // sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // turn them all off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }

  for (int i = 0; i < rando1; i++) {
    digitalWrite(rando1, HIGH);
  }

  for (int i = 0; i < rando2; i++) {
    digitalWrite(rando2, HIGH);
  }
}

void loop() {

}
