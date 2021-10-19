#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float a1;
    printf("a (в радианах)=");
    scanf ("%f", &a);
    a1=(a*180)/M_PI;
    printf("a1 (в градусах)=");
    printf("%f",a1);
 
    return 0;
}