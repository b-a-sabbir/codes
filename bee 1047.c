// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int h1, m1, h2, m2;
   scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
   if(h2>=h1 && m2>=m1)
   {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1, m2-m1);
   }
   else if(m1>m2)
   {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1)-1, 60+(m2-m1));
   }
   else if(h1>h2)
   {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24+(h2-h1), m2-m1);
   }

    return 0;
}
