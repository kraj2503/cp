#include <stdio.h>
int main()
{
    int n;
    int a[n][n];
    scanf("%d",&n);


    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf(" %c",&a[i][j]);
            }
    }
    for(int i=0; i<0;i++){
        for(int j=0;j<0;j++){
            printf("%c",a[i][j]);
        }
    }
    

    
    
    return 0;
}