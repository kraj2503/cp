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
        ll l,r;
    while (t--)
    {
        ll x=0,y=0;
        cin >> l >> r;
        if(l*2<=r){
            x = l;
            y = l * 2;

        }
        else{
            x = -1;
            y = -1;
        }
        cout<<x<<" "<<y<<endl;
    }
return 0;
}