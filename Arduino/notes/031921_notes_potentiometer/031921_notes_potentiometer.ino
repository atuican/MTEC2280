void setup() {
  Serial.begin(9600);

  pinMode(8, OUTPUT);
}

void loop() {
  int val = analogRead(0);
  int mappedVal = map(val, 0, 1023, 1, 10);

  mappedVal *= 1000;

  digitalWrite(8, HIGH);
  delayMicroseconds(mappedVal);
  digitalWrite(8, LOW);
  delayMicroseconds(mappedVal);


//  Serial.print(val);
//  Serial.print(" becomes ");
//  Serial.println(mappedVal);
//  delay(20);
}
