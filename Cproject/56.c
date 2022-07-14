#include <stdio.h>

int main(){

  struct INFO{
    int id;
    int pw;
  };

  struct INFO info[] = {100,1,200,2,300,3};
  struct INFO* p;
  struct INFO* q;

  p = info;
  q = &info[0];

  printf("%d\n", *p);
  printf("%d\n", *info);

  printf("%d\n", *(p + 1));
  printf("%d\n", *(info + 1));

  printf("%d\n", *(p + 2));
  printf("%d\n", *(info + 2));
  
  printf("%d\n", *q);
  printf("%d\n", *&info[0]);

  printf("%d\n", *(q + 1));
  printf("%d\n", *&info[0]);

  printf("%d\n", *(q + 2));
  printf("%d\n", *&info[2]);

  return 0;
}