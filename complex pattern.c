
#include<stdio.h>
int main(){
   int n, x;
   scanf("%d", &n);
   for(int i = 1; i<=n; i++)
   {
       for(int j = 1; j<=i; j++)
       {

           if(i%2==1)
           {
               //printf("AA");
               if(j%2==1)
               {
                   printf("AA");
               }
               else
               {
                   printf("BB");
               }
           }
           else
           {
             //printf("BB");
             if(j%2==1)
             {
                 printf("BB");
             }
             else
             {
                 printf("AA");
             }
           }

       }
       printf("\n");
   }
}
