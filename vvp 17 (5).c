#include <stdio.h>
int main(void)
{
    int a[10];
    int n,i;
    int i2;
    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
    for (i=0; i<n-1;++i){
        for (i2=i+1; i2<n;++i2){
            if (a[i]==a[i2]){
                printf("%i %i\n",i+1,i2+1);
            }
        }
    }
    return 0;
}