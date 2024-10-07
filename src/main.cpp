#include <Arduino.h>

// test
// put function declarations here:
void Sum();

void setup() {
  // put your setup code here, to run once: please heckin work
  //int result = myFunction(2, 3);
}

// put function definitions here:
int Sum() {
  Serial.println("Provide the first number: ");
  int x = Serial.parseInt();

  Serial.println("Provide the second number: ");
  int y = Serial.parseInt();

  int sum = y + x;

  Serial.print("Sum is: ");
  Serial.println(sum);

  showmenu();
}