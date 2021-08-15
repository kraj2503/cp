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
        float a, b;
        cin >> a >> b;
        //    ll x=a+1;
        //     ll ans = (ceil((b-x)/2)+ceil((x-a)/2));
        //     cout<<ans<<endl;
        // ll x=min(a,b);
        ll ans = -INT_MAX;
        ll res;
        float x = b - 1;
        if (a == b)
        {
            cout << "0" << endl;
            goto next;
        }

        res = (ceil((b - x) / 2) + ceil((x - a) / 2));
        ans = max(ans, res);

        printf("%ld\n", ans);
        next:
    }
    return 0;
}