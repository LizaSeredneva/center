#include <stdio.h>
int main(void)
{
    int A,B,C;
    printf("A=");
    scanf ("%d", &A);
    printf("B=");
    scanf ("%d", &B);
    C=A/B;
    printf("Rоличество отрезков B, размещенных на отрезке A=");
    printf("%d\n",C);
    return 0;
}