#include <stdio.h>

int main(){
  char msg[50] = "Hello World! God Luck!";
  int i = 2, number = 0;
  while( msg[i] != '!') {
    if( msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' ||
      msg[i] == 'o' || msg[i] == 'u')
      number++;
    i++;
  }
  printf("%d", number);
  return 0;
}