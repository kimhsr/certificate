#include <stdio.h>

int f(int n){
  if(n>0)
    return n % 10 + f(n/10);
  else
    return 0;
}

void main(){
  int result;
  result = f(123);
  printf("%d\n", result);
}