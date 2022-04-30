#include <stdio.h>

int main(void){
  
  int a[5] = {1, 2, 3, 4, 5};
  int b[3][2] = { {1, 2}, {3, 4}, {5, 6}};

  int *p = a;
  int(*pp)[2] = b;

  printf("%d\n", *(p++));
  printf("%d\n", *(++p));
  printf("%d\n", *(p + 1));
  printf("%d\n", *(*(++pp) + 2));
  printf("%d\n", *(*(pp + 1) + 1));

  return 0;
}