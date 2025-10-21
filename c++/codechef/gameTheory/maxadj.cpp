#include <iostream>
#include<vector>
using namespace std;

int solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];

    if (n == 1)
    {
        cout << num[0] << "\n";
        return 0;
    }

    bool isRamesh = (p == 0);
    int ans;

    if (isRamesh)
        ans = max_element(num.begin(), num.end()) - num.begin();
    else
        ans = min_element(num.begin(), num.end()) - num.begin();

    k--;                  
    isRamesh = !isRamesh; 

    while (k--)
    {
        if (isRamesh)
        {
            if (ans == 0)
                ans = 1;
            else if (ans == n - 1)
                ans = n - 2;
            else
                ans = (num[ans - 1] > num[ans + 1]) ? ans - 1 : ans + 1;
        }
        else
        {
            if (ans == 0)
                ans = 1;
            else if (ans == n - 1)
            ans = n - 2;
            else
                ans = (num[ans - 1] < num[ans + 1]) ? ans - 1 : ans + 1;
        }

            isRamesh = !isRamesh;
    }

    cout << num[ans] << "\n";
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
