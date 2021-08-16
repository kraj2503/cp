#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    int even = 0, odd = 0;
    while (t--)
    {
        int a;
        cin >> a;
        (a % 2) ? odd++ : even++;
    }
    if (even > odd)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
    return 0;
}