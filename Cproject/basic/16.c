#include <stdio.h>

int main(){
  int count = 2;
  int sum = 0;
  while(count <= 10){
    sum += count;
    count += 2;
  }
  printf("%d %d", count, sum);
}