#include<stdio.h>

int main()
{
    double n, sum;

    printf("enter the last value: ");
    scanf("%lf", &n);

    sum = n*(n+1)/2;

    printf("the sum is = %.2lf", sum);

    return 0;
}
