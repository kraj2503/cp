#include<iostream>
#include <algorithm>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int x,m,d;
        cin>>x>>m>>d;
        m=m*x;
        d=x+d;
        int res = min(m,d);
        cout<<res<<endl;
    }
    

return 0;}