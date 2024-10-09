#include <Arduino.h>

void Sum();

//used to make a sum of two numbers 
void Sum() 
{
  Serial.println("Provide the first number: ");
  int x = Serial.parseInt();
  
  Serial.println("Provide the second number: ");
  int y = Serial.parseInt();

  int sum = y + x;

  Serial.print("Sum is: ");
  Serial.println(sum);

  showmenu();
}