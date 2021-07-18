#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, temp;
    vector<int> rank;
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
    
    vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        it=find(rank.begin(), rank.end(), 5);
        cout<<it-rank.begin()<<" ";
        }
    return 0;
}