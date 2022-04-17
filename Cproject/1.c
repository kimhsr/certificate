#include <stdio.h>

int main(){
  int* array[3];
  int a = 12, b = 24, c = 36;
  array[0] = &a;
  array[1] = &b;
  array[2] = &c;
  printf("%d\n", *(*array + 1));
  printf("%d\n", *(*array + 2));
  printf("%d\n", *(*array + 3));
  printf("%d\n", *(*array + 4));
  printf("%d\n", *array);
  printf("%d\n", *(array + 1));
  printf("%d\n\n", array[1]);

  printf("%d\n", **(array + 1));
  printf("%d\n", *array[1]);
  printf("%d\n", **(array));
  printf("%d\n", *(*array));
  printf("%d\n", **array + 1);

}