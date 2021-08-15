#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// int gcd(ll a, ll b)
// {
//     // Everything divides 0

//     // base case
//     if (a == b)
//         return a;

//     // a is greater
//     if (a > b)
//         return gcd(a - b, b);
//     return gcd(a, b - a);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b, count = 0, count2 = 0;
//         cin >> a >> b;
//         if ((a % 2 == 0 && b % 2 == 0) && (gcd(a, b) > 1))
//             printf("0\n");
//         else if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0))
//             printf("1\n");
//         else
//         {
//             ll q = a, w = b;

//             while (gcd(a, b) <= 1)
//             {
//                 b++;
//                 count2++;
//             }

//                 cout << count2 << endl;
//         }
//     }
//     return 0;
// }
__
int main()
{
    ll a, b, t;
    cin>>t;
    while (t--)
    {
        cin >> a >> b;
        if (__gcd(a, b) > 1)
        {
            printf("0\n");
        }
        else if (__gcd(a + 1, b) > 1 || __gcd(a, b + 1) > 1)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
}
