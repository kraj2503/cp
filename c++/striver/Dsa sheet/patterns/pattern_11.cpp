#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 5;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ((i+j)%2)?cout<<"0 ":cout<<"1 ";
        }
        cout<<endl;
    }
  
  return 0;
}