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
        ll x, y;
        cin >> x >> y;
      //  bool ans = false;
        if(x%2 == 0){
            if(x==0 and y%2 == 0){
                cout << "YES" << endl;
            }
            else if(x==0 and y%2!=0){
                cout<<"NO" << endl;
            }
            else cout<<"YES" << endl;
        }
        else cout<<"NO" << endl;
    }
    return 0;
}