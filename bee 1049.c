// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
   char n1[100], n2[100], n3[100];
   scanf("%s", n1);
   scanf("%s", n2);
   scanf("%s", n3);
   //gets(n1);
   //gets(n2);
   //gets(n3);
   if(n1=="vertebrado")
   {
       if(n2=="ave")
       {
           if(n3=="carnivoro")
           {
               printf("agula\n");
           }
           else
           {
               printf("agula\n");
           }
       }
       else if(n2=="mamifero")
       {
           if(n3=="onivoro")
           {
               printf("homem\n");
           }
           else
           {
               printf("vaca\n");
           }
       }
   }
   else if(n1=="invertebrado")
   {
       if(n2=="inseto")
       {
           if(n3=="hematofago")
           {
               printf("pulga\n");
           }
           else
           {
               printf("lagarta\n");
           }
       }
       else if(n2=="anelideo")
       {
           if(n3=="hematofago")
           {
               printf("sanguessuga\n");
           }
           else
           {
               printf("minhoca\n");
           }
       }
   }
}
