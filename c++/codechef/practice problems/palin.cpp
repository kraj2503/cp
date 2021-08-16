#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        string b;
        ll num{};
        cin >> b;
        string k = b;

        ll n = b.length();

        for (ll i = 0; i < n / 2; i++)
        {
            b[n - 1 - i] = b[i];
        }

        if (b > k)
        {
            cout << b << endl;
            continue;
        }
        //cout<<b<<endl;

        // if (n % 2 != 0 && b[n / 2] != '9')
        // {
        //     ll y = b[n / 2] - '0';
        //     y++;
        //     b[n / 2] = y + '0';
        //     cout << b << endl;
        //     continue;
        // }

        for (ll i = (n - 1) / 2; i >= 0; i--)
        {
            if (b[i] != '9')
            {
                b[i]++;
                b[n - 1 - i] = b[i];
                break;
            }
            else
            {
                b[i] = '0';
                b[n - 1 - i] = b[i];
            }
        }
        if (b[0] == '0')
        {
            b[0] = '1';
            b.push_back('1');
        }
        cout << b << endl;
    }
    return 0;
}