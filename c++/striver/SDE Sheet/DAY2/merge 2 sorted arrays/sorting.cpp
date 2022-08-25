// Time Complexity = (N log N) + O(N)+ O(N)
// Space O(N)



#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void merge(int *a1, int *a2, int n, int m)
{
    int a3[n + m], i, j;
    for (i = 0; i < n; i++)
        a3[i] = a1[i];
    for (i = n, j = 0; j <= m; i++, j++)
        a3[i] = a2[j];

    sort(a3, a3 + m + n);
    // for(int i = 0 ; i <m+n;i++){
    //     cout<<a3[i]<<" ";
    // }
    for (i = 0; i < n; i++)
    {
        a1[i] = a3[i];
        // cout << a1[i] << " ";
    }

    for (i = n, j = 0; i < m + n, j <= n; i++, j++)
    {
        a2[j] = a3[i];
        // cout << a2[j] << " ";
    }
}

int main()
{

    int a1[] = {10, 27, 38, 43, 87};
    int a2[] = {1, 5, 15, 23, 56, 88};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);

    merge(a1, a2, n, m);

    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }

    return 0;
}