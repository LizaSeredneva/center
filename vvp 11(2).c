#include <stdio.h>
int main(void)
{
   int a1, a2, a3,sum;
   printf("число 1:");
   scanf ("%d", &a1);
   printf("число 2:");
   scanf ("%d", &a2);
   printf("число 3:");
   scanf ("%d", &a3);
    if ((a1>=a2) & (a1>=a3)){
        if (a2>=a3){
            printf("%d\n",a1+a2);
        } else printf("%d\n",a1+a3);
    } else if ((a2>=a1) & (a2>=a3))
        if (a1>=a3){
            printf("%d\n",a1+a2);
        } else printf("%d\n",a2+a3);
    else
        if (a1>=a2){
            printf("%d\n",a1+a3);
        } else printf("%d\n",a2+a3);
   return 0;
}