#include <stdio.h>
struct student
{

    char Name[100];
    char address[100];
    int age[50];
    int marks[100];
    int Total;
    float Avg;
};

int main()
{
    int i, n;
    printf("number of students: ");
    scanf("%d", &n);
    struct student e1;

    e1.Total = 0;
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter student Name : ");
        scanf("%s", &e1.Name[i]);
        printf("\nEnter student address : ");
        scanf("%s", &e1.address[i]);
        printf("\nEnter age %d : ", i + 1);
        scanf("%d", &e1.age[i]);
        printf("\nEnter marks %d : ", i + 1);
        scanf("%d", &e1.marks[i]);

        e1.Total = e1.Total + e1.marks[i];
    }

    
    printf("\nTotal : %d", e1.Total);
    return 0;
}
