#include<stdio.h>

main()
{
    char s1[50], s2[50], s3[100];
    gets(s1);
    gets(s2);
    int i = 0, j = 0;
    while(s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++;
        j++;
        //printf("%s", s3);
    }
    i = 0;
    //printf("%s", s3);
    while(s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    printf("%s", s3);
}
