#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int a;cin>>a;
vector<int> q(a);
for(int i = 0 ; i <a;i++)cin>>q[i];
for(int i = 0 ; i <a;i++)cout<<q[i];
// for(auto i:q)cout<<q[i];
cout<<endl;
int pair=0;

for(int i = 0 ; i <a-1;i++)
    for(int j=i+1;j<a;j++){
        double d=2*q[j];
        if(d<q[i]){
            cout<<q[i]<<" "<<q[j]<<" "<<d<<endl;
            pair++;}
    }

    cout<<pair<<endl;
}
    return 0;
}