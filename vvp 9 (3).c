#include <stdio.h>
int main(void)
{
    int K,N,D;
    printf("День K = ");
    scanf ("%d", &K);
    printf("День недели для 1 января (N) = ");
    scanf ("%d", &N);
    D=((K+N-1)%7)+1;
    printf("Номер дня недели для K-го дня года равен %d\n",D);
    return 0;
}

