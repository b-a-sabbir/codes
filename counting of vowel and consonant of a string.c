#include<stdio.h>

main()
{
    char str[100];
    int i, len, vowel = 0, consonant = 0;
    gets(str);
    len = strlen(str);
    for(i = 0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if((str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("vowel = %d\n", vowel);
    printf("consonant = %d\n", consonant);
}
