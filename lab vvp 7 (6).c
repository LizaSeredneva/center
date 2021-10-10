#include <stdio.h>
#include <math.h>
int main(void)
{
    float A1,B1;
    float A2,B2;
    float X;
    float Y;
    float C1,C2;
    float D;
    printf("A1=");
    scanf ("%f", &A1);
    printf("B1=");
    scanf ("%f", &B1);
    printf("A2=");
    scanf ("%f", &A2);
    printf("B2=");
    scanf ("%f", &B2);
    printf("C1=");
    scanf ("%f", &C1);
    printf("C2=");
    scanf ("%f", &C2);
    D=(A1*B2)-(A2*B1);
    X=(C1*B2-C2*B1)/D;
    Y=(A1*C2-A2*C1)/D;
    printf("X=%f\n",X);
    printf("Y=%f\n",Y);
    return 0;
}
