#include<stdio.h>
int main(){
    int t,men,women;
    char a[men][women];
    //scanf("%d",&t);
     scanf("%d %d",&men,&women);
    
        for(int i=0;i<men;i++){
            for(int j=0;j<women;j++){
                scanf(" %c",&a[i][j]);

            }
        }
        for(int i=0;i<men;i++){
            printf("\n");
            for(int j=0;j<women;j++){
                printf("%c",a[i][j]);

            }
        }
  
    
    return 0;
}