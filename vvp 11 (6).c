#include <stdio.h>
int main()
{
   int a;
   printf("Введите число:") ;
   scanf ("%i", &a);
   if ((a%2) == 0) 
   printf("Чётное ");
   else 
   printf("Нечётное ");
   if (a>99) 
   printf("трёхзначное ");
   else if ((99>=a) & (a > 9)) 
   printf("двухзначное ");
   else if (a <= 9)  
   printf("однозначное ");
   printf("число.");
   return 0;
}