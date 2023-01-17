#include<stdio.h>
struct student
{
    char name[100];
    char roll[100];
    float marks;
};
main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student info[n];
    for(int i = 0; i<n; i++)
    {
        printf("\n\nEnter information for student %d : \n\n", i+1);
        printf("Enter name : ");
        getchar();
        gets(info[i].name);
        printf("\nEnter roll : ");
        gets(info[i].roll);
        printf("\nEnter marks: ");
        scanf("%f", &info[i].marks);
    }
    for(int i = 0; i<n; i++)
    {
        printf("\n\nInformation of student %d.... \n", i+1);
        printf("Name: %s\nRoll: %s\nMarks: %f\n",info[i].name, info[i].roll, info[i].marks);
    }
}
