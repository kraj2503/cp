#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string catandmouse(int x, int y, int z)
{
    string A = "Cat A";
    string B = "Cat B";
    string C = "Mouse C";

    if (x > y)
        return B;
    else if (x < y)
        return A;
    else
        return C;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        string result;
        int a = abs(x - z), b = abs(y - z), c = z;
        result = catandmouse(a, b, c);
        cout << result << endl;
    }
    return 0;
}