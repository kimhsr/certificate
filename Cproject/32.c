#include <stdio.h>
int main(void){
  int a = 12, b = 8, c = 2, d = 3;
  a /= b++ - c * d;
  printf("%d", a);
}