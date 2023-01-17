#include<stdio.h>

int main()
{
    double velocity, initial_velocity, acceleration, time, distance;

    printf("enter initial velocity: ");
    scanf("%lf", &initial_velocity);

    printf("enter acceleration: ");
    scanf("%lf", &acceleration);

     printf("enter time: ");
    scanf("%lf", &time);

     printf("enter velocity: ");
    scanf("%lf", &velocity);

    velocity = initial_velocity + (acceleration*time);
    distance = (initial_velocity) + 0.5 (acceleration*time*time);

    printf("distance = %.2lf", distance);

    return 0;

}
