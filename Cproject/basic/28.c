#include <stdio.h>

void main(){
  int num[4] = {1, 2, 3, 4};
  int *pt = num;
  pt++;
  *pt++ = 5;
  *pt++ = 10;
  pt--;
  *pt++ += 20;
  printf("%d %d %d %d", num[0], num[1], num[2], num[3]);
}