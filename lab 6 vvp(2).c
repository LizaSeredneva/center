#include <stdio.h>
#include <math.h>
int main()
{
   int A=3; 
   int B=5;
   int C=4;
   int D;
 D=A;
 A=B;
 B=C;
 C=D;
    printf("A=%d", A);
    printf(" B=%d", B);
    printf(" C=%d", C);
    return 0;
}
