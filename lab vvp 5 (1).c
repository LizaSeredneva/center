#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    double d;
    printf("x1 =");
    scanf("%d", &x1);
     printf("x2 =");
    scanf("%d", &x2); 
     printf("y1 =");
    scanf("%d", &y1); 
     printf("y2 =");
    scanf("%d", &y2);
    d=sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("d = %lf", d);
    return 0;
}
