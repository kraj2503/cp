#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
#define maxw 999999
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
        int n, m, x, count = 0;
        cin >> n >> m >> x;
        vector<pii> longest;
        vector<pii> index;

        for (ll i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            longest.push_back({y, i + 1});
        }
        sort(longest.begin(), longest.end(), greater<pii>());
        int cnt = 0;
        vector<int> ans;
        for (pii p : longest)
        {
            if (p.first >= m)
            {
                ans.push_back(p.second);
                cnt++;
            }
            else
            {
                if (cnt < x)
                {
                    ans.push_back(p.second);
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        int sz = ans.size();
        cout << sz << " ";
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i] << (i == sz - 1 ? "\n" : " ");
        }
    }
    return 0;
}