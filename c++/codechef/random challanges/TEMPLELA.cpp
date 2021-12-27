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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        bool flag = true;
        if (n % 2 == 0)
        {
            flag = false;
        }
        else
        {
            ll start = 0, end = n - 1;
            ll counter = 1;
            while (start <= end)
            {
                if (v1[start] != counter || v1[end] != counter)
                {
                    flag = false;
                    break;
                }
                start++;
                end--;
                counter++;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}