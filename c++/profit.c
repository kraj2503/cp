#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if(n==4){
            printf("No Profit");
            return 0;
        }
        int arr[n];
        int i, c, cd;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }int count=0;
        for (i = 0; i < n - 1; i++)
        {
            if ((arr[i] < arr[i + 1])&&(count%2==0))
            {
                c = arr[i];
                cd = i;
                 count++;
                printf("(%d ", cd);
            }

            int j;
            for (j = i; j < n; j++)
            {
                if ((j == n - 1)&&(count%2))
                {
                    printf("%d)\n", j);
                    count++;
                    i = j;
                   
                    break;
                }
               else if ((arr[j] > arr[j + 1])&&(count%2))
                {
                    int d = arr[j];
                    int fd = j;
                    printf("%d)", fd);
                    count++;
                    i = j;
                    break;
                }
              
            }
         
        }
        printf("\n");
    }

    return 0;
}