#include <stdio.h>

void main(){
  int A = 10, B;
  int *C = &B;
  B = A--;
  B += 20;
  printf("%d", *C);
}