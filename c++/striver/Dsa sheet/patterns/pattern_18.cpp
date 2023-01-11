#include<bits/stdc++.h>
using namespace std;

/*
E 
E D
E D C
E D C B
E D C B A
*/

int main(){
    int n =5;
char s=65+n;
    for(int i = 1 ; i <= n ;i++){
        for(int j=1;j<=i;j++){
            cout<<char(s-j)<<" ";
        }
    cout<<endl;
    }

  
  return 0;
}