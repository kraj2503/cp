#include <stdio.h>
struct dob
{
    char month[100];
    int day[10];
    int year[10];
};
struct member
{
    char name[100];
    struct dob add;
};
void main()
{
    struct member emp;

    printf("Enter member name: ");
    scanf("%s ", emp.name);
    printf("\nEnter member month of birth : ");
    scanf("%s", emp.add.month);
    printf("Enter member day of birth : ");
    scanf("%d", &emp.add.day);
    printf("Enter member year of birth : ");
    scanf("%d", &emp.add.year);

    printf("Printing the member information....\n");

    {

        printf("name: %s", emp.name);
        printf("Month of Birth %s", emp.add.month);
        printf("day of birth: %d", emp.add.day);
        printf("year of birth: %d", emp.add.year);
    }
}