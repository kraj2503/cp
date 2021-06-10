#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("wo");

    int t;
    scanf("%d", t);
    while (t--)
    {
        printf("w");
        int count = 0;
        char arr[100000];
        scanf("%s", arr);
        arr[strlen(arr)] = 0;
        char temp[100000];
        for (int i = 0; i < strlen(arr); i++)
        {
            if (arr[i] == '1')
            {
                temp[strlen(temp)];
            }
            else
            {
                if (strlen(temp) > 0)
                {
                    count += 1;
                    char temp[100000];
                }
            }
        }
        if (count == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}