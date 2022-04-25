#include <stdio.h>

int main(void){
  int i = 5, j = 4, k = 1, L, m;
  L = j > 5 || j != 0;
  m = j <= 4 && k < 1;
  printf("%d, %d\n", L, m);
}