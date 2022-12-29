#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#define ll long long int
using namespace std;
int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string qw;
        cin >> qw;
        string an = qw;
        reverse(qw.begin(), qw.end());
        vector<vector<int>> vec(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (an[i - 1] == qw[j - 1])
                    vec[i][j] = 1 + vec[i - 1][j - 1];
                else
                    vec[i][j] = max(vec[i - 1][j], vec[i][j - 1]);
            }
        }

        cout << vec[n][n] / 2 << endl;
    }

    return 0;
}