#include <stdio.h>
int main(void)
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%d",&n);
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    int r=a[1]-a[0];
    for (i=1; i<n; ++i) {
        if (r!=a[i]-a[i-1]) {
            r=0;
        }
    }
    printf("%d\n ",r);
    return 0;
}