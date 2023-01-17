#include<stdio.h>
#define PI 3.1416
int main()
{
    double r, area;

    printf("enter the radius: ");
    scanf("%lf", &r);

    area = PI*r*r;

    printf("area of the circle is %.2lf% \n", area);
    return 0;
}
