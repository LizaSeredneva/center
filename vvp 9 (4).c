#include <stdio.h>
int main(void)
{
    int A,B,C,D,S;
    printf("A=");
    scanf ("%d", &A);
    printf("B=");
    scanf ("%d", &B);
    printf("C=");
    scanf ("%d", &C);
    D=(A/C)*(B/C);
    printf("Количество квадратовсо стороной C, размещенных на прямоугольнике размера A × B = %d\n",D);
    S=(A*B)-(D*C*C);
    printf("Площать оставщейся части = %d\n", S);
    return 0;
}
