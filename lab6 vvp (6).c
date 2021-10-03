#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h> //Математические функции
int main ()
{
   //Пример 3
int A;
int B; //Объявление переменной
printf("A="); // Вывод
scanf ("%d", &A); // Считывание ввода
B=A*A;
B=B*B;
B=B*B;
printf("A^8 = %d", B); // Вывод
return 0;
}

