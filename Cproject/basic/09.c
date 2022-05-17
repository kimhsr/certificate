#include <stdio.h>

int main(){
  int a = 10, b = 20;
  int num;
  num = (a++ == 11) && (b++ == 20);
  printf("%d %d %d", num, a, b);
  return 0;
}