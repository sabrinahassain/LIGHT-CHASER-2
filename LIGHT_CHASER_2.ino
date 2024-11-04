/* ˆ
Light Chaser Program 1 
 
Turns off all LEDs, then turns on one LED at a time. A counter tells the loop which LED to turn on next. 
 This is a digital output control since it uses multiple inputs to control many digital outputs in a pattern
*/ 
 
void setup() // the setup function runs once when you press reset or power the board 
 
{ 
  pinMode(12, OUTPUT);   // initialize all digital pins as an output. 
  pinMode(11, OUTPUT); 
  pinMode(13, OUTPUT); 
} 
  
void loop() { // the loop function runs over and over again forever 
 
digitalWrite(12, 1);    // the LED in digital pin 12 will turn on while the rest of the LEDS are off
 digitalWrite(11, 0);  
digitalWrite(13, 0); 
delay(400);  // the led will stay on for 400 milliseconds

digitalWrite(12, 0); 
 digitalWrite(11, 1); // the LED in digital pin 11 will turn on while the rest of the LEDs are off
digitalWrite(13,0); 
delay(400);   // the led will stay on for 400 milliseconds
  
digitalWrite(12,0); 
digitalWrite(11,0); 
digitalWrite(13,1); //the led in digital pin 13 will turn on while the rest of the lEDs are off
delay(400); //the led will stay on for 400 milliseconds
  
digitalWrite(12,0); //everything is off and the program will restart back to zero after 400 milliseconds has passed.
digitalWrite(11,1); 
digitalWrite(13,0); 
delay(400); 