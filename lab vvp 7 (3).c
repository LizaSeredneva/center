#include <stdio.h>
#include <math.h>
int main(void)
{
    int X,A;
    int O;
    int Y;
    int Y1;
    printf("X(кг)=");
    scanf ("%d", &X);
    printf("A(руб за X кг)=");
    scanf ("%d", &A);
    printf("Y(кг)=");
    scanf ("%d", &Y);
    O=A/X;
    printf("O(руб за 1 кг)= %d\n",O);
    Y1=Y*O;
    printf("Y1(руб за Y кг)= %d\n",Y1);
    return 0;
}
