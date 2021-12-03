#include <stdio.h>
int main(void) {
    int a[10];
    int n;
    int min = a[1];
    printf("N: ");
    scanf("%d",&n);
    int i;
    for (i=0; i<n; ++i)
    {
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
  for(int i = 1; i < n - 1; i++) 
  {
       if(a[i] > a[i - 1] && a[i] > a[i + 1]) 
           min = a[i];
  }
  printf("%d\n",min);
  return 0;
}
