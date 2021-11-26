#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a, b, c;
   printf("A:");
   scanf ("%d", &a);
   printf("B:");
   scanf ("%d", &b);
   printf("C:");
   scanf ("%d", &c);
   if (abs(a-b)<abs(a-c)) 
   {
   printf("B\n");
   printf("Расстояние от А до В = %d", b-a);
   }
   else 
   {
   printf("C\n");
   printf("Расстояние от А до C = %d", c-a);
}
   return 0;
}