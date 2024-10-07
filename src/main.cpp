#include <Arduino.h>

// test
// put function declarations here:

void setup() 
{  
Serial.begin(9600);
}

void loop() 
{
 Multiplication();
}

// Multiplication Function
int Multiplication() 
{
  // get 2 integers from input, return the numbers
  Serial.println("Please Provide the First Number: ");
  int num1 = Serial.parseInt();
  Serial.println("Please Provide the Second Number: ");
  int num2 = Serial.parseInt();
  int Multiplied = num1 * num2;
  Serial.print("The Result Is: ");
  Serial.println(Multiplied);

  showmenu();
}


