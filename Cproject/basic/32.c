#include <stdio.h>

int main(){
  char *array1[2] = {"Good morning", "C language"};
  printf("%s\n", array1[0]+5);
  printf("%c\n", *(array1[1]+6));
}