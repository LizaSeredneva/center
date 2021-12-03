#include <stdio.h> 
int main(void)
{
   double c;
   double m;
   printf("Стоимость 1 кг конфет:");
   scanf ("%lf", &c);
    for  (m = 0.1; m<1.1; m+=0.1)
        printf("%lf кг = %lf\n ",m,c*m);
   return 0;
}