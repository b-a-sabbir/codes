#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;

    printf("Enter Two Values :");
    scanf("%d%d",&a,&b);
    sum(a,b);
    sub(a,b);
    mult(a,b);
    div(a,b);

}
    sum(int a,int b)
    {


        printf("Addition : %d\n",a+b);

    }
    sub(int a,int b)
    {


        printf("Subtraction : %d\n",a-b);

    }
    mult(int a,int b)
    {


        printf("Multiplb : %d\n",a*b);

    }
    div(int a,int b)
    {


        printf("Div : %d\n",a/b);

    }

