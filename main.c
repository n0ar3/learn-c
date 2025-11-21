#include <stdio.h>
#include <stdbool.h>

int main() {
  /**
   *  format specifier = Special tokens that begin with a % symbol,
   *    followed by a character that specifies the data type
   *    and optional modifiers (width, precision, flags).
   *    They control how data is displayed or interpreted.
   */

  // Width
  printf("Width\n");
  int num1 = 1;
  int num2 = 10;
  int num3 = -100;

  printf("%d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n", num3);
  printf("%4d\n", num1);
  printf("%4d\n", num2);
  printf("%4d\n", num3);
  printf("%04d\n", num1);
  printf("%04d\n", num2);
  printf("%04d\n", num3);

  // Precision
  printf("\nPrecision\n");
  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%.1f\n", price1);
  printf("%.2f\n", price2);
  printf("%.2f\n", price3);
  printf("%7.1f\n", price1);
  printf("%7.2f\n", price2);
  printf("%7.2f\n", price3);
  printf("%+7.1f\n", price1);
  printf("%+7.2f\n", price2);
  printf("%+7.2f\n", price3);

  return 0;
}
