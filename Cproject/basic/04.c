#include <stdio.h>

void main(){
  add(10);
  add(5);
  add(3);
}
int add(int i){
  static int sum = 0;
  sum = sum + i;
  printf("sum:%d\n", sum);
}