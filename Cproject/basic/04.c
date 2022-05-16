#include <stdio.h>

void main(){
  if(1){
    int num1 = 10;
    printf("%d", num1); 
  } // 여기서 블록의 종료와 함께 메모상에서 소멸
  printf("%d", num1); // 소멸 됐으니 오류가 발생함
}