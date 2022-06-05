#include <stdio.h>

void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main(void){
  int k, j;
  k = 3;
  j = 2;
  swap(k, j);
  printf("k=%d, j=%d", k, j);
  return 0;
}