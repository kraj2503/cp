#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n;
        cin >> n;
        int sum = 0, count = 1;

        for (int i = 1; sum < n; i++)
        {

            sum += 1 + 9 * i;
            count++;
        }

        cout << "Case #" << j << ": " << count << endl;
    }
    return 0;
}