#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h> //Математические функции
int main ()
{
   //Пример 3
int x;                //Объявление переменной
int y;
printf("y="); // Вывод
scanf ("%d", &x); // Считывание ввода
y = (3*pow(x,6)-6*pow(x,2)-7); // Арифметические операции
printf("y: %d", y); // Вывод
return 0;
}

