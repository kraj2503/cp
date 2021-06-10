#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        char st[150];
        scanf("%s", &st);
        int suvo = 0, suvojit = 0;
        for (int i = 0; i < strlen(st); i++)
        {
            if (st[i] == 'S')
            {

                if ((st[i + 1] == 'U') && (st[i + 2] == 'V') && (st[i + 3] == 'O') && ((st[i + 4] != 'J') || (st[i + 5] != 'I') || (st[i + 6] != 'T')))
                {
                    suvo++;
                }

                else if ((st[i + 1] == 'U') && (st[i + 2] == 'V') && (st[i + 3] == 'O') && (st[i + 4] == 'J') && (st[i + 5] == 'I') && (st[i + 6] == 'T'))
                {
                    suvojit++;
                }
            }
        }
        printf("SUVO = %d, SUVOJIT = %d\n", suvo, suvojit);
    }

    return 0;
}