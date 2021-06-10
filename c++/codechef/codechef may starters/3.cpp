#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }

        int max=0;

        for(int i=0;i<k;i++){
            if(max<=a[i])
            max=a[i];
        }
        int temp[max+1]={0};
        for(int i=0;i<k;i++)
        temp[a[i]]++;

        int ans[k]={0};
        int j=0;
        for(int i=0;i<max+1;i++){
            if(temp[i]>1&& !(i>=n+1&&i<=n+m)){
                ans[j]=i;
                j++;
            }
        }
        cout<<j<<" ";
        for(int i=0;i<j;i++)
        cout<<ans[i]<<" ";
   

        cout<<endl;
    }


return 0;}