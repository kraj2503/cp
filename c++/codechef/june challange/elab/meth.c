#include<stdio.h>
#include<stdlib.h>
int main(){

    int i,n,t,j,s1,s2,k=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for( i = 0 ; i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            s1=a[k]+k;
            for(j=0;j<n;j++){
                s2=a[j]+abs(i-j);
                if(s1>s2)
                s1=s2;
            }
            printf("%d ",s1);
        k++;        }
    printf("\n");
    }

    

return 0;}