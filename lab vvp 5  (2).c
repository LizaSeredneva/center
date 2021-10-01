#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    int a1,b1,c1;
    int sum1;
    int sum2;
    int sum;
    printf("a =");
    scanf("%d", &a);
     printf("b =");
    scanf("%d", &b); 
     printf("c =");
    scanf("%d", &c);
    a1=abs(a);
    b1=abs(b);
    c1=abs(c);
    sum1=a1+c1;
    printf("AC = %d", sum1);
    sum2=b1+c1;
    printf(" BC = %d", sum2);
    sum=sum1+sum2;
    printf(" sum = %d", sum);
    return 0;
}
