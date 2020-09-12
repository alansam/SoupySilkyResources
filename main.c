#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  float price, tax , applecare1, applecare2, subtotal, total;
  int years;
  char brand;

  printf("Enter the price of the phone: ");
  fflush(stdout);
  scanf("%f", &price);
  subtotal = price;
  fflush(stdout);
  printf("Is the phone an iPhone (Y/N): ");
  fflush(stdout);
  scanf(" %c", &brand);

  switch (brand) {
  case 'Y':
  case 'y':
    printf("Enter the number of years of Applecare: ");
    fflush(stdout);
    scanf("%d", &years);
    if (years <= 1) {
      applecare1 = (price * .12);
      subtotal = price + applecare1;
      printf("AppleCare price: %.2f\nsubtotal: %.2f\n",
      applecare1, subtotal);
    }
    else {
      applecare2 = (price * .1);
      subtotal = price + applecare2 * years;
      printf("AppleCare price: %.2f\nsubtotal: %.2f\n",
      applecare2, subtotal);
    }
    break;

  case 'N':
  case 'n':
    break;
  }
  tax = subtotal * .05;
  total = tax + subtotal;

  printf("The subtotal is %.2f\n"
         "The tax is: %.2f\n"
         "The total is %.2f\n",
   price, tax, total);

  return 0;
}