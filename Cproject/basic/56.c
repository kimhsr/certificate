#include <stdio.h>

int my(int i, int j){
  if(i<3) i=j=1;
  else {
    i = i-1;
    j = j-i;
    printf("%d, %d", i, j);
    return my(i,j);
  }
}

void main(){
  my(5, 14);
  return 0;
}