#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> r(numRows);

    for (int i = 0; i < numRows; i++)
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;

        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }

    return r;
}

int main()
{
    int t = 5;
    
    vector<vector<int>> result =generate(t);

   for (int i = 0; i < t; i++)

{cout<<endl;
    for (int j = 0; j < result[i].size(); j++)
    {
        cout << result[i][j];
    }
}

    return 0;
}