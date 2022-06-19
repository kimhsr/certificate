#include <stdio.h>

int func(int n){
  if(n%2==1)
    n=n-1;
  if(n==0)
    return 0;
  return (func(n-2)+n);
}

void main(){
  
int result;
result = func(19);
printf("result=%d\n", result);

}
