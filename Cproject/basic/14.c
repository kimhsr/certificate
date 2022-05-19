#include <stdio.h>

int main(){
  int a=0, b=1;
  switch(a){
    case 0 : printf("%d\n", b++); break;
    case 1 : printf("%d\n", ++b); break;
    default : printf("%d\n", b); break;
  }
}