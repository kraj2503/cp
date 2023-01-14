#include<bits/stdc++.h>
using namespace std;

string armstrongNumber(int n){
// code here
    int x=n;
    int ans=0;
        while(x>0){
            int temp=x%10;
            temp=temp*temp*temp;
            ans+=temp;
            x/=10;
            
        }
        if(ans==n)return "Yes";
        return "No";
    }

int main(){
cout<<armstrongNumber(123);    
  
  return 0;
}