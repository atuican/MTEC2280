//Create a a sketch with four LEDs and a potentiometer. The pot controls how many LEDs are on, such that when the pot is turned all the way to one side none of the LEDs are on, and as you rotate the pot the LEDs start to turn on in order until they are all on.

int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // declare the ledPin as an OUTPUT;
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  //read the value from the sensor;
  sensorValue = analogRead(sensorPin);
  int potentiometer = map(sensorValue, 920, 1023, 0, 500);
  Serial.println(sensorValue);

  if (potentiometer < 100 && potentiometer >= 0) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  else if (potentiometer < 200 && potentiometer >= 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  else if (potentiometer < 300 && potentiometer >= 200) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  else if (potentiometer < 400 && potentiometer >= 300) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }

    else if (potentiometer < 500 && potentiometer >= 400) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }

  delay (50);
}
