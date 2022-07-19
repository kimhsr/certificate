#include <stdio.h>

int main()
{
   int cnt=0;
   
   do{
      cnt++;
   } while(cnt < 5);
   
   if(cnt == 1)
      cnt++;
   else
      cnt = cnt + 3;
   
   printf("%d", cnt);
   return 0;
}