#include <stdio.h>
int main(void)
{
    int a[10];
    int d,n, i;
    printf("N: ");
    scanf("%d",&n);
    printf("A[o]: ");
    scanf("%d",&a[0]);
    printf("D: ");
    scanf("%d",&d);
    for (i=1; i<n; ++i) a[i]=a[0]+(i)*d;
    for (i=0; i<n; ++i) printf("%d : %d\n",i,a[i]);
    return 0;
}