#include <stdio.h>
int main(void)
{
    float a;
    float a2=1,rez=1;
    int i;
    int n;
    printf("A=");
    scanf ("%f", &a);
    printf("N=");
    scanf ("%d", &n);
   for  (i =2; i<=n; ++i)
   {
      a2*=a;
      rez +=a2;
   }
   printf("%f\n ",rez);
   return 0;
}