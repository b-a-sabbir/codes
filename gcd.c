#include<stdio.h>

main()
{
    int a, b, x, gcd;

    scanf("%d %d", &a, &b);

    if(a < b){
        x = a;
    }
    else {
        x = b;
    }
    for(; x >= 1; x--){
        gcd = x;
        break;
    }
    printf("GCD is %d\n", gcd);

    return 0;
}
