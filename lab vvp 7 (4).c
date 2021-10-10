#include <stdio.h>
#include <math.h>
int main(void)
{
    int V1,V2;
    int S1,S2,S3;
    int S;
    int T;
    printf("V1(км/ч)=");
    scanf ("%d", &V1);
    printf("V2(км/ч)=");
    scanf ("%d", &V2);
    printf("S(км)=");
    scanf ("%d", &S);
    printf("T(ч)=");
    scanf ("%d", &T);
    S1=V1*T;
    S2=V2*T;
    S3=S1+S2+S3;
    printf("S3(км)= %d\n",S3);
    return 0;
}
