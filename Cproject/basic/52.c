#include <stdio.h>

int a = 10;
int b = 20;
int c = 30;
void main(){
  func();
  func();
  printf("a=%d, b=%d, c=%d\n", a, b, c);
}

void func(void){
  static int a = 100;
  int b = 200;
  a++;
  b++;
  c = a;
}