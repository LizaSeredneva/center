#include <stdio.h>
int main(void)
{
    int n;
    float rez=1;
    int i;
    printf("N=");
    scanf ("%i", &n);
    for  (i =0; i<=n; ++i)
        rez *= 1.0+(float)i/10;
    printf("rez = %f \n ",rez);
    return 0;
}