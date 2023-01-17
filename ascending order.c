#include <stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("sorting.txt", "w");
    if(fp==NULL)
    {
        printf("doesnt exist");
    }
    else
    {
        int arr1[100];
        int n, i, j, tmp;
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr1[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr1[j] <arr1[i])
                {
                    tmp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = tmp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            fprintf(fp,"%d  ", arr1[i]);
        }
    }
    fclose(fp);

}
