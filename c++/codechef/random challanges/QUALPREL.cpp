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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        int score = v[k - 1];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= score)
                count++;
            else
                break;
        }
        cout << count << endl;
    }

    return 0;
}