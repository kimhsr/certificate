#include <stdio.h>

int main(){
  int darr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int sum1, sum2;
  sum1 = *(*darr+1) + *(*darr+2);
  sum2 = *darr[1] + *darr[2];
  printf("%d, %d", sum1, sum2);
}