#include <stdio.h>

int main(void)
{
  int age;
  scanf("%d", &age);
  if(age>18)
    printf("어른\n");
  else if(age>12)
    printf("청소년\n");
  else if(age>1)
    printf("어린이\n");
  else
    printf("입력 오류\n");
  return 0;
}