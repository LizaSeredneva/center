#include <stdio.h>
int main(void)
{
    int N;
    printf("N=");
    scanf ("%d", &N);
    printf("С начала последнй минуты прошло %d\n",N%60);
    return 0;
}