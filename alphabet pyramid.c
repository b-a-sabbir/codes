#include<stdio.h>

main()
{
    int i, j, n, v;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        v = 64;
        for(j = 0; j<i; j++){
            v++;
            printf("%c ", v);

        }
        printf("\n");
    }
}

