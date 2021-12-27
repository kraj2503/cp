#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
bool isOdd(int i)
{
    if (i % 2 != 0)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = count_if(a, a + n, isOdd);
        if (count > 0)
        {
            int ans = 0;
            ans = count / 2;
            cout << ans << endl;
        }
        else
            cout << "0\n";
    }
    return 0;
}