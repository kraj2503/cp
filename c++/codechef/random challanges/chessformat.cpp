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
        ll a, b;
        cin >> a >> b;
        // a += b;
        if (a+b < 3)
            cout << "1" << endl;
        else if (a+b>=3 && a+b<= 10)
            cout << "2" << endl;
        else if (a+b>=11 &&a+b<= 60)
            cout << "3" << endl;
        else
            cout << "4" << endl;
    }
    return 0;
}