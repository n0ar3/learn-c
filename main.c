#include <stdio.h>
#include <stdbool.h>

int main() {
  /**
   *  variable = A reusable container for a value.
   *             Behaves as if it were the value it contains.
   *
   *  int = whole numbers (4 bytes in modern systems)
   *  float = single-precision decimal number (4 bytes)
   *  double = double-precision decimal number (8 bytes)
   *  char = single character (1 byte)
   *  char[] = array of characters (size varies)
   *  bool = true or false (1 byte, requires <stdbool.h>)
   */

  int age = 25;
  printf("You are %d years old\n", age);

  int year = 2025;
  printf("The year is %d\n", year);

  int quantity = 2;
  printf("You have ordered %d x items\n", quantity);

  float gpa = 2.5;
  printf("Your GPA is %f\n", gpa);
  printf("Your GPA is %.1f\n", gpa);

  float price = 19.99;
  printf("The price is $%.2f\n", price);

  float temperature = -10.1;
  printf("The temperature is %.1fF\n", temperature);

  double pi = 3.14159265358979;
  printf("The value of pi is %.15lf\n", pi);

  double e = 2.7182818284590;
  printf("The value of e is %.15lf\n", e);

  char grade = 'A';
  printf("Your grade is %c\n", grade);

  char symbol = '!';
  printf("Your favorite symbol is %c\n", symbol);

  char currency = '$';
  printf("The currency is %c\n", currency);

  char name[] = "Imam n0ar3";
  printf("Hello, %s\n", name);

  char food[] = "pizza";
  printf("Your favorite food is %s\n", food);

  char email[] = "fake123@gmail.com";
  printf("Your email is %s\n", email);

  // true - 1 - false - 0
  bool isOnline = true;
  printf("%d\n", isOnline);
  if(isOnline) {
    printf("You are ONLINE\n");
  }
  else {
    printf("You are OFFLINE\n");
  }

  // true - 1 - false - 0
  bool isStudent = false;
  if(isOnline) {
    printf("You are a student\n");
  }
  else {
    printf("You are not a student\n");
  }

  // true - 1 - false - 0
  bool forSale = true;
  if(forSale) {
    printf("That item is for sale");
  }
  else {
    printf("That item is NOT for sale");
  }

  return 0;
}
