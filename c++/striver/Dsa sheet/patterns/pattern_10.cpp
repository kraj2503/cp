#include<bits/stdc++.h>
using namespace std;

/*
 
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
int main(){
  int n=5;
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<"* ";
    }
    cout<<endl;
  }
  for(int i=n-1;i>0;i--){
    for(int j=0;j<i;j++){
        cout<<"* ";
    }
    cout<<endl;
  }  
  
  return 0;
}