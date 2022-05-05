#include <stdio.h>

int main(void){
  int a, b, c, d;

  a = 5 > 4;
  b = 5 != 2;
  printf("%d %d\n", a, b);

  c = (5 > 2) + (2 > 4) + (5 > 1);
  printf("%d\n", c);

  d = 4 + !3 - !!2;
  printf("%d\n", d);
}