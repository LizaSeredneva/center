#include <stdio.h>
int main(void)
{
   int n;
   int rez=0;
   int i;
   printf("N=");
   scanf ("%d", &n);
   for  (i=1; i<=(2*n-1); i+=2)
   {
     rez += i;
     printf("%d\n ", rez);
   }
   return 0;
}