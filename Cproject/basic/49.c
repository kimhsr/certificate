#include <stdio.h>

void funCount();
int main(void){
  int num;
  for(num=0; num<2; num++)
    funCount();
  return 0;
}

void funCount(){
  int num = 0;
  static int count;
  printf("num=%d, count=%d\n", ++num, count++);
}