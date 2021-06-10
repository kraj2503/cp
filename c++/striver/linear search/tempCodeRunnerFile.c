#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf(" %d", t);
    while (t--)
    {
        int count = 0;
        char n[1000000];
        scanf("%s", n);
        for (int i = 0; i < strlen(n); i++)
        {
            if ((n[i] == 2) && (n[i + 1] == 1))
            {
                count++;
                break;
            }
        }
        if (count> 0)
        {
            printf("The streak is broken!");
        }
        else{
            printf("Streak is not broken");
        }
    }

    return 0;
}