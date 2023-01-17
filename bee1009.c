#include<stdio.h>

main()
{
    char nam;
    double x,y, total;
    scanf("%s %lf %lf", &nam, &x,&y);
    total = x+.15*y;
    printf("TOTAL = %.2lf\n", total);
}
