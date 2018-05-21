/*
  1. Build Arduino board
  2. Example questions:
    a. Make 3 LEDs blink one after another (sets of LEDs, first one HIGH, then second, then third);
    b. Make 3 LEDs light up with different sound pitches (array of LEDs, set a sound pitch using loops);
  3. Random function:
    a. Random LEDs: */
      int[] ledPin = {3, 4, 5, 6, 7};

      void setup() {
      randomSeed(analogRead(0));
        
      for(int i = 0; i < 5; i++) {
        pinmode(ledPin[i], OUTPUT);
      }
      }

      void loop() {
        for (int i = 0; i < 5; i++) {
          pi
        }
      }

/*
  Review:
    LEDs
      pinMode, digitalWrite
    delay, delayMicroseconds
    arrays
      int[] arrayName = {1, 2, 3}
    for loop
    setup/loop
      vold() loop {}
    Serial, serial monitor, 9600, Serial.begin(9600)
      print vs println
    map
    speakers
    potentiometers
    breadboard
      rails
    wires and organized color system
    resistors
 */

