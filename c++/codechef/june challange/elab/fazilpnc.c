#include <stdio.h>
int main()
{
    int t, i;
    scanf(" %d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char string;
        int sum=0;
        for(i=0;i<n;i++){
         scanf("%c",&string); 
         sum+=string;
        }
        sum+=1;
        printf("%d\n",sum);
    }
    return 0;
}