#include<bits/stdc++.h>
using namespace std;

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<(n-(n-i))*2;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=n;j>=n-i;j--){
            cout<<"*";
        }
       
        cout<<endl;
    }
  
  return 0;
}