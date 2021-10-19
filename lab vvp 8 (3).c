#include <stdio.h>
int main(void)
{
    int A,B,C;
    printf("A=");
    scanf ("%d", &A);
    printf("B=");
    scanf ("%d", &B);
    C=A%B;
    printf("длина незанятой части отрезка A= %d\n", C);
    return 0;
}

