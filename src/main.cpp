#include <Arduino.h>

<<<<<<< Updated upstream
// test
// put function declarations here:
int myFunction(int, int);
=======
// Function declarations
void showMenu();
void Multiplication();
>>>>>>> Stashed changes

void setup() {
  // put your setup code here, to run once: please heckin work
  int result = myFunction(2, 3);
}

void loop() {
<<<<<<< Updated upstream
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}


=======
  if (Serial.available() > 0) {
    // Read the user input
    char option = Serial.read();
    
    // Check option
    switch (option) {
      case '1':
        Sum();
        break;
      case '2':
        Multiplication();
        break;
      default:
        Serial.println("Invalid option. 1 or 2.");
        showMenu();  // Show the menu again if its invalid
        break;
    }
  }
}

// display the menu
void showMenu() {
  Serial.println("1: Calculate Sum");
  Serial.println("2: Calculate Multiplication");
  Serial.println("1 or 2? ");
}
// Multiplication Function
void Multiplication() 
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
>>>>>>> Stashed changes
