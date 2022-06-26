#include <stdio.h>

int main(){
  int number, count = 0;

  printf("input : ");
  scanf("%d", &number);
  while (number > -999) {
    count++;
    printf("input : ");
    scanf("%d", &number);
  }
  printf("count = %d\n", count);
  return 0;
}