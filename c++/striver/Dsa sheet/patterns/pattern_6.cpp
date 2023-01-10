#include<bits/stdc++.h>
using namespace std;


/*
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 
*/
int main(){
    int t;cin>>t;
    for(int i = t ; i > 0; i--){
        for(int j = 1 ; j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
  
  return 0;
}