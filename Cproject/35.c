#include <stdio.h>

int main(void) {
  int i, j;

  for(i=1; i<=5; i++){
    printf("%dÀÇ ¾à¼ö : ", i);
    for(j=1; j<=5; j++){
      if(i % j == 0){
        printf("%d", j);
      }
    }
    printf("\n");
  }
}