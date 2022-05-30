#include <stdio.h>

int main(){
  int i = 10;
  int j = 20;
  int *k = &i;

  scanf("%d", k);
  printf("%d, %d, %d\n", i, j, *k);

  return 0;
}