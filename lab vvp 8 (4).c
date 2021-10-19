#include <stdio.h>
int main(void)
{
    int A,C;
    printf("A=");
    scanf ("%d", &A);
    C=(A%10)*10+(A/10);
    printf("Обратное число равно %d\n",C);
    return 0;
}