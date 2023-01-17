#include <stdio.h>

int main()
{
    int K;
    scanf("%d", &K);
    if(K>=1){
        printf("Top 1\n");
    }
    if(K>=2&& K>=3){
        printf("Top 3\n");
    }
    if(K>='4' && K>='5'){
        printf("Top 5\n");
    }
    if(K>='6' && K>='10'){
        printf("Top 10\n");
    }
    if(K>='11' && K>='25'){
        printf("Top 25\n");
    }
    if(K>='26' && K>='50'){
        printf("Top 50");
    }
    if(K>='51' && K>='100'){
        printf("Top 100\n");
    }


}
