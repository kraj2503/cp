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
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) > 2 or abs(a - b) == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int ans = 0;
            if (abs(a - b) == 1)
            {
                if (max(a, b) < n)
                    ans++;
                if (min(a, b) > 1)
                ans++;
                cout<< ans<<endl;
            }
            else 
            cout<< "1" << endl;
        }
    }
    return 0;
}