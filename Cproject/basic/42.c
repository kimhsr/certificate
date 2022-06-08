#include <stdio.h>

void main() {
  int value = 3, list[4] = {1, 3, 5, 7};
  int i;
  swap( value, &list[0] );
  swap( list[2], &list[3] );
  swap( value, &list[value] );
  for( i=0; i<4; i++ )
    printf("%d", list[i]);
}

void swap( int a, int *b ){
  int temp;
  temp = a;
  a = *b;
  *b = temp;
}