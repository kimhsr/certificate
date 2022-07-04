#include <stdio.h>

int main(){
  int *arr[5];

  int a=30, b=50, c=20, d=100, e=250;

  arr[0]=&a;
  arr[1]=&b;
  arr[2]=&c;
  arr[3]=&d;
  arr[4]=&e;

  printf("%d \n", *arr[1] + **arr + 1);
} 