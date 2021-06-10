#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll getp(ll a, ll b)
{
    static ll mod = 100000007;
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    if (b % 2 == 0)
    {

        ll answer = getp(a, b / 2);
        return (answer * answer) % mod;
    }
    else
    {
        ll answer = getp(a, ((b - 1) / 2));
        return ((a * answer) % mod * answer) % mod;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, temp;
        cin >> a >> b;

        temp = getp(2, a) - 1;

        cout << getp(temp, b) << endl;
    }
    return 0;
}