#include <stdio.h>
 int main(void)
{
    int A;
    int result;
    printf("A(байт)=");
    scanf ("%d", &A);
    result=A/1024;
    printf("result(Кбайт)=%d\n",result);
    return 0;
}