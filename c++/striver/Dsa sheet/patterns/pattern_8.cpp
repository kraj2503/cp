#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for (int j = 0; j < (n - i) * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}