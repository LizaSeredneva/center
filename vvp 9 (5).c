#include <stdio.h>
int main(void)
{
    int A;
    printf("Год = ");
    scanf ("%d", &A);
    printf("Номер столетия = %d\n",((A-1)/100)+1);
    return 0;
}