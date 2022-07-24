#include <stdio.h>

int main(){
  int n = 4;
  int* pt = NULL;
  pt=&n;

  printf("%d", &n + *pt - *&pt +n);
  return 0;
}