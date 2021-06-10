#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf(" %d", &t);
    while (t--)
    {
        int count = 0;
        char n[1000000];
        scanf(" %s", n);
        int x = atoi(n);
        //printf("%d",x);
        if (x % 21 == 0)
        {

            printf("The streak is broken!\n");
        }
        else
        {
            for (int i = 0; i < strlen(n); i++)
            {

                if ((n[i] == '2') && (n[i + 1] == '1'))
                {
                    count++;
                    break;
                }
            }

            if (count > 0)
            {
                printf("The streak is broken!\n");
            }
            else
            {
                printf("The streak lives still in our heart!\n");
            }
        }
    }

    return 0;
}
