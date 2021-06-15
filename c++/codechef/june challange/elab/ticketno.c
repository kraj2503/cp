#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ticketnumber[102];
        int i;
        scanf("%s", ticketnumber);
        for (i = 0; i < strlen(ticketnumber) - 2; i++)
        {
            if (ticketnumber[i] != ticketnumber[i + 2])
            {
                printf("NO\n");
                break;
            }
            if (i == strlen(ticketnumber) - 3)
                printf("YES\n");
        }
    }
    return 0;
}