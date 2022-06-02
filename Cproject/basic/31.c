#include <stdio.h>

int main(){
  static char *c[] = {"aaa", "bbb", "ccc"};
  printf("%s", *(c+1));
}