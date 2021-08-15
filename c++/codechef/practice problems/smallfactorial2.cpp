#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a[1000] = {1}, n_digits = 0, carry = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= n_digits; j++)
            {
                a[j] = a[j] * i + carry;
                carry = a[j] / 10;
                a[j] %= 10;
            }
            while (carry)
            {
                ++n_digits;
                a[n_digits] = carry % 10;
                carry /= 10;
            }
        }
        for (int i = n_digits; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}