#include<iostream>
using namespace std;

int main(){
    int t,n,x,k,c=0;;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&x,&k);
       n+=1;
       for(int i=0;i<=n+1;){
           i+=k;
           if(i==x){
               //cout<<i<<endl;
               c++;
           }
           else if(i>x){
               break;
           }
       }
       
       for(int i=n+1;i<=0;){
           i-=k;
           if(i==x){
               c++;
           }
            else if(i<x){
               break;
           }
       }
    if(c>0)
    printf("YES\n");
    else 
    printf("NO\n");
    }
}