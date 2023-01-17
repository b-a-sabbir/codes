#include <stdio.h>

int main()
{
    double n, c, p, tmp;
    int a, t, k;
    scanf("%lf", &n);
    printf("NOTAS:\n");
    k = n*100;
    a = k/10000;
    t = k%10000;
    printf("%d nota(s) de R$ 100.00\n", a);
    a = t/5000;
    t = t%5000;
    printf("%d nota(s) de R$ 50.00\n", a);
    a = t/2000;
    t = t%2000;
    printf("%d nota(s) de R$ 20.00\n", a);
    a = t/1000;
    t = t%1000;
    printf("%d nota(s) de R$ 10.00\n", a);
    a = t/500;
    t = t%500;
    printf("%d nota(s) de R$ 5.00\n", a);
    a = t/200;
    t = t%200;
    printf("%d nota(s) de R$ 2.00\n", a);
    printf("MOEDAS:\n");
    a = t/100;
    t = t%100;
    printf("%d moeda(s) de R$ 1.00\n", a);
    a = t/50;
    t = t%50;
    printf("%d moeda(s) de R$ 0.50\n", a);
    a = t/25;
    t = t%25;
    printf("%d moeda(s) de R$ 0.25\n", a);
    a = t/10;
    t = t%10;
    printf("%d moeda(s) de R$ 0.10\n", a);
    a = t/5;
    t = t%5;
    printf("%d moeda(s) de R$ 0.05\n", a);
    a = t/1;
    //t = t%1;
    printf("%d moeda(s) de R$ 0.01\n", a);

}
