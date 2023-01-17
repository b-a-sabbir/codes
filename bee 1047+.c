#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    int min1, min2, dif;
    min1= h1*60+m1;
    min2 = h2*60+m2;
    dif = min2-min1;
    if(dif<=0)
    {
         dif = dif+(60*24);
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60,dif%60 );

    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60,dif%60 );
    }

    return 0;
}
