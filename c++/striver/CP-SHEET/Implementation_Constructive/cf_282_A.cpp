#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, x = 0;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "++X" || str == "X++")
        {
            x++;
        }
        else if (str == "--X" || str == "X--")
        {
            x--;
        }
    }
    cout << x;
    return 0;
}