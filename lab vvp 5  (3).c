#include <stdio.h>
#include <math.h>
int main()
{
    int a=-1;
    int b=5;
    int c=2;
    int a1,b1,c1;
    int sum1;
    int sum2;
    int product;
    a1=abs(a);
    b1=abs(b);
    c1=abs(c);
    sum1=a1+c1;
    printf("AC = %d", sum1);
    sum2=b1*c1;
    printf(" BC = %d", sum2);
    product=sum1*sum2;
    printf(" product = %d", product);
    return 0;
}

