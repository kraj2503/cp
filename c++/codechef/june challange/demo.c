#include <stdio.h>
#include <math.h>
extern int Triplet(int ar[],int n){
    int i,c=0,k,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if((pow(ar[j],2)+pow(ar[k],2))==pow(ar[i],2)) c=1;
            }
        }
    }
    return c;
}
int main()
{
    int t,x,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        int a[x];
        for(i=0;i<x;i++) scanf("%d",&a[i]);
        int y=Triplet(a,x);
        if(y==1) printf("Yes\n");
        else printf("No\n");
    }
	return 0;
}