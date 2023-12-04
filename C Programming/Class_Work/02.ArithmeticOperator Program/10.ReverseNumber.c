#include <stdio.h>

int main() {

  int n=1234, reverse, remainder;

//   printf("Enter an integer: ");
//   scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("\nReversed number = %d", reverse);

  return 0;
}