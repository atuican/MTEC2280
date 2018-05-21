Project Title: Remote Desktop Switch

Summary: The project involves the use of a Feather Huzzah, a microcontroller that has the ability to wirelessly connect to Wi-Fi. Using the card, you can create a setup where you use the card to control the direction of a relay, and bridge the gap between the control wires that turn on a computer. Bridging the gap is what sends a signal to the PC to turn on and off.

What I learned: It turns out that however much knowledge you might have of circuitry and computing, there will always be some kind of issue that's not easily resolvable. But beyond that, I definitely learned a lot more about circuitry and how signal flows through the computer. I especially learned about switch mechanics, especially with how many circuits are just a single wire that's been split in half. I will definitely be learning more as time goes on, and I'm planning on continuing the project and expanding it further for culmination.

Video: https://drive.google.com/file/d/1gZ_G5cEENngtj_QozKTGrO7XO68m9gCt/view?usp=sharing

Getting Started: 1x ESP8266 Feather Huzzah; 1x Breadboard; 1x kO Resistor; 1x 3VDC Relay; 1x SS8050 NPN Transistor; 3.7v Battery (optional); Wires.

Software: Install Arduino program from arduino.cc. Follow the steps here for integration with Adafruit IO: https://learn.adafruit.com/adafruit-io-basics-digital-output/overview-uniontownlabs. In the process of following the Adafruit IO steps, you will add several libraries including: ArduinoHttpClient, Adafruit IO Arduino, Adafruit MQTT Library, ESP8266 Library (go to File -> Preferences -> Additional Boards Manager URLs, enter http://arduino.esp8266.com/stable/package_esp8266com_index.json). Once setup is complete, launch the digital out example at File -> Examples -> Adafruit IO Arduino -> adafruitio_07_digital_out. Once the example is open, switch to the config.h tab at the top; make sure the IO_USERNAME and IO_KEY are set to the Adafruit IO username you have and the key. Then change WIFI_SSID and WIFI_PASS to the wifi and passower you want to use; lastly, make sure the #include "AdafruitIO_WiFi.h" and the following line are not commented out. Everything else below that can be commented out. Switching to the adafruitio_07_digital_out tab, the only thing you need to change is the LED_PIN number, to whichever one you'd prefer to control.

Setup: 
1. Connect Feather Huzzah (LED_PIN port, ground and 3V) to the breadboard; the ground and 3V should go each to a rail, and the LED_PIN should go from the designated coil pin to a free spot near the relay.
2. Place the Relay and Transistor into position (see ComponentDiagram).
3. Connect ground wires from the ground rail to the left Transistor leg, and from the right transistor leg to the ground coil pin on the Relay.
4. Connect a 1kO resistor from the LED_PIN wire to the middle leg of the Transistor.
5. Connect voltage from the voltage rail to the voltage coil pin on the Relay.
6. Connect wires from the common and NC (Normally Closed) pins to the motherboard's power switch pins (can be switched).
7. Connect the Feather Huzzah (already with uploaded code) to power, either through the USB micro to wall or through a battery attached.
8. Using the Arduino IO website, press and hold the Reset button for half a second to supply voltage to the Relay and bridge the power switch. The computer will now open and close on each half-second press of the Reset button.

Resources:
Circuit Diagram
![alt text] (https://drive.google.com/open?id=1BviAFmV6ZebUmraugt6gFJ22u4PTl6Zt "Circuit Diagram")
Component Diagram
![alt text] (https://drive.google.com/open?id=1iW0cpghtGuxQiQ1cgIKvAfeovS2UsYx1 "Component Diagram")
Relay Diagram
![alt text] (https://drive.google.com/open?id=1IQ0KdmIMYAYW9heNwtl6EpuFat4dxI3_ "Relay Diagram")
Video
![alt text] (https://youtu.be/UME6CfP4Bzg "Adafruit Feather IO")

Author: Alberto Tuican