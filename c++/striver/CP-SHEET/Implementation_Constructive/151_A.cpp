#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int coke = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;
    // cout << coke << " " << lime << " " << salt << endl;
    // ;
    // cout << k * l;
    int least = min(coke, lime);

    cout << min(least, salt)/n << endl;
    return 0;
}