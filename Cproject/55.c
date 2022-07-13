#include <stdio.h>

int main() {

  int a[2][2] = {11,22,44,55};
  int *p;
  p = a[0];
  printf("%d %d\n", *(p+1), *(p+2)); 

  int b[2][2] = {11,22,44,55};
  int (*pp)[2] ; 
  pp = b;  
  printf("%d %d\n", *(*(pp+0)), *(*(pp+1)));  
  printf("%d %d\n", *(*(pp+0)+0), *(*(pp+1)+0));  
  
  return 0;
}