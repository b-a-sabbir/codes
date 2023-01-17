#include<stdio.h>

main ()
{
    int i, sum = 0, n;
    printf("enter last value ");
    scanf("%d", &n);
   for(i = 4; i<=n; i = i+8){
    sum = i+sum;
   }
    printf("sum = %d", sum);
}

