#include<stdio.h>

main()
{
    int array[10], i, max=0;
    for(i = 0; i<10; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i<10; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
        else{
            max=max;
        }

    }
    printf("\n\n");
    printf("%d ", max);
}
