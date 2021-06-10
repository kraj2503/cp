#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int up=0,down=0;
    while(t--){
        char i;
        cin>>i;
        if(i=='U'){
            up++;
        }
        else if(i=='D'){
            down++;
        }
    }
    cout<<up<<" "<<down;

return 0;}