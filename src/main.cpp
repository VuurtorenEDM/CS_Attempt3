#include <Arduino.h>

// test
int ledpin = 13;

// put function definitions here:
void Blink() 
{
  digitalWrite(ledpin, HIGH);
  delay(1000);
  digitalWrite(ledpin, LOW);
  delay(1000);
}