#include <stdio.h>

int main(void)
{
  int age;
  scanf("%d", &age);
  if(age>18)
    printf("�\n");
  else if(age>12)
    printf("û�ҳ�\n");
  else if(age>1)
    printf("���\n");
  else
    printf("�Է� ����\n");
  return 0;
}