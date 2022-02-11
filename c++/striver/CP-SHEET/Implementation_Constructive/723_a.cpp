#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    vector<int> g1;
    for (int i = 1; i <= 3; i++)
    {
        int x;
        cin >> x;
        g1.push_back(x);
    }

    sort(g1.begin(), g1.end());

    cout << (g1[1] - g1[0]) + (g1[2] - g1[1]);

    return 0;
}