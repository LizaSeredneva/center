#include <stdio.h>
#include <math.h>
int main()
{
    
    int x1,x2,y1,y2,z1,z2;
    int X1,X2,Y1,Y2,Z1,Z2;
    int side1;
    int side2;
    int side3;
    int p;
    int p1;
    int s;
    printf("x1 =");
    scanf("%d", &x1);
     printf("x2 =");
    scanf("%d", &x2); 
     printf("y1 =");
    scanf("%d", &y1); 
     printf("y2 =");
    scanf("%d", &y2);
    printf("z1 =");
    scanf("%d", &z1);
    printf("z2 =");
    scanf("%d", &z2);
    X1=abs(x1);
    Y1=abs(y1);
    X2=abs(x2);
    Y2=abs(y2);
    Z1=abs(z1);
    Z2=abs(z2);
    side1=sqrtl((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
    printf("side1 = %d", side1);
    side2=sqrtl((Y1 - Y2) * (Y1 - Y2) + (Z1 - Z2) * (Z1 - Z2));
    printf(" side2 = %d", side2);
    side3=sqrtl((Z1 - Z2) * (Z1 - Z2) + (X1 - X2) * (X1 - X2));
    printf(" side3 = %d", side3);
    p=side1+side2+side3;
    p1=p/2;
    printf(" perimeter = %d", p);
    s=sqrtl(p1*(p1-side1)*(p1-side2)*(p1-side3)) ;
    printf(" square = %d", s);
    return 0;
}


