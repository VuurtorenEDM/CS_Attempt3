#include <Arduino.h>

// test
int ledpin = 13;

void setup()
{
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  Blink();
}

// put function definitions here:
void Blink() 
{
  digitalWrite(ledpin, HIGH);
  delay(1000);
  digitalWrite(ledpin, LOW);
  delay(1000);
}