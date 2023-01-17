#include<stdio.h>

main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("biggest number is %d", a);
        }
        else {
            printf("biggest number is %d", c);
        }
    }
    if(b>a){
        if(b>c){
            printf("biggest number is %d", b);
        }
        else {
            printf("biggest number is %d", c);
        }
    }
    return 0;
}
