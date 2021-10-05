#include <stdio.h>
#include <math.h>
int main()
{

    int x1, x2, y1, y2, x3, y3;
    int X1, X2, Y1, Y2, X3, Y3;
    double side1;
    double side2;
    double side3;
    double p;
    double p1;
    double s;
    printf("Введите значение x1 =");
    scanf("%d", &x1);
    printf(" Введите значение y1 =");
    scanf("%d", &y1);
    printf(" Введите значение x2 =");
    scanf("%d", &x2);
    printf("Введите значение y2 =");
    scanf("%d", &y2);
    printf(" Введите значение x3 =");
    scanf("%d", &x3);
    printf(" Введите значение y3=");
    scanf("%d", &y3);
    X1 = abs(x1);
    Y1 = abs(y1);
    X2 = abs(x2);
    Y2 = abs(y2);
    Y3 = abs(y3);
    X3 = abs(x3);
    side1 = sqrtl((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
    side2 = sqrtl((Y2 - Y3) * (Y2 - Y3) + (X2 - X3) * (X2 - X3));
    side3 = sqrtl((X3 - X1) * (X3 - X1) + (Y3 - Y1) * (Y3 - Y1));
    p = side1 + side2 + side3;
    p1 = p / 2;
    printf(" perimeter = %lf", p);
    s = sqrtl(p1 * (p1 - side1) * (p1 - side2) * (p1 - side3));
    printf(" square = %lf", s);
    return 0;
}


