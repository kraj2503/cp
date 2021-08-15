#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a[1000] = {1}, n_digit = 0, carry = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= n_digit; j++)
            {
                a[j] = a[j] * i + carry;
                carry = a[j] / 10;
                a[j] %= 10;
            }
            while (carry)
            {
                ++n_digit;
                a[n_digit] = carry % 10;
                carry /= 10;
            }
        }
        for (int i = n_digit; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}