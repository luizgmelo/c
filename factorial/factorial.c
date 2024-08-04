#include <stdio.h>

int factorial(int n);

void main()
{
  int n;

  printf("Enter a integer to calculate factorial: ");
  scanf("%d", &n);
  int result = factorial(n);
  printf("%d\n", result);
}

int factorial(int n) {
  // 5 * 4 * 3 * 2 * 1 -> 1 -> 2 -> 6 -> 24 -> 120
  if (n == 1) {
    return 1;
  }
  return n * factorial(n-1);
}

