#include <stdio.h>
int main(void)
{
    int a[10];
    int n, i;
    printf("N: ");
    scanf("%d",&n);
    printf("A: ");
    scanf("%d",&a[0]);
    printf("B: ");
    scanf("%d",&a[1]);
    for (i=2; i<n; ++i){
        a[i]=0;
        int i2;
        for (i2=0; i2<i; ++i2) a[i] += a[i2];
    }
    for (i=0; i<n; ++i) printf("%d : %d\n",i,a[i]);
    return 0;
}