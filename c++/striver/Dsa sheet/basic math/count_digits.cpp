#include<bits/stdc++.h>
using namespace std;


int main(){
   int N;cin>>N;
   
    int number=N;
        int digit=0;
        int ans=0;
        while(N>0){
            digit=N%10;
            if(digit!=0 &&number%digit==0){
                ans++;
            }
           N=N/10;
        }
        cout<< ans;

     return 0;
}