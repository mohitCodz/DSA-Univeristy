// adding two
#include <stdio.h>
int main() {
  int a = 101;
  int b = 201;
  int *ptr1 = &a;
  int *ptr2 = &b;
  printf("%d + %d = %d\n", *ptr1, *ptr2,  *ptr1 + *ptr2 );
  return 0;
}
