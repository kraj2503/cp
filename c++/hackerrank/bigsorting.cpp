#include <bits/stdc++.h>

using namespace std;


bool myfunction(string &a, string &b)
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    return a < b;
}
int main()
{
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for (int i = 0; i < n; i++)
    {
        cin >> unsorted[i];
    }

    sort(unsorted.begin(), unsorted.end(), myfunction);

    for (auto x : unsorted)
        cout << x << endl;

    return 0;
}