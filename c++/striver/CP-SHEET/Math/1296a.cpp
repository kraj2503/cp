#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum=0;
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
sum+=a[i];
            if (a[i] % 2 || a[i] == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (sum % 2 != 0 || sum == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (odd != 0 && even != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        // if (odd == 0)
        //     cout << "NO" << endl;
        // else if (odd % 2)
        //     cout << "YES" << endl;

        // else
        //     cout << "NO" << endl;
    }
    return 0;
}