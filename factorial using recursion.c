#include<stdio.h>

int factorial(int n);

main()
{
    int n, fact;
    printf("Enter the number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial value of %d is : %d\n", n, fact);

}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
