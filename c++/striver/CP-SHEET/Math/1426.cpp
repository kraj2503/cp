#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,x;
        cin >> n >> x;
        if(n<=2){
            cout<<1<<endl;       
        }
        else{
        n -=2;
        ll q = n/x;
        
        ll r = n % x;
        if(r!=0){
            cout<<q+2<<endl;
        }
        else{
            cout<<q+1<<endl;
        }
        }
    }
return 0;
}