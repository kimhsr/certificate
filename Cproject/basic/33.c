#include <stdio.h>

void main(){
  int a[2][3] = {{-3, 14, 5}, {1, -10, 8}};
  int *b[] = {a[0], a[1]};
  int *p = b[1];
  printf("%d", *b[1]);
  printf("%d", *(++p));
  printf("%d", *(--p-2));
}