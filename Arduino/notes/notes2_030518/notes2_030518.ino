int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for (int ledIndex = 2; ledIndex < 7; ledIndex++) {
    for (int i = 2; i < 7; i++) {
      digitalWrite(i, LOW);
    }
    digitalWrite(ledIndex, HIGH);
    delay(100);
  }
}


