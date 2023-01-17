#include <stdio.h>

int main() {
    int h1, m1, h2, m2, min1, min2, dif;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    min1 = h1*60+m1;
    min2 = h2*60+m2;
    dif = abs(min2-min1);
    if(h2<h1)
    {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-dif/60,dif%60 );

    }
    else if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60,dif%60 );
    }
    return 0;
}
