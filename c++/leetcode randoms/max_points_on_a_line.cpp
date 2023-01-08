/*
Time = O(N^2)
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int maxPoints(vector<vector<int>> &points)
{
    int n = 3;
    int s = 0;
    int q = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int slope = (points[i + 1][1] - points[i][1]) / (points[i + 1][0] - points[i][0]);
        for (int j = i; j < n; j++)
        {
            if (slope == (points[j + 1][1] - points[j][1]) / (points[j + 1][0] - points[j][0]))
            {
                ans++;
            }
        }
        cout << s << " " << ans << endl;
        q = max(s, ans);
    }
    cout << q;
    return q;
}
int main()
{
    vector<vector<int>> points = {{1, 1}, {2, 2}, {3, 3}};
    cout << maxPoints(points);
    return 0;
}

/*
Time = O(N^3)*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int maxPoints(vector<vector<int>> &p)
{
    int n = p.size();
    if (n <= 2)
        return n;
    int maxi = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int total = 2;
            for (int k = 0; k < n; k++)
            {
                if (k != i && k != j)
                {
                    if ((p[j][1] - p[i][1]) * (p[i][0] - p[k][0]) == (p[i][1] - p[k][1]) * (p[j][0] - p[i][0]))
                        total++;
                }
            }
            maxi = max(maxi, total);
        }
        return maxi;
    }
}
int main()
{
    vector<vector<int>> points = {{1, 1}, {2, 2}, {3, 3}};
    cout << maxPoints(points);
    return 0;
}