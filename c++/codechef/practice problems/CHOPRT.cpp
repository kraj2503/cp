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
        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << "<" << endl;
        else if (a > b)
            cout << ">" << endl;
        else if (a = b)
            cout << "=" << endl;
    }
    return 0;
}