#include <stdio.h>

int main(void){
  int a = 5  + 10, b = 3, c = 20, d;
  int ap, bp, cp;
  ap = ++a;
  bp = b++;
  cp = ++c;
  c = 10 * (ap == 8);
  d = 20 * (ap != 7);
  printf("%d %d %d %d %d %d", a, b, c, ap, bp, cp);
}