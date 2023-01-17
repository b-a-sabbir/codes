#include<stdio.h>

main()
{
    int n, *p;
    scanf("%d", &n);
    int a[n], s;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];
    int min = *p;
    for(int i = 1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%d", min);
}
