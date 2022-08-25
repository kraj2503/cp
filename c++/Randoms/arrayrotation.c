#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int j, n, y;
        scanf("%d %d", &n, &y);
        int rot[100000];
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &rot[j]);
        }
        //     int i;
        //     for (i = n - y; i < n; i++)
        //     {
        //         printf("%d ", rot[i]);
        //     }
        //     for(i=0;i<n-y;i++){
        //         printf("%d ",rot[i]);
        //     }
        // printf("\n");
        // }

        //     for (int i = 0; i < n; i++)
        //     {
        //         int j, temp;
        //         //Stores the last element of the array
        //         temp = rot[n - 1];
        //         for (j = n - 1; j > 0; j--)
        //         {
        //             //Shift element of array by one
        //             rot[j] = rot[j - 1];
        //         }
        //         //Last element of the array will be added to the start of the array.
        //         rot[0] = temp;
        //     }
        //     printf("\n");
        //     //Display the array after rotation
        //   //  printf("Array after circular rotation: \n");
        //     for (int i = 0; i < n; i++)
        //     {
        //         printf("%d ", rot[i]);
        //     }}
        int i;
        for (i = 0; i < y; i++)
        {
            int temp = rot[n - 1];
            for (j = n - 1; j > 0; j--)
            {
                rot[j] = rot[j - 1];
            }

            rot[j] = temp;
        }
        // printf("\narray elements after right rotate  : ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", rot[i]);
        }
  printf("\n"); }
    return 0;
}