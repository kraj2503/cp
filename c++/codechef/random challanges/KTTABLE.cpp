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
        ll n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int count = 0;
        if (b[0] <= a[0])
        {
            count = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if ((b[i] <= (a[i] - a[i - 1])))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}