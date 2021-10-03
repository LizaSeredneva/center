#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h> //Математические функции
int main ()
{
   //Пример 3
int A;
int B;
int C;   //Объявление переменной
printf("A="); // Вывод
scanf ("%d", &A); // Считывание ввода
B=A*A;
C=B*A;
B=B*C;
C=B*B;
B=B*C;
printf("A^15 = %d", B); // Вывод
return 0;
}

