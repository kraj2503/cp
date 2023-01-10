#include<bits/stdc++.h>
using namespace std;

/*
    *
   ***  
  *****
 *******
*********
*/
int main(){
    int n=5;
   
        for(int i = 0 ; i < n ;i++){
            for(int j = 1 ; j < n - i ; j++){
                cout<<" ";
            }
            for(int k = 0 ; k <= (i+1)*2-2;k++){
                cout<<"*";
            }
            cout<<endl;
        }
   

  
  return 0;
}