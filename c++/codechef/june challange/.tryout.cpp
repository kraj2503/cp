#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, m, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll A[n];
        ll B[m];

        for (auto &i : A)
            cin >> i;
        for (auto &o : B)
            cin >> o;

        for (ll i = 0; i < m; ++i)
        {
            int flag = 0;
            ans = 0;
            if (A[B[i] - 1] != 0)
            {
                cout << ans << " ";
                continue;
            }
            ll x = B[i] - 1;
            ll y = B[i];
            ll k1 = INT_MAX;
            ll k2 = INT_MAX;
            while (x--)
            {
                if (A[x] == 1)
                {
                    flag = 1;
                    k1 = ((B[i] - 1) - x);
                    break;
                }
            }
           // while (y < n)
           ll p;
            for(p=0;p<=(B[i]-1);p++)
            {
                if (A[y] == 2)
                {
                    flag = 1;
                    k2 = (y - (B[i] - 1));
                    break;
                }
                //y++;
            }
            if (flag)
            {
                ans = min(k1, k2);
            }
            if (!flag)
            {
                ans = -1;
            }
            cout << ans << " ";
        }
        cout << '\n';
    }
    return 0;
}