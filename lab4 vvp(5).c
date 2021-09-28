#include <stdio.h>
#include <math.h>  
int main(void)
{
    int a=6; 
    int b=-3;
    int a2;
    int b2; //Объявление переменной
    int sum;
    int dif;
    double priv;
    int product;
    a2 = abs(a);
    b2 = abs(b);
    sum = a2 + b2; //Арифметические операции
    printf("sum: %d", sum); //Вывод
    dif = a2 - b2; //Арифметические операции
    printf(" dif: %d", dif); //Вывод
    priv = a2/b2; //Арифметические операции
    printf(" priv: %lf", priv); //Вывод
    product = a2 * b2; //Арифметические операции
    printf(" product: %d", product); //Вывод
    return 0;
}
