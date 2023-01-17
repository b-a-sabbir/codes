#include<stdio.h>

main()
{
    int i, j, n, v = 64;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        v++;
        for(j = 0; j<i; j++){

            printf(" %c ", v);

        }
        printf("\n");
    }
}


