#include <stdio.h>

int main(){
  int i = 5;
  int z = ++i + ++i + ++i;
  printf("%d, %d", i, z);
}