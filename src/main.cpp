#include <Arduino.h>

int ledpin = 13;

void showMenu();
void Sum();
void Multiplication();
void Blink();

void setup() 
{
  // Start
  Serial.begin(9600);

  // blink pinmode
  pinMode(ledpin, OUTPUT);

  // Show the menu
  showMenu();
}


void loop() 
{
  Blink();

  if (Serial.available() > 0) 
  {
    // Read the user input
    char option = Serial.read();

    // Check option
    switch (option) 
    {
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
void showMenu() 
{
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

//used to make a sum of two numbers 
void Sum() 
{
  int x;
  int y;
  
  Serial.println("Provide the first number: ");
   while (Serial.available() == 0)
  {
   // wait for input
  }
  x = Serial.parseInt();
  Serial.println(x);
  
  Serial.println("Provide the second number: ");
   while (Serial.available() == 0)
  {
   // wait for input
  }
  y = Serial.parseInt();
  Serial.println(y);

  int sum = x + y;

  Serial.print("The Result Is: ");
  Serial.println(sum);
  delay(1500);

  showMenu();

}

// Multiplication Function
void Multiplication() 
{
  // get 2 integers from input, return the numbers
  int num1;
  int num2;
  
  Serial.println("Please Provide the First Number: ");
  while (Serial.available() == 0)
  {
   // wait for input
  }
  num1 = Serial.parseInt();
  Serial.println(num1);

  Serial.println("Please Provide the Second Number: ");
  while (Serial.available() == 0)
  {
  
  }
  num2 = Serial.parseInt();
  Serial.println(num2);

  int Multiplied = num1 * num2;
  Serial.print("The Result Is: ");
  Serial.println(Multiplied);
  delay(1500);

  showMenu();
}

