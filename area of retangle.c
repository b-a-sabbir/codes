#include<stdio.h>

main()
{
    int length, width, area;

    printf("enter length: ");
    scanf("%d", &length);

    printf("enter width: ");
    scanf("%d", &width);

    area = length*width;
    printf("the area is = %d", area);
    return 0;
}
