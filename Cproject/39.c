#include <stdio.h>

int main(void)
{
  int number, sum = 0;

  for(number = 1; number < 1000; number++)
    sum = sum + number;
  
  printf("sum = %d\n", sum);
  return 0;
}