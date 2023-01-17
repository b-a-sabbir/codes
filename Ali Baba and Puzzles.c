#include<stdio.h>

main()
{
    int a, b, c;
    long long int d, e, f, g, h, i, j, k, l, m;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    e = a+b+c;
    f = a+b-c;
    g = a+b*c;
    h = a-b+c;
    i = a-b-c;
    j = a-b*c;
    k = a*b+c;
    l = a*b-c;
    m = a*b*c;
    if(e==d||f==d||g==d|h==d||i==d|j==d||k==d||l==d||m==d){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
