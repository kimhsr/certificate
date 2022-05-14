#include <stdio.h>

int main(void) {
  int a = 30, b = 15, c = 20, d = 40;
  a *= 3 + b++;
  c += 10 + ++d;
  printf("%d %d %d", a, b, c);
  
  return 0;
}