#include <stdio.h>
int main() {
  int a;
  int b;
  printf("A integer: ");
  scanf("%d", &a);
  printf("Another integer:");
  scanf("%d", &b);
  printf("%d x %d = %d\n", a, b, a*b);
}
