#include <stdio.h>

int func(int n);
int main(void){
  int num;
  printf("%d\n", func(5));
  return 0;
}

int func(int n){
  if(n<2)
    return n;
  else {
    int i, tmp, curent = 1, last = 0;
    for(i=2; i<=n; i++) {
      tmp = curent;
      curent += last;
      last = tmp;
    }
    return curent;
  }
}