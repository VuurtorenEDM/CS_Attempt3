#include <Arduino.h>

// test
int ledpin = 13;

int myFunction(int, int);

void setup()
{
  pinmode(ledpin, OUTPUT);
}

void loop()
{
  myFunction();
}

// put function definitions here:
int myFunction(int x, int y) {
  digitalwrite(ledpin, HIGH);
  delay(1000);
  digitalwrite(ledpin, LOW);
  delay(1000);
}