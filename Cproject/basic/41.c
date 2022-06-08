#include <stdio.h>
void main(){
  int a = 5;
  int b = 3;
  int c = 0;
  b = foo(a, &c);
  c = foo(b, &a);
  printf("a=%d b=%d c=%d", a, b, c);
}

int foo(int a, int *b){
  int c;
  *b = a + 1;
  c = a - 1;
  return c;
}  