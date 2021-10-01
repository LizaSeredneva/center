#include <stdio.h>
#include <math.h>
int main()
{
    
    int x1,x2,y1,y2;
    int X1,X2,Y1,Y2;
    int side1;
    int side2;
    int perimeter;
    int square;
    printf("x1 =");
    scanf("%d", &x1);
     printf("x2 =");
    scanf("%d", &x2); 
     printf("y1 =");
    scanf("%d", &y1); 
     printf("y2 =");
    scanf("%d", &y2);
    X1=abs(x1);
    Y1=abs(y1);
    X2=abs(x2);
    Y2=abs(y2);
    side1=Y1+Y2;
    printf("side1 = %d", side1);
    side2=X1+X2;
    printf(" side2 = %d", side2);
    perimeter=(2*(side1+side2));
    printf(" perimeter = %d", perimeter);
    square=side1*side2;
    printf(" square = %d", square);
    return 0;
}


