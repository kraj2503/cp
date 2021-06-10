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
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (auto &i : a)
            cin >> i;
        for (auto &o : b)
            cin >> o;

        for (ll i = 0; i <= m - 1; i++)
        {

            ll flag = 0;
            ll ans;
            if ((a[b[i] - 1] != 0) || (b[i] - 1 == 0))

                cout << "0 ";
            continue;
            //             }

            //             ll x = b[i] - 1;
            //             ll y = b[i] + 1;
            //             ll k1 = INT_MAX;
            //             ll k2 = INT_MAX;
            //             while (x >= 0)
            //             {
            //                 if (a[x] == 1)
            //                 {
            //                     flag = 1;
            //                     k1 = (a[i] - x);
            //                     break;
            //                 }
            //                 x--;
            //             }
            //             while (y < n)
            //             {
            //                 if (a[y] == 2)
            //                 {
            //                     flag = 1;
            //                     k2 = (y - b[i]);
            //                     break;
            //                 }
            //                 y++;
            //             }
            //             if (flag)
            //             {
            //                 ans = min(k1, k2);
            //             }
            //             if (!flag)
            //             {
            //                 ans = -1;
            //             }
            //             cout << ans << " ";
            //         }
            //         cout << '\n';
            //     }
            //     return 0;
            // }
            ll x = b[i] - 1;
            ll y = b[i];
            ll k1 = INT_MAX;
            ll k2 = INT_MAX;
            while (x--)
            {
                if (a[x] == 1)
                {
                    flag = 1;
                    k1 = ((b[i] - 1) - x);
                    break;
                }

                // while (y < n)
                ll p;
                for (p = 0; p <= (b[i] - 1); p++)
                {
                    if (a[y] == 2)
                    {
                        flag = 1;
                        k2 = (y - (b[i] - 1));
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
        }
        cout << '\n';
    }

return 0;
}