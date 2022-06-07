#include <stdio.h>

int main(void){
  int x = 10, y = 20;
  printf("%d", f(&x, y));
  printf("%d %d\n", x, y);
}

int f(int *i, int j){
  *i += 5;
  return (2 * *i+ ++j);
}
