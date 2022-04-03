#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb pushback
#define pop popback
#define fora(a, b) for (ll a; a < b; a++)
#define fors(a, b) for (ll a; a > b; a--)

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i <= n; i += 2)
        {
            int temp = n-i+1;
            ans+= temp*temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}