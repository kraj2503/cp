#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, temp;
    vector<int> rank;
    vector<int>::iterator it;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        rank.push_back(temp);
    }
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[i] = temp;
        rank.push_back(temp);
    }

    sort(rank.begin(), rank.end(), greater<int>());
    // for (int i = 1; i < t + n; i++)
    // {
    //     if (rank[i] == rank[i - 1])
            
    // }
    int count =0;
    for (int i = 0; i < n; i++)
    {if(rank[i]==rank[i-1]){count++;}
        it = find(rank.begin(), rank.end(), 5);
        cout << it - (rank.begin()+count) << " ";
    }
    return 0;
}