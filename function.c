#include <stdio.h>

int my_function(int a, int b) {
  int c = a + b;
  return c;
}

int main() {
  int a = 1;
  int b = 2;
  int c = my_function(a, b);
  printf("%d\n", c);
  return 0;
}
