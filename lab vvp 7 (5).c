#include <stdio.h>
#include <math.h>
int main(void)
{
    float A,B;
    float X;
    printf("A=");
    scanf ("%f", &A);
    printf("B=");
    scanf ("%f", &B);
    X=-1*(B/A);
    printf("x= %f",X);
    return 0;
}
