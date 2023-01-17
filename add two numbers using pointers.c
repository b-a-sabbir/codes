#include<stdio.h>

main()
{
    int a, b, *p, *q, sum;
    scanf("%d %d", &a, &b);
    p=&a;
    q=&b;
    sum = *p + *q;
    printf("%d", sum);
}
