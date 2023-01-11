#include <bits/stdc++.h>
using namespace std;

/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 0; j < (n-i) * 4; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}