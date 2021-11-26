#include <stdio.h>
int main()
{
   int a;
   printf("Введите число:") ;
   scanf ("%d", &a);
   if (a == 0) 
   printf("Нулевое ");
   else {
       if (a>0) 
       printf("Положительное ");
       else 
       printf("Отрицательное ");
       if ((a%2)== 0)
       printf("чётное ");
       else 
       printf("нечётное ");
   }
   printf("число");
   return 0;
}