#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a , b;
        cin>>a>>b;
        ll count = 0;
        while(a>0){
            a=a/b;
            count++;
        }
    cout<<count<<endl;   
    }  
    
return 0; 
}