#include <stdio.h>
int main(void)
{
    int A,B;
    printf("Исходное число равно ");
    scanf ("%d", &A);
    B=(A%100)*10+A/100;
    printf("Полученное число равно %d\n",B);
    return 0;
}