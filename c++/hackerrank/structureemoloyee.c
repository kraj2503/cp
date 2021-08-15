#include <stdio.h>
struct employee
{

    char Name[100];
    char address[100];
    int age[50];
    int salary[100];
    int Total;
    float Avg;
};

int main()
{
    int i,n;
    printf("number of employees: ");
    scanf("%d",&n);
    struct employee e1;

    e1.Total = 0;
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter employee Name : ");
        scanf("%s", &e1.Name[i]);
        printf("\nEnter employee address : ");
        scanf("%s", &e1.address[i]);
        printf("\nEnter age %d : ", i + 1);
        scanf("%d", &e1.age[i]);
        printf("\nEnter salary %d : ", i + 1);
        scanf("%d", &e1.salary[i]);

        e1.Total = e1.Total + e1.salary[i];
    }

    e1.Avg = e1.Total / 3;

    
    printf("\nAverage : %.2f", e1.Avg);
    return 0;
}
