#include <Arduino.h>

int ledpin = 13;

void showMenu();
void Multiplication();
void Blink();

void setup() {
  // Start
  Serial.begin(6000);

  // blink pinmode
  pinMode(ledpin, OUTPUT);

  // Show the menu
  showMenu();
}


void loop() 
{
  Blink();


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

void Blink() 
{
  digitalWrite(ledpin, HIGH);
  delay(1000);
  digitalWrite(ledpin, LOW);
  delay(1000);
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
