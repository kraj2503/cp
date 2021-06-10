#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
int a,b,c;
cin>>a>>b>>c;
if((a>b) && (a>c)){
    cout<<a<<endl;
}
else if((b>c)&&(b>c)){
    cout<<b<<endl;
}
else
cout<<c<<endl;
    }
    
    return 0;
}