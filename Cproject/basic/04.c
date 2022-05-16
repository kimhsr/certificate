#include <stdio.h>

int num1;

void main(){
  num1 = 10;
  printf("%d", num1);
  func();
  printf("%d", num1);
}
void func(){
  num1 = 20;
}