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
        int n, i;
        cin >> n;
        map<string, int> mp;
        int rep = 3;
        while (rep--)
        {
            for (int i = 0; i < n; i++)
            {
                string s;
                int x;
                cin >> s >> x;
                mp[s] += x;
            }
        }
        vector<int> ans;
        map<string, int>::iterator itr;
        for (itr = mp.begin(); itr != mp.end(); itr++)
            ans.push_back(itr->second);
        
        sort(ans.begin(), ans.end());

        for(auto x:ans)
        cout<<x<<" ";

        cout<<endl;
    }
    return 0;
}