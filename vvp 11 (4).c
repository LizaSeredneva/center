#include <stdio.h>
int main()
{
    int x, y;
    printf("Введите x: "); 
    scanf("%d", &x);
    printf("Введите y: ");
    scanf("%d", &y);
    if (x>0)
    {
        if (y>0)
             printf("точка находится в 1 четверти"); 
        else
            printf("точка находится в 4 четверти"); 
    }
    else
    {
        if (y>0)
            printf("точка находится во 2 четверти"); 
        else
            printf("точка находится в 3 четверти"); 
    };      
    return 0;
};