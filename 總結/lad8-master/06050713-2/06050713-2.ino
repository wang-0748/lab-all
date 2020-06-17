#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distance,ledState;
const byte intPin=6; //interrupt pin
volatile boolean state=LOW; //initial value of switch pin
void setup() {
pinMode(intPin, INPUT_PULLUP);
Serial.begin(9600);
attachInterrupt(6, int0, FALLING); 
}
void loop() {
}
void int0() {  
  distance = ultrasonic.read();
  Serial.print("Distance in CM: ");
  Serial.println(distance);
}
