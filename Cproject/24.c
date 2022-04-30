#include <stdio.h>

int main(void){

  int a[2][3] = {{1,2,3}, {4,5,6}};
  int(*p)[3] = a;

  printf("%d\n", *(*(p + 1) + 1));
  printf("%d\n", *(p[1]));

  int *pp[3];
  pp[0] = &a[0][0];
  pp[1] = &a[0][1];
  pp[2] = &a[0][2];

  printf("%d\n", *pp[0]);
  
  return 0;
}