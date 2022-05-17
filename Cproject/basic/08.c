#include <stdio.h>

int main(){
  int a = 3 + 5, b = 1, c;
  int ap, bp;
  ap = a++;
  bp = ++b;
  b = 3 * (ap == 8);
  c = 5 *(ap != 8);
  printf("%d %d %d %d %d", a, b, c, ap, bp);
}