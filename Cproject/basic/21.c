#include <stdio.h>

int main(){
  int i, sum=0;
  for(i=1; i<=20; i+=2){
    if(i % 2 && i % 3) continue;
    sum += i;
  }
  printf("%d %d", sum, i);
  return 0;
}