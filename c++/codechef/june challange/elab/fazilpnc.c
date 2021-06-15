#include <stdio.h>
int main()
{

    int t, i;
    scanf("%d", t);
    while (t--)
    {
        char string;
        int count1 = 0;
        scanf("%c", &string);
        while (string > 0)
        {

            // If current bit is 1
            if (string & 1)
            {
                count1++;
            }
        }
            printf("%d", count1);
    }
    return 0;
}