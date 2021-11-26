#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
 int a, b;
 printf("Введите число А: "); 
 scanf("%d", &a);
 printf("Введите число B: ");
 scanf("%d", &b);
 if (a == b) 
 a = b = 0;
 if (a>b)
 b = a;
 else a = b;
 printf("Число А=%d\nЧисло В=%d\n", a, b); 
 return 0;
}