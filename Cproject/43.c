#include <stdio.h>

void main(){
  int n = 10;
  int *p1=&n;
  int *p2=p1;
  printf("%d\n", (*p1)++);
  printf("%d\n", (*p2)++);
  printf("%d\n", n);
}