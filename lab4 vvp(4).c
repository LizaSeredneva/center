#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h> //Математические функции
int main()
{
    int a=5;
    int b=3; //Объявление переменной
    int sum;
    int dif;
    double priv;
    int product;
    sum = (a*a) + (b*b); //Арифметические операции
    printf("sum: %d",sum); //Вывод
    dif = (a*a) - (b*b); //Арифметические операции
    printf(" dif: %d",dif); //Вывод
    priv = (a*a) / (b*b); //Арифметические операции
    printf(" priv: %lf",priv); //Вывод
    product = (a*a) * (b*b); //Арифметические операции
    printf(" product: %d",product); //Вывод
    return 0;
}