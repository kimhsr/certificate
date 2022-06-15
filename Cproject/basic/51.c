#include <stdio.h>

void main(){
  int s1, s2;
  s1 = funcA(2);
  printf("F1 = %d,",s1);
  s1 = funcA(3);
  printf("F2 = %d,",s1);
  s2 = funcB(2);
  printf("F3 = %d,",s2);
  s2 = funcB(3);
  printf("F4 = %d",s2);
}

int funcA(int n){
  static int s = 1;
  s *= n;
  return s;
}
int funcB(int n){
  int s = 1;
  s *= n;
  return s;
}